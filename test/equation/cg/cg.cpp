#include "../../test_utils.hpp"
#include "../include/monolish_blas.hpp"
#include "../include/monolish_equation.hpp"

template <typename T, typename PRECOND>
bool test(const char *file, const int check_ans, const T tol) {

  monolish::matrix::COO<T> COO(file);
  monolish::matrix::CRS<T> A(COO);

  monolish::vector<T> ans(A.get_row(), 1.0);
  monolish::vector<T> b(A.get_row(), 0.0);

  // initial x is rand(0~1)
  monolish::vector<T> x(A.get_row(), 0, 1.0);

  monolish::util::send(A, x, b, ans);

  // create answer
  monolish::blas::matvec(A, ans, b);

  monolish::equation::CG<monolish::matrix::CRS<T>, T> solver;

  solver.set_tol(tol);
  solver.set_lib(0);
  solver.set_miniter(0);
  solver.set_maxiter(10000);

  // precond setting
  PRECOND precond;
  solver.set_create_precond(precond);
  solver.set_apply_precond(precond);

  solver.set_print_rhistory(true);
  // solver.set_rhistory_filename("./a.txt");

  if (monolish::util::solver_check(solver.solve(A, x, b))) {
    return false;
  }

  // std::cout << monolish::util::get_residual_l2(A,x,b) << std::endl;

  ans.recv();
  x.recv();

  if (check_ans == 1) {
    if (ans_check<T>(x.data(), ans.data(), x.size(), tol) == false) {
      x.print_all();
      return false;
    };
  }
  return true;
}

int main(int argc, char **argv) {

  if (argc != 3) {
    std::cout << "error $1:matrix filename, $2:error check (1/0)" << std::endl;
    return 1;
  }

  char *file = argv[1];
  int check_ans = atoi(argv[2]);

  // monolish::util::set_log_level(3);
  // monolish::util::set_log_filename("./monolish_test_log.txt");

  if (test<double,
           monolish::equation::none<monolish::matrix::CRS<double>, double>>(
          file, check_ans, 1.0e-8) == false) {
    return 1;
  }
  if (test<float,
           monolish::equation::none<monolish::matrix::CRS<float>, float>>(
          file, check_ans, 1.0e-4) == false) {
    return 1;
  }

  if (test<double,
           monolish::equation::Jacobi<monolish::matrix::CRS<double>, double>>(
          file, check_ans, 1.0e-8) == false) {
    return 1;
  }
  if (test<float,
           monolish::equation::Jacobi<monolish::matrix::CRS<float>, float>>(
          file, check_ans, 1.0e-4) == false) {
    return 1;
  }

  return 0;
}
