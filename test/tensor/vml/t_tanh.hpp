#include "../../test_utils.hpp"
#include "monolish_blas.hpp"

template <typename T> void ans_tanh(monolish::tensor::tensor_Dense<T> &A) {

  for (size_t i = 0; i < A.get_nnz(); i++) {
    A.data()[i] = std::tanh(A.data()[i]);
  }
}

template <typename MAT, typename T>
bool test_send_ttanh(const size_t M, const size_t N, const size_t L,
                     double tol) {
  size_t nnzrow = 27;
  if (nnzrow < L) {
    nnzrow = 27;
  } else {
    nnzrow = L - 1;
  }

  monolish::tensor::tensor_COO<T> seedA =
      monolish::util::random_structure_tensor<T>(M, N, L, nnzrow, 1.0);

  MAT A(seedA); // M*N tensor

  monolish::tensor::tensor_Dense<T> AA(seedA);
  ans_tanh(AA);

  A.send();
  monolish::vml::tanh(A, A);
  A.recv();
  monolish::tensor::tensor_Dense<T> resultA(A);

  return ans_check<T>(__func__, A.type(), resultA.data(), AA.data(),
                      AA.get_nnz(), tol);
}

template <typename MAT, typename T>
bool test_ttanh(const size_t M, const size_t N, const size_t L, double tol) {
  size_t nnzrow = 27;
  if (nnzrow < L) {
    nnzrow = 27;
  } else {
    nnzrow = L - 1;
  }

  monolish::tensor::tensor_COO<T> seedA =
      monolish::util::random_structure_tensor<T>(M, N, L, nnzrow, 1.0);

  MAT A(seedA); // M*N tensor

  monolish::tensor::tensor_Dense<T> AA(seedA);
  ans_tanh(AA);

  monolish::vml::tanh(A, A);
  monolish::tensor::tensor_Dense<T> resultA(A);

  return ans_check<T>(__func__, A.type(), resultA.data(), AA.data(),
                      AA.get_nnz(), tol);
}