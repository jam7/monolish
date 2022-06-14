#include "blas/matadd.hpp"
#include "blas/matmul.hpp"
#include "blas/matsub.hpp"
#include "blas/matvec.hpp"
#include "blas/matvec_N.hpp"
#include "blas/matvec_T.hpp"
#include "blas/mm_copy.hpp"
#include "blas/mscal.hpp"
#include "blas/scalar_times.hpp"
#include "blas/times_col.hpp"
#include "blas/times_col_line.hpp"
#include "blas/times_row.hpp"
#include "blas/times_row_line.hpp"

int main(int argc, char **argv) {
  if (argc != 4) {
    std::cout << "error!, $1:M, $2:N, $3:K" << std::endl;
    return 1;
  }

  // monolish::util::set_log_level(3);
  // monolish::util::set_log_filename("./monolish_test_log.txt");

  size_t M = atoi(argv[1]);
  size_t N = atoi(argv[2]);
  size_t K = atoi(argv[3]);
  std::cout << "M=" << M << ", N=" << N << ", K=" << K << std::endl;

  // matadd Dense//
  if (test_send_matadd<monolish::matrix::Dense<double>,
                       monolish::matrix::Dense<double>,
                       monolish::matrix::Dense<double>, double>(M, N, 1.0e-8) ==
      false) {
    return 1;
  }
  if (test_send_matadd<monolish::matrix::Dense<float>,
                       monolish::matrix::Dense<float>,
                       monolish::matrix::Dense<float>, float>(M, N, 1.0e-4) ==
      false) {
    return 1;
  }
  if (test_matadd<monolish::matrix::Dense<double>,
                  monolish::matrix::Dense<double>,
                  monolish::matrix::Dense<double>, double>(M, N, 1.0e-8) ==
      false) {
    return 1;
  }
  if (test_matadd<monolish::matrix::Dense<float>,
                  monolish::matrix::Dense<float>,
                  monolish::matrix::Dense<float>, float>(M, N, 1.0e-4) ==
      false) {
    return 1;
  }

  // matadd CRS//
  if (test_send_matadd<monolish::matrix::CRS<double>,
                       monolish::matrix::CRS<double>,
                       monolish::matrix::CRS<double>, double>(M, N, 1.0e-8) ==
      false) {
    return 1;
  }
  if (test_send_matadd<monolish::matrix::CRS<float>,
                       monolish::matrix::CRS<float>,
                       monolish::matrix::CRS<float>, float>(M, N, 1.0e-4) ==
      false) {
    return 1;
  }
  if (test_matadd<monolish::matrix::CRS<double>, monolish::matrix::CRS<double>,
                  monolish::matrix::CRS<double>, double>(M, N, 1.0e-8) ==
      false) {
    return 1;
  }
  if (test_matadd<monolish::matrix::CRS<float>, monolish::matrix::CRS<float>,
                  monolish::matrix::CRS<float>, float>(M, N, 1.0e-4) == false) {
    return 1;
  }

  // matadd LinearOperator//
  if (test_send_matadd_linearoperator<monolish::matrix::LinearOperator<double>,
                                      monolish::matrix::LinearOperator<double>,
                                      monolish::matrix::LinearOperator<double>,
                                      double>(M, N, 1.0e-8) == false) {
    return 1;
  }
  if (test_send_matadd_linearoperator<monolish::matrix::LinearOperator<float>,
                                      monolish::matrix::LinearOperator<float>,
                                      monolish::matrix::LinearOperator<float>,
                                      float>(M, N, 1.0e-4) == false) {
    return 1;
  }
  if (test_matadd<monolish::matrix::LinearOperator<double>,
                  monolish::matrix::LinearOperator<double>,
                  monolish::matrix::LinearOperator<double>, double>(
          M, N, 1.0e-8) == false) {
    return 1;
  }
  if (test_matadd<monolish::matrix::LinearOperator<float>,
                  monolish::matrix::LinearOperator<float>,
                  monolish::matrix::LinearOperator<float>, float>(
          M, N, 1.0e-4) == false) {
    return 1;
  }

  // matsub Dense//
  if (test_send_matsub<monolish::matrix::Dense<double>,
                       monolish::matrix::Dense<double>,
                       monolish::matrix::Dense<double>, double>(M, N, 1.0e-8) ==
      false) {
    return 1;
  }
  if (test_send_matsub<monolish::matrix::Dense<float>,
                       monolish::matrix::Dense<float>,
                       monolish::matrix::Dense<float>, float>(M, N, 1.0e-4) ==
      false) {
    return 1;
  }
  if (test_matsub<monolish::matrix::Dense<double>,
                  monolish::matrix::Dense<double>,
                  monolish::matrix::Dense<double>, double>(M, N, 1.0e-8) ==
      false) {
    return 1;
  }
  if (test_matsub<monolish::matrix::Dense<float>,
                  monolish::matrix::Dense<float>,
                  monolish::matrix::Dense<float>, float>(M, N, 1.0e-4) ==
      false) {
    return 1;
  }

  // matsub CRS//
  if (test_send_matsub<monolish::matrix::CRS<double>,
                       monolish::matrix::CRS<double>,
                       monolish::matrix::CRS<double>, double>(M, N, 1.0e-8) ==
      false) {
    return 1;
  }
  if (test_send_matsub<monolish::matrix::CRS<float>,
                       monolish::matrix::CRS<float>,
                       monolish::matrix::CRS<float>, float>(M, N, 1.0e-4) ==
      false) {
    return 1;
  }
  if (test_matsub<monolish::matrix::CRS<double>, monolish::matrix::CRS<double>,
                  monolish::matrix::CRS<double>, double>(M, N, 1.0e-8) ==
      false) {
    return 1;
  }
  if (test_matsub<monolish::matrix::CRS<float>, monolish::matrix::CRS<float>,
                  monolish::matrix::CRS<float>, float>(M, N, 1.0e-4) == false) {
    return 1;
  }

  // matsub LinearOperator//
  if (test_send_matsub_linearoperator<monolish::matrix::LinearOperator<double>,
                                      monolish::matrix::LinearOperator<double>,
                                      monolish::matrix::LinearOperator<double>,
                                      double>(M, N, 1.0e-8) == false) {
    return 1;
  }
  if (test_send_matsub_linearoperator<monolish::matrix::LinearOperator<float>,
                                      monolish::matrix::LinearOperator<float>,
                                      monolish::matrix::LinearOperator<float>,
                                      float>(M, N, 1.0e-4) == false) {
    return 1;
  }
  if (test_matsub<monolish::matrix::LinearOperator<double>,
                  monolish::matrix::LinearOperator<double>,
                  monolish::matrix::LinearOperator<double>, double>(
          M, N, 1.0e-8) == false) {
    return 1;
  }
  if (test_matsub<monolish::matrix::LinearOperator<float>,
                  monolish::matrix::LinearOperator<float>,
                  monolish::matrix::LinearOperator<float>, float>(
          M, N, 1.0e-4) == false) {
    return 1;
  }

  // matvec Dense//
  if (test_send_matvec<monolish::matrix::Dense<double>, double>(M, N, 1.0e-6) ==
      false) {
    return 1;
  }
  if (test_send_matvec<monolish::matrix::Dense<float>, float>(M, N, 1.0e-3) ==
      false) {
    return 1;
  }
  if (test_matvec<monolish::matrix::Dense<double>, double>(M, N, 1.0e-6) ==
      false) {
    return 1;
  }
  if (test_matvec<monolish::matrix::Dense<float>, float>(M, N, 1.0e-3) ==
      false) {
    return 1;
  }

  // matvec_N Dense//
  if (test_send_matvec_N<monolish::matrix::Dense<double>, double>(
          M, N, 1.0e-6) == false) {
    return 1;
  }
  if (test_send_matvec_N<monolish::matrix::Dense<float>, float>(M, N, 1.0e-3) ==
      false) {
    return 1;
  }
  if (test_matvec_N<monolish::matrix::Dense<double>, double>(M, N, 1.0e-6) ==
      false) {
    return 1;
  }
  if (test_matvec_N<monolish::matrix::Dense<float>, float>(M, N, 1.0e-3) ==
      false) {
    return 1;
  }

  // matvec_T Dense//
  if (test_send_matvec_T<monolish::matrix::Dense<double>, double>(
          M, N, 1.0e-6) == false) {
    return 1;
  }
  if (test_send_matvec_T<monolish::matrix::Dense<float>, float>(M, N, 1.0e-3) ==
      false) {
    return 1;
  }
  if (test_matvec_T<monolish::matrix::Dense<double>, double>(M, N, 1.0e-6) ==
      false) {
    return 1;
  }
  if (test_matvec_T<monolish::matrix::Dense<float>, float>(M, N, 1.0e-3) ==
      false) {
    return 1;
  }

  // matvec CRS//
  if (test_send_matvec<monolish::matrix::CRS<double>, double>(M, N, 1.0e-6) ==
      false) {
    return 1;
  }
  if (test_send_matvec<monolish::matrix::CRS<float>, float>(M, N, 1.0e-3) ==
      false) {
    return 1;
  }
  if (test_matvec<monolish::matrix::CRS<double>, double>(M, N, 1.0e-6) ==
      false) {
    return 1;
  }
  if (test_matvec<monolish::matrix::CRS<float>, float>(M, N, 1.0e-3) == false) {
    return 1;
  }

  // matvec_T CRS//
  if (test_send_matvec_T<monolish::matrix::CRS<double>, double>(M, N, 1.0e-6) ==
      false) {
    return 1;
  }
  if (test_send_matvec_T<monolish::matrix::CRS<float>, float>(M, N, 1.0e-3) ==
      false) {
    return 1;
  }
  if (test_matvec_T<monolish::matrix::CRS<double>, double>(M, N, 1.0e-6) ==
      false) {
    return 1;
  }
  if (test_matvec_T<monolish::matrix::CRS<float>, float>(M, N, 1.0e-3) ==
      false) {
    return 1;
  }

  // matvec LinearOperator//
  if (test_send_matvec_linearoperator<monolish::matrix::LinearOperator<double>,
                                      double>(M, N, 1.0e-6) == false) {
    return 1;
  }
  if (test_send_matvec_linearoperator<monolish::matrix::LinearOperator<float>,
                                      float>(M, N, 1.0e-3) == false) {
    return 1;
  }
  if (test_matvec<monolish::matrix::LinearOperator<double>, double>(
          M, N, 1.0e-6) == false) {
    return 1;
  }
  if (test_matvec<monolish::matrix::LinearOperator<float>, float>(
          M, N, 1.0e-3) == false) {
    return 1;
  }

  // matmul Dense//
  if (test_send_matmul<monolish::matrix::Dense<double>,
                       monolish::matrix::Dense<double>,
                       monolish::matrix::Dense<double>, double>(
          M, N, K, 1.0e-8) == false) {
    return 1;
  }
  if (test_send_matmul<monolish::matrix::Dense<float>,
                       monolish::matrix::Dense<float>,
                       monolish::matrix::Dense<float>, float>(
          M, N, K, 1.0e-4) == false) {
    return 1;
  }
  if (test_matmul<monolish::matrix::Dense<double>,
                  monolish::matrix::Dense<double>,
                  monolish::matrix::Dense<double>, double>(M, N, K, 1.0e-8) ==
      false) {
    return 1;
  }
  if (test_matmul<monolish::matrix::Dense<float>,
                  monolish::matrix::Dense<float>,
                  monolish::matrix::Dense<float>, float>(M, N, K, 1.0e-4) ==
      false) {
    return 1;
  }

  // matmul CRS//
  if (test_send_matmul<monolish::matrix::CRS<double>,
                       monolish::matrix::Dense<double>,
                       monolish::matrix::Dense<double>, double>(
          M, N, K, 1.0e-8) == false) {
    return 1;
  }
  if (test_send_matmul<monolish::matrix::CRS<float>,
                       monolish::matrix::Dense<float>,
                       monolish::matrix::Dense<float>, float>(
          M, N, K, 1.0e-4) == false) {
    return 1;
  }
  if (test_matmul<monolish::matrix::CRS<double>,
                  monolish::matrix::Dense<double>,
                  monolish::matrix::Dense<double>, double>(M, N, K, 1.0e-8) ==
      false) {
    return 1;
  }
  if (test_matmul<monolish::matrix::CRS<float>, monolish::matrix::Dense<float>,
                  monolish::matrix::Dense<float>, float>(M, N, K, 1.0e-4) ==
      false) {
    return 1;
  }

  // matmul LinearOperator //
  if (test_send_matmul_linearoperator_only<
          monolish::matrix::LinearOperator<double>,
          monolish::matrix::LinearOperator<double>,
          monolish::matrix::LinearOperator<double>, double>(M, N, K, 1.0e-8) ==
      false) {
    return 1;
  }
  if (test_send_matmul_linearoperator_only<
          monolish::matrix::LinearOperator<float>,
          monolish::matrix::LinearOperator<float>,
          monolish::matrix::LinearOperator<float>, float>(M, N, K, 1.0e-4) ==
      false) {
    return 1;
  }
  if (test_matmul<monolish::matrix::LinearOperator<double>,
                  monolish::matrix::LinearOperator<double>,
                  monolish::matrix::LinearOperator<double>, double>(
          M, N, K, 1.0e-8) == false) {
    return 1;
  }
  if (test_matmul<monolish::matrix::LinearOperator<float>,
                  monolish::matrix::LinearOperator<float>,
                  monolish::matrix::LinearOperator<float>, float>(
          M, N, K, 1.0e-4) == false) {
    return 1;
  }

  if (test_send_matmul_linearoperator<monolish::matrix::LinearOperator<double>,
                                      monolish::matrix::Dense<double>,
                                      monolish::matrix::Dense<double>, double>(
          M, N, K, 1.0e-8) == false) {
    return 1;
  }
  if (test_send_matmul_linearoperator<monolish::matrix::LinearOperator<float>,
                                      monolish::matrix::Dense<float>,
                                      monolish::matrix::Dense<float>, float>(
          M, N, K, 1.0e-4) == false) {
    return 1;
  }
  if (test_matmul<monolish::matrix::LinearOperator<double>,
                  monolish::matrix::Dense<double>,
                  monolish::matrix::Dense<double>, double>(M, N, K, 1.0e-8) ==
      false) {
    return 1;
  }
  if (test_matmul<monolish::matrix::LinearOperator<float>,
                  monolish::matrix::Dense<float>,
                  monolish::matrix::Dense<float>, float>(M, N, K, 1.0e-4) ==
      false) {
    return 1;
  }

  // mm_copy Dense//
  if (test_send_mm_copy<monolish::matrix::Dense<double>,
                        monolish::matrix::Dense<double>, double>(
          M, N, 1.0e-8) == false) {
    return 1;
  }
  if (test_send_mm_copy<monolish::matrix::Dense<float>,
                        monolish::matrix::Dense<float>, float>(M, N, 1.0e-4) ==
      false) {
    return 1;
  }
  if (test_mm_copy<monolish::matrix::Dense<double>,
                   monolish::matrix::Dense<double>, double>(M, N, 1.0e-8) ==
      false) {
    return 1;
  }
  if (test_mm_copy<monolish::matrix::Dense<float>,
                   monolish::matrix::Dense<float>, float>(M, N, 1.0e-4) ==
      false) {
    return 1;
  }

  // mm_copy CRS//
  if (test_send_mm_copy<monolish::matrix::CRS<double>,
                        monolish::matrix::CRS<double>, double>(M, N, 1.0e-8) ==
      false) {
    return 1;
  }
  if (test_send_mm_copy<monolish::matrix::CRS<float>,
                        monolish::matrix::CRS<float>, float>(M, N, 1.0e-4) ==
      false) {
    return 1;
  }
  if (test_mm_copy<monolish::matrix::CRS<double>, monolish::matrix::CRS<double>,
                   double>(M, N, 1.0e-8) == false) {
    return 1;
  }
  if (test_mm_copy<monolish::matrix::CRS<float>, monolish::matrix::CRS<float>,
                   float>(M, N, 1.0e-4) == false) {
    return 1;
  }

  // mm_copy LinearOperator//
  if (test_send_mm_copy<monolish::matrix::LinearOperator<double>,
                        monolish::matrix::LinearOperator<double>, double>(
          M, N, 1.0e-8) == false) {
    return 1;
  }
  if (test_send_mm_copy<monolish::matrix::LinearOperator<float>,
                        monolish::matrix::LinearOperator<float>, float>(
          M, N, 1.0e-4) == false) {
    return 1;
  }
  if (test_mm_copy<monolish::matrix::LinearOperator<double>,
                   monolish::matrix::LinearOperator<double>, double>(
          M, N, 1.0e-8) == false) {
    return 1;
  }
  if (test_mm_copy<monolish::matrix::LinearOperator<float>,
                   monolish::matrix::LinearOperator<float>, float>(
          M, N, 1.0e-4) == false) {
    return 1;
  }

  // mscal Dense//
  if (test_send_mscal<monolish::matrix::Dense<double>, double>(M, N, 1.0e-8) ==
      false) {
    return 1;
  }
  if (test_send_mscal<monolish::matrix::Dense<float>, float>(M, N, 1.0e-4) ==
      false) {
    return 1;
  }
  if (test_mscal<monolish::matrix::Dense<double>, double>(M, N, 1.0e-8) ==
      false) {
    return 1;
  }
  if (test_mscal<monolish::matrix::Dense<float>, float>(M, N, 1.0e-4) ==
      false) {
    return 1;
  }

  // mscal CRS//
  if (test_send_mscal<monolish::matrix::CRS<double>, double>(M, N, 1.0e-8) ==
      false) {
    return 1;
  }
  if (test_send_mscal<monolish::matrix::CRS<float>, float>(M, N, 1.0e-4) ==
      false) {
    return 1;
  }
  if (test_mscal<monolish::matrix::CRS<double>, double>(M, N, 1.0e-8) ==
      false) {
    return 1;
  }
  if (test_mscal<monolish::matrix::CRS<float>, float>(M, N, 1.0e-4) == false) {
    return 1;
  }

  // mscal LinearOperator//
  /* TODO mscal implementation
  if (test_send_mscal<monolish::matrix::LinearOperator<double>, double>(M,
  N, 1.0e-8) == false) { return 1;
  }
  if (test_send_mscal<monolish::matrix::LinearOperator<float>, float>(M,
  N, 1.0e-4) == false) { return 1;
  }
  if (test_mscal<monolish::matrix::LinearOperator<double>, double>(M,
  N, 1.0e-8)
  == false) { return 1;
  }
  if (test_mscal<monolish::matrix::LinearOperator<float>, float>(M, N, 1.0e-4)
  == false) { return 1;
  }
  */

  // matadd Dense//
  if (test_send_scalar_times<monolish::matrix::Dense<double>,
                             monolish::matrix::Dense<double>, double>(
          M, N, 1.0e-8) == false) {
    return 1;
  }
  if (test_send_scalar_times<monolish::matrix::Dense<float>,
                             monolish::matrix::Dense<float>, float>(
          M, N, 1.0e-4) == false) {
    return 1;
  }
  if (test_scalar_times<monolish::matrix::Dense<double>,
                        monolish::matrix::Dense<double>, double>(
          M, N, 1.0e-8) == false) {
    return 1;
  }
  if (test_scalar_times<monolish::matrix::Dense<float>,
                        monolish::matrix::Dense<float>, float>(M, N, 1.0e-4) ==
      false) {
    return 1;
  }

  // scalar_times CRS//
  if (test_send_scalar_times<monolish::matrix::CRS<double>,
                             monolish::matrix::CRS<double>, double>(
          M, N, 1.0e-8) == false) {
    return 1;
  }
  if (test_send_scalar_times<monolish::matrix::CRS<float>,
                             monolish::matrix::CRS<float>, float>(
          M, N, 1.0e-4) == false) {
    return 1;
  }
  if (test_scalar_times<monolish::matrix::CRS<double>,
                        monolish::matrix::CRS<double>, double>(M, N, 1.0e-8) ==
      false) {
    return 1;
  }
  if (test_scalar_times<monolish::matrix::CRS<float>,
                        monolish::matrix::CRS<float>, float>(M, N, 1.0e-4) ==
      false) {
    return 1;
  }

  // vector_times row Dense//
  if (test_send_times_row<monolish::matrix::Dense<double>, double>(
          M, N, 1.0e-6) == false) {
    return 1;
  }
  if (test_send_times_row<monolish::matrix::Dense<float>, float>(
          M, N, 1.0e-3) == false) {
    return 1;
  }
  if (test_times_row<monolish::matrix::Dense<double>, double>(M, N, 1.0e-6) ==
      false) {
    return 1;
  }
  if (test_times_row<monolish::matrix::Dense<float>, float>(M, N, 1.0e-3) ==
      false) {
    return 1;
  }

  // vector_times row CRS//
  if (test_send_times_row<monolish::matrix::CRS<double>, double>(
          M, N, 1.0e-6) == false) {
    return 1;
  }
  if (test_send_times_row<monolish::matrix::CRS<float>, float>(M, N, 1.0e-3) ==
      false) {
    return 1;
  }
  if (test_times_row<monolish::matrix::CRS<double>, double>(M, N, 1.0e-6) ==
      false) {
    return 1;
  }
  if (test_times_row<monolish::matrix::CRS<float>, float>(M, N, 1.0e-3) ==
      false) {
    return 1;
  }

  // vector_times col Dense//
  if (test_send_times_col<monolish::matrix::Dense<double>, double>(
          M, N, 1.0e-6) == false) {
    return 1;
  }
  if (test_send_times_col<monolish::matrix::Dense<float>, float>(
          M, N, 1.0e-3) == false) {
    return 1;
  }
  if (test_times_col<monolish::matrix::Dense<double>, double>(M, N, 1.0e-6) ==
      false) {
    return 1;
  }
  if (test_times_col<monolish::matrix::Dense<float>, float>(M, N, 1.0e-3) ==
      false) {
    return 1;
  }

  // vector_times col CRS//
  if (test_send_times_col<monolish::matrix::CRS<double>, double>(
          M, N, 1.0e-6) == false) {
    return 1;
  }
  if (test_send_times_col<monolish::matrix::CRS<float>, float>(M, N, 1.0e-3) ==
      false) {
    return 1;
  }
  if (test_times_col<monolish::matrix::CRS<double>, double>(M, N, 1.0e-6) ==
      false) {
    return 1;
  }
  if (test_times_col<monolish::matrix::CRS<float>, float>(M, N, 1.0e-3) ==
      false) {
    return 1;
  }

  // vector_times row_line Dense//
  if (test_send_times_row_line<monolish::matrix::Dense<double>, double>(
          M, N, 1.0e-6) == false) {
    return 1;
  }
  if (test_send_times_row_line<monolish::matrix::Dense<float>, float>(
          M, N, 1.0e-3) == false) {
    return 1;
  }
  if (test_times_row_line<monolish::matrix::Dense<double>, double>(
          M, N, 1.0e-6) == false) {
    return 1;
  }
  if (test_times_row_line<monolish::matrix::Dense<float>, float>(
          M, N, 1.0e-3) == false) {
    return 1;
  }

  // vector_times row_line CRS//
  if (test_send_times_row_line<monolish::matrix::CRS<double>, double>(
          M, N, 1.0e-6) == false) {
    return 1;
  }
  if (test_send_times_row_line<monolish::matrix::CRS<float>, float>(
          M, N, 1.0e-3) == false) {
    return 1;
  }
  if (test_times_row_line<monolish::matrix::CRS<double>, double>(
          M, N, 1.0e-6) == false) {
    return 1;
  }
  if (test_times_row_line<monolish::matrix::CRS<float>, float>(M, N, 1.0e-3) ==
      false) {
    return 1;
  }

  // vector_times col_line Dense//
  if (test_send_times_col_line<monolish::matrix::Dense<double>, double>(
          M, N, 1.0e-6) == false) {
    return 1;
  }
  if (test_send_times_col_line<monolish::matrix::Dense<float>, float>(
          M, N, 1.0e-3) == false) {
    return 1;
  }
  if (test_times_col_line<monolish::matrix::Dense<double>, double>(
          M, N, 1.0e-6) == false) {
    return 1;
  }
  if (test_times_col_line<monolish::matrix::Dense<float>, float>(
          M, N, 1.0e-3) == false) {
    return 1;
  }

  // vector_times col_line CRS//
  if (test_send_times_col_line<monolish::matrix::CRS<double>, double>(
          M, N, 1.0e-6) == false) {
    return 1;
  }
  if (test_send_times_col_line<monolish::matrix::CRS<float>, float>(
          M, N, 1.0e-3) == false) {
    return 1;
  }
  if (test_times_col_line<monolish::matrix::CRS<double>, double>(
          M, N, 1.0e-6) == false) {
    return 1;
  }
  if (test_times_col_line<monolish::matrix::CRS<float>, float>(M, N, 1.0e-3) ==
      false) {
    return 1;
  }

  return 0;
}
