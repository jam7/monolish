#include "../../../../include/monolish_blas.hpp"
#include "../../../internal/monolish_internal.hpp"

namespace monolish {

namespace {

// scalar-matrix times //
template <typename T>
void times_core(const T alpha, const matrix::CRS<T> &A, matrix::CRS<T> &C) {
  Logger &logger = Logger::get_instance();
  logger.func_in(monolish_func);

  // err
  assert(util::is_same_structure(A, C));
  assert(util::is_same_device_mem_stat(A, C));

  internal::vmul(A.get_nnz(), A.begin(), alpha, C.begin(),
                 A.get_device_mem_stat());

  logger.func_out();
}

// vector-matrix_row times all //
template <typename T, typename VEC>
void times_row_core(const matrix::CRS<T> &A, const VEC &x, matrix::CRS<T> &C) {
  Logger &logger = Logger::get_instance();
  logger.func_in(monolish_func);

  assert(util::is_same_structure(A, C));
  assert(util::is_same_device_mem_stat(A, x, C));
  assert(A.get_col() == x.size());

  const auto *Ad = A.begin();
  auto *Cd = C.begin();
  const auto *rowd = A.row_ptr.data();
  const auto *cold = A.col_ind.data();
  const auto n = A.get_row();

  const auto *xd = x.begin();

  if (A.get_device_mem_stat() == true) {
#if MONOLISH_USE_NVIDIA_GPU
#pragma omp target teams distribute parallel for
    for (auto i = decltype(n){0}; i < n; i++) {
      for (auto j = rowd[i]; j < rowd[i + 1]; j++) {
        Cd[j] = Ad[j] * xd[cold[j]];
      }
    }
#else
    throw std::runtime_error(
        "error USE_GPU is false, but get_device_mem_stat() == true");
#endif
  } else {
#pragma omp parallel for
    for (auto i = decltype(n){0}; i < n; i++) {
      for (auto j = rowd[i]; j < rowd[i + 1]; j++) {
        Cd[j] = Ad[j] * xd[cold[j]];
      }
    }
  }

  logger.func_out();
}

// vector-matrix_col times all //
template <typename T, typename VEC>
void times_col_core(const matrix::CRS<T> &A, const VEC &x, matrix::CRS<T> &C) {
  Logger &logger = Logger::get_instance();
  logger.func_in(monolish_func);

  assert(util::is_same_structure(A, C));
  assert(util::is_same_device_mem_stat(A, x, C));
  assert(A.get_row() == x.size());

  const auto *Ad = A.begin();
  auto *Cd = C.begin();
  const auto *rowd = A.row_ptr.data();
  const auto n = A.get_row();

  const auto *xd = x.begin();

  if (A.get_device_mem_stat() == true) {
#if MONOLISH_USE_NVIDIA_GPU
#pragma omp target teams distribute parallel for
    for (auto i = decltype(n){0}; i < n; i++) {
      for (auto j = rowd[i]; j < rowd[i + 1]; j++) {
        Cd[j] = Ad[j] * xd[i];
      }
    }
#else
    throw std::runtime_error(
        "error USE_GPU is false, but get_device_mem_stat() == true");
#endif
  } else {
#pragma omp parallel for
    for (auto i = decltype(n){0}; i < n; i++) {
      for (auto j = rowd[i]; j < rowd[i + 1]; j++) {
        Cd[j] = Ad[j] * xd[i];
      }
    }
  }

  logger.func_out();
}
} // namespace

namespace blas {
void times(const double alpha, const matrix::CRS<double> &A,
           matrix::CRS<double> &C) {
  times_core(alpha, A, C);
}
void times(const float alpha, const matrix::CRS<float> &A,
           matrix::CRS<float> &C) {
  times_core(alpha, A, C);
}

// vector-matrix_row times all //
void times_row(const matrix::CRS<double> &A, const vector<double> &x,
               matrix::CRS<double> &C) {
  times_row_core(A, x, C);
}
void times_row(const matrix::CRS<double> &A,
               const view1D<vector<double>, double> &x,
               matrix::CRS<double> &C) {
  times_row_core(A, x, C);
}
void times_row(const matrix::CRS<double> &A,
               const view1D<matrix::Dense<double>, double> &x,
               matrix::CRS<double> &C) {
  times_row_core(A, x, C);
}
void times_row(const matrix::CRS<double> &A,
               const view1D<tensor::tensor_Dense<double>, double> &x,
               matrix::CRS<double> &C) {
  times_row_core(A, x, C);
}
void times_row(const matrix::CRS<float> &A, const vector<float> &x,
               matrix::CRS<float> &C) {
  times_row_core(A, x, C);
}
void times_row(const matrix::CRS<float> &A,
               const view1D<vector<float>, float> &x, matrix::CRS<float> &C) {
  times_row_core(A, x, C);
}
void times_row(const matrix::CRS<float> &A,
               const view1D<matrix::Dense<float>, float> &x,
               matrix::CRS<float> &C) {
  times_row_core(A, x, C);
}
void times_row(const matrix::CRS<float> &A,
               const view1D<tensor::tensor_Dense<float>, float> &x,
               matrix::CRS<float> &C) {
  times_row_core(A, x, C);
}

// vector-matrix_col times all //
void times_col(const matrix::CRS<double> &A, const vector<double> &x,
               matrix::CRS<double> &C) {
  times_col_core(A, x, C);
}
void times_col(const matrix::CRS<double> &A,
               const view1D<vector<double>, double> &x,
               matrix::CRS<double> &C) {
  times_col_core(A, x, C);
}
void times_col(const matrix::CRS<double> &A,
               const view1D<matrix::Dense<double>, double> &x,
               matrix::CRS<double> &C) {
  times_col_core(A, x, C);
}
void times_col(const matrix::CRS<double> &A,
               const view1D<tensor::tensor_Dense<double>, double> &x,
               matrix::CRS<double> &C) {
  times_col_core(A, x, C);
}
void times_col(const matrix::CRS<float> &A, const vector<float> &x,
               matrix::CRS<float> &C) {
  times_col_core(A, x, C);
}
void times_col(const matrix::CRS<float> &A,
               const view1D<vector<float>, float> &x, matrix::CRS<float> &C) {
  times_col_core(A, x, C);
}
void times_col(const matrix::CRS<float> &A,
               const view1D<matrix::Dense<float>, float> &x,
               matrix::CRS<float> &C) {
  times_col_core(A, x, C);
}
void times_col(const matrix::CRS<float> &A,
               const view1D<tensor::tensor_Dense<float>, float> &x,
               matrix::CRS<float> &C) {
  times_col_core(A, x, C);
}

} // namespace blas
} // namespace monolish
