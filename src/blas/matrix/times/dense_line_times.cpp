#include "../../../../include/monolish_blas.hpp"
#include "../../../internal/monolish_internal.hpp"

namespace monolish {

namespace {

// vector-matrix_row times //
template <typename T, typename VEC>
void times_row_core(const matrix::Dense<T> &A, const size_t num, const VEC &x,
                    matrix::Dense<T> &C) {
  Logger &logger = Logger::get_instance();
  logger.func_in(monolish_func);

  assert(util::is_same_structure(A, C));
  assert(util::is_same_device_mem_stat(A, x, C));
  assert(A.get_col() == x.size());

  const auto *Ad = A.val.data();
  const auto n = A.get_col();
  auto *Cd = C.val.data();

  const auto *xd = x.data();
  const auto xoffset = x.get_offset();

  if (A.get_device_mem_stat() == true) {
#if MONOLISH_USE_NVIDIA_GPU
#pragma omp target teams distribute parallel for
    for (auto j = decltype(n){0}; j < n; j++) {
      Cd[num * n + j] = Ad[num * n + j] * xd[j + xoffset];
    }
#else
    throw std::runtime_error(
        "error USE_GPU is false, but get_device_mem_stat() == true");
#endif
  } else {
#pragma omp parallel for
    for (auto j = decltype(n){0}; j < n; j++) {
      Cd[num * n + j] = Ad[num * n + j] * xd[j + xoffset];
    }
  }

  logger.func_out();
}

// vector-matrix_col times //
template <typename T, typename VEC>
void times_col_core(const matrix::Dense<T> &A, const size_t num, const VEC &x,
                    matrix::Dense<T> &C) {
  Logger &logger = Logger::get_instance();
  logger.func_in(monolish_func);

  assert(util::is_same_structure(A, C));
  assert(util::is_same_device_mem_stat(A, x, C));
  assert(A.get_row() == x.size());

  const auto *Ad = A.val.data();
  const auto m = A.get_row();
  const auto n = A.get_col();
  auto *Cd = C.val.data();

  const auto *xd = x.data();
  const auto xoffset = x.get_offset();

  if (A.get_device_mem_stat() == true) {
#if MONOLISH_USE_NVIDIA_GPU
#pragma omp target teams distribute parallel for
    for (auto i = decltype(m){0}; i < m; i++) {
      Cd[i * n + num] = Ad[i * n + num] * xd[i + xoffset];
    }
#else
    throw std::runtime_error(
        "error USE_GPU is false, but get_device_mem_stat() == true");
#endif
  } else {
#pragma omp parallel for
    for (auto i = decltype(m){0}; i < m; i++) {
      Cd[i * n + num] = Ad[i * n + num] * xd[i + xoffset];
    }
  }

  logger.func_out();
}
} // namespace

namespace blas {

// vector-matrix_row times line //
void times_row(const matrix::Dense<double> &A, const size_t num,
               const vector<double> &x, matrix::Dense<double> &C) {
  times_row_core(A, num, x, C);
}
void times_row(const matrix::Dense<double> &A, const size_t num,
               const view1D<vector<double>, double> &x,
               matrix::Dense<double> &C) {
  times_row_core(A, num, x, C);
}
void times_row(const matrix::Dense<double> &A, const size_t num,
               const view1D<matrix::Dense<double>, double> &x,
               matrix::Dense<double> &C) {
  times_row_core(A, num, x, C);
}
void times_row(const matrix::Dense<float> &A, const size_t num,
               const vector<float> &x, matrix::Dense<float> &C) {
  times_row_core(A, num, x, C);
}
void times_row(const matrix::Dense<float> &A, const size_t num,
               const view1D<vector<float>, float> &x, matrix::Dense<float> &C) {
  times_row_core(A, num, x, C);
}
void times_row(const matrix::Dense<float> &A, const size_t num,
               const view1D<matrix::Dense<float>, float> &x,
               matrix::Dense<float> &C) {
  times_row_core(A, num, x, C);
}

// vector-matrix_col times line //
void times_col(const matrix::Dense<double> &A, const size_t num,
               const vector<double> &x, matrix::Dense<double> &C) {
  times_col_core(A, num, x, C);
}
void times_col(const matrix::Dense<double> &A, const size_t num,
               const view1D<vector<double>, double> &x,
               matrix::Dense<double> &C) {
  times_col_core(A, num, x, C);
}
void times_col(const matrix::Dense<double> &A, const size_t num,
               const view1D<matrix::Dense<double>, double> &x,
               matrix::Dense<double> &C) {
  times_col_core(A, num, x, C);
}
void times_col(const matrix::Dense<float> &A, const size_t num,
               const vector<float> &x, matrix::Dense<float> &C) {
  times_col_core(A, num, x, C);
}
void times_col(const matrix::Dense<float> &A, const size_t num,
               const view1D<vector<float>, float> &x, matrix::Dense<float> &C) {
  times_col_core(A, num, x, C);
}
void times_col(const matrix::Dense<float> &A, const size_t num,
               const view1D<matrix::Dense<float>, float> &x,
               matrix::Dense<float> &C) {
  times_col_core(A, num, x, C);
}

} // namespace blas
} // namespace monolish
