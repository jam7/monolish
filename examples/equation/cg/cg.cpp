#include <iostream>
#include <monolish_equation.hpp>

int main() {

  // Output log if you need
  // monolish::util::set_log_level(3);
  // monolish::util::set_log_filename("./monolish_test_log.txt");

  monolish::matrix::COO<double> A_COO("sample.mtx"); // Input from file

  // Edit the matrix as needed //
  // Execute A_COO.sort() after editing the matrix //

  // Create CRS format matrix and convert from COO format matrix
  monolish::matrix::CRS<double> A(A_COO);

  // Length A.row()
  // Random vector length A.row() with random values in the range 1.0 to 2.0
  // Random seeds are 123 and 321 (mt19937)
  monolish::vector<double> x(A.get_row(), 1.0, 2.0, 123);
  monolish::vector<double> b(A.get_row(), 1.0, 2.0, 321);

  monolish::util::send(A, x, b);

  // Create CG class
  monolish::equation::CG<monolish::matrix::CRS<double>, double> solver;

  // create jacobi preconditioner
  monolish::equation::Jacobi<monolish::matrix::CRS<double>, double> precond;

  // Set preconditioner to CG solver
  solver.set_create_precond(precond);
  solver.set_apply_precond(precond);

  // Set solver options
  solver.set_tol(1.0e-12);
  solver.set_maxiter(A.get_row());

  // if you need residual history
  // solver.set_print_rhistory(true);
  // solver.set_rhistory_filename("./a.txt");

  // Solve Ax=b by CG with jacobi
  if (monolish::util::solver_check(solver.solve(A, x, b))) {
    return 1;
  }

  // Recv x from GPU
  monolish::util::recv(x);

  // Show answer
  x.print_all();

  return 0;
}
