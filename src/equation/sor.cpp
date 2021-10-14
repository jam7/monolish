#include "../../include/monolish_blas.hpp"
#include "../../include/monolish_equation.hpp"
#include "../../include/monolish_vml.hpp"
#include "../internal/monolish_internal.hpp"

namespace monolish {

////////////////////////////
// precondition
////////////////////////////
template <typename MATRIX, typename T>
void equation::SOR<MATRIX, T>::create_precond(MATRIX &A) {
  Logger &logger = Logger::get_instance();
  logger.solver_in(monolish_func);

  if (A.get_row() != A.get_col()) {
    throw std::runtime_error("error A.row != A.col");
  }

  this->precond.M.resize(A.get_row());
  // send M
  if (A.get_device_mem_stat() == true) {
    this->precond.M.send();
  }

  A.diag(this->precond.M);
  vml::reciprocal(this->precond.M, this->precond.M);

  logger.solver_out();
}
template void equation::SOR<matrix::Dense<float>, float>::create_precond(
    matrix::Dense<float> &A);
template void equation::SOR<matrix::Dense<double>, double>::create_precond(
    matrix::Dense<double> &A);

template void equation::SOR<matrix::CRS<float>, float>::create_precond(
    matrix::CRS<float> &A);
template void equation::SOR<matrix::CRS<double>, double>::create_precond(
    matrix::CRS<double> &A);

template void
equation::SOR<matrix::LinearOperator<float>, float>::create_precond(
    matrix::LinearOperator<float> &A);
template void
equation::SOR<matrix::LinearOperator<double>, double>::create_precond(
    matrix::LinearOperator<double> &A);

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

template <typename MATRIX, typename T>
void equation::SOR<MATRIX, T>::apply_precond(const vector<T> &r,
                                                vector<T> &z) {
  Logger &logger = Logger::get_instance();
  logger.solver_in(monolish_func);

  vml::mul(this->precond.M, r, z); // x = Ab

  logger.solver_out();
}
template void equation::SOR<matrix::Dense<float>, float>::apply_precond(
    const vector<float> &r, vector<float> &z);
template void equation::SOR<matrix::Dense<double>, double>::apply_precond(
    const vector<double> &r, vector<double> &z);

template void equation::SOR<matrix::CRS<float>, float>::apply_precond(
    const vector<float> &r, vector<float> &z);
template void equation::SOR<matrix::CRS<double>, double>::apply_precond(
    const vector<double> &r, vector<double> &z);

template void
equation::SOR<matrix::LinearOperator<float>, float>::apply_precond(
    const vector<float> &r, vector<float> &z);
template void
equation::SOR<matrix::LinearOperator<double>, double>::apply_precond(
    const vector<double> &r, vector<double> &z);

////////////////////////////
// solver
////////////////////////////

template <typename MATRIX, typename T>
int equation::SOR<MATRIX, T>::monolish_SOR(MATRIX &A, vector<T> &x,
                                                 vector<T> &b) {
  Logger &logger = Logger::get_instance();
  logger.solver_in(monolish_func);

  if (A.get_row() != A.get_col()) {
    throw std::runtime_error("error, A.row != A.col");
  }
  if (A.get_device_mem_stat() != x.get_device_mem_stat() &&
      A.get_device_mem_stat() != b.get_device_mem_stat()) {
    throw std::runtime_error("error, A.get_device_mem_stat != "
                             "x.get_device_mem_stat != b.get_device_mem_stat");
  }

  vector<T> d(A.get_row(), 0.0);
  util::send(d);

  T w = 1.0;
  A.diag(d);
  int color = 2;

  for(size_t iter = 0; iter < this->get_maxiter(); iter++){
      T nrm2 = 0.0;
      for(int i = 0; i < A.get_row(); i++){
          T tmp = x[i];
          x[i] = b[i];
          for(int j = A.row_ptr.data()[i]; j < A.row_ptr.data()[i+1]; j++){
              int col = A.col_ind.data()[j];
              x[i] -= (col != i ? A.val.data()[j] * x[col] : 0.0);
          }
          x[i] /= d[i];

          x[i] = tmp+w*(x[i]-tmp);

          nrm2 += fabs((tmp-x[i])/tmp); 
      }

      if (this->get_print_rhistory() == true) {
          *this->rhistory_stream << iter + 1 << "\t" << std::scientific << nrm2
              << std::endl;
      }
      if (nrm2 < this->get_tol() && this->get_miniter() <= iter + 1) {
          logger.solver_out();
          return MONOLISH_SOLVER_SUCCESS;
      }
      if (std::isnan(nrm2)) {
          return MONOLISH_SOLVER_RESIDUAL_NAN;
      }
  }

  logger.solver_out();
  return MONOLISH_SOLVER_NOT_IMPL;
}
// template int equation::SOR<matrix::Dense<double>, double>::monolish_SOR(
//     matrix::Dense<double> &A, vector<double> &x, vector<double> &b);
// template int equation::SOR<matrix::Dense<float>, float>::monolish_SOR(
//     matrix::Dense<float> &A, vector<float> &x, vector<float> &b);

template int equation::SOR<matrix::CRS<double>, double>::monolish_SOR(
    matrix::CRS<double> &A, vector<double> &x, vector<double> &b);
template int equation::SOR<matrix::CRS<float>, float>::monolish_SOR(
    matrix::CRS<float> &A, vector<float> &x, vector<float> &b);

// template int
// equation::SOR<matrix::LinearOperator<double>, double>::monolish_SOR(
//     matrix::LinearOperator<double> &A, vector<double> &x, vector<double> &b);
// template int
// equation::SOR<matrix::LinearOperator<float>, float>::monolish_SOR(
//     matrix::LinearOperator<float> &A, vector<float> &x, vector<float> &b);

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

template <typename MATRIX, typename T>
int equation::SOR<MATRIX, T>::solve(MATRIX &A, vector<T> &x, vector<T> &b) {
  Logger &logger = Logger::get_instance();
  logger.solver_in(monolish_func);

  int ret = 0;
  if (this->get_lib() == 0) {
    ret = monolish_SOR(A, x, b);
  }

  logger.solver_out();
  return ret; // err code
}

// template int equation::SOR<matrix::Dense<float>, float>::solve(
//     matrix::Dense<float> &A, vector<float> &x, vector<float> &b);
// template int equation::SOR<matrix::Dense<double>, double>::solve(
//     matrix::Dense<double> &A, vector<double> &x, vector<double> &b);

template int equation::SOR<matrix::CRS<float>, float>::solve(
    matrix::CRS<float> &A, vector<float> &x, vector<float> &b);
template int equation::SOR<matrix::CRS<double>, double>::solve(
    matrix::CRS<double> &A, vector<double> &x, vector<double> &b);

// template int equation::SOR<matrix::LinearOperator<float>, float>::solve(
//     matrix::LinearOperator<float> &A, vector<float> &x, vector<float> &b);
// template int equation::SOR<matrix::LinearOperator<double>, double>::solve(
//     matrix::LinearOperator<double> &A, vector<double> &x, vector<double> &b);
} // namespace monolish
