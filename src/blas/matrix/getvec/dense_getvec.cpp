#include "../../../../include/monolish_blas.hpp"
#include "../../../internal/monolish_internal.hpp"

namespace monolish {
namespace matrix {

// diag
template <typename T> void Dense<T>::diag(vector<T> &vec) const {
  Logger &logger = Logger::get_instance();
  logger.func_in(monolish_func);

  T *vecd = vec.data();

  const T *vald = val.data();
  const size_t N = get_col();
  const size_t Len = std::min(get_row(), get_col());

  if (Len != vec.size()) {
    throw std::runtime_error("error A.size != diag.size");
  }

  if (gpu_status == true) {
#if MONOLISH_USE_GPU // gpu
#pragma omp target teams distribute parallel for
    for (size_t i = 0; i < Len; i++) {
      vecd[i] = vald[N * i + i];
    }
#else
    throw std::runtime_error("error USE_GPU is false, but gpu_status == true");
#endif
  } else {
#pragma omp parallel for
    for (size_t i = 0; i < Len; i++) {
      vecd[i] = vald[N * i + i];
    }
  }

  logger.func_out();
}
template void monolish::matrix::Dense<double>::diag(vector<double> &vec) const;
template void monolish::matrix::Dense<float>::diag(vector<float> &vec) const;

// get_row
template <typename T> void Dense<T>::row(const size_t r, vector<T> &vec) const {
  Logger &logger = Logger::get_instance();
  logger.func_in(monolish_func);

  T *vecd = vec.data();

  const T *vald = val.data();
  const size_t N = get_col();

  if (N != vec.size()) {
    throw std::runtime_error("error A.size != row.size");
  }

  if (gpu_status == true) {
#if MONOLISH_USE_GPU // gpu
#pragma omp target teams distribute parallel for
    for (size_t i = 0; i < N; i++) {
      vecd[i] = vald[r * N + i];
    }
#else
    throw std::runtime_error("error USE_GPU is false, but gpu_status == true");
#endif
  } else {
#pragma omp parallel for
    for (size_t i = 0; i < N; i++) {
      vecd[i] = vald[r * N + i];
    }
  }

  logger.func_out();
}
template void monolish::matrix::Dense<double>::row(const size_t r,
                                                   vector<double> &vec) const;
template void monolish::matrix::Dense<float>::row(const size_t r,
                                                  vector<float> &vec) const;

// get_row
template <typename T> void Dense<T>::col(const size_t c, vector<T> &vec) const {
  Logger &logger = Logger::get_instance();
  logger.func_in(monolish_func);

  T *vecd = vec.data();

  const T *vald = val.data();
  const size_t M = get_row();
  const size_t N = get_col();

  if (M != vec.size()) {
    throw std::runtime_error("error A.size != row.size");
  }

  if (gpu_status == true) {
#if MONOLISH_USE_GPU // gpu
#pragma omp target teams distribute parallel for
    for (size_t i = 0; i < M; i++) {
      vecd[i] = vald[i * N + c];
    }
#else
    throw std::runtime_error("error USE_GPU is false, but gpu_status == true");
#endif
  } else {
#pragma omp parallel for
    for (size_t i = 0; i < M; i++) {
      vecd[i] = vald[i * N + c];
    }
  }

  logger.func_out();
}
template void monolish::matrix::Dense<double>::col(const size_t c,
                                                   vector<double> &vec) const;
template void monolish::matrix::Dense<float>::col(const size_t c,
                                                  vector<float> &vec) const;
} // namespace matrix
} // namespace monolish
