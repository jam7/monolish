#include "../../../../include/monolish_blas.hpp"
#include "../../../internal/monolish_internal.hpp"

namespace monolish::matrix {

// add scalar
template <typename T> void CRS<T>::diag_add(const T alpha) {
  Logger &logger = Logger::get_instance();
  logger.func_in(monolish_func);

  T *vald = val.data();
  const auto *rowd = row_ptr.data();
  const auto *cold = col_ind.data();
  const auto N = get_col();

  if (gpu_status == true) {
#if MONOLISH_USE_NVIDIA_GPU // gpu
#pragma omp target teams distribute parallel for
      for (auto i = decltype(get_row()){0}; i < get_row(); i++) {
          for (auto j = rowd[i]; j < rowd[i + 1]; j++) {
              if(i == cold[j]) {
                  vald[j] += alpha;
              }
          }
      }
#else
    throw std::runtime_error("error USE_GPU is false, but gpu_status == true");
#endif
  } else {
#pragma omp parallel for
      for (auto i = decltype(get_row()){0}; i < get_row(); i++) {
          for (auto j = rowd[i]; j < rowd[i + 1]; j++) {
              if(i == cold[j]) {
                  vald[j] += alpha;
              }
          }
      }
  }

  logger.func_out();
}
template void monolish::matrix::CRS<double>::diag_add(const double alpha);
template void monolish::matrix::CRS<float>::diag_add(const float alpha);

// add vector
template <typename T> void CRS<T>::diag_add(const vector<T> &vec) {
  Logger &logger = Logger::get_instance();
  logger.func_in(monolish_func);

  const T *vecd = vec.data();
  T *vald = val.data();
  const auto *rowd = row_ptr.data();
  const auto *cold = col_ind.data();

  const auto Len = get_row() > get_col() ? get_row() : get_col();
  assert(Len == vec.size());

  if (gpu_status == true) {
#if MONOLISH_USE_NVIDIA_GPU // gpu
#pragma omp target teams distribute parallel for
      for (auto i = decltype(get_row()){0}; i < get_row(); i++) {
          for (auto j = rowd[i]; j < rowd[i + 1]; j++) {
              if(i == cold[j]) {
                  vald[j] += vecd[i];
              }
          }
      }
#else
    throw std::runtime_error("error USE_GPU is false, but gpu_status == true");
#endif
  } else {
#pragma omp parallel for
      for (auto i = decltype(get_row()){0}; i < get_row(); i++) {
          for (auto j = rowd[i]; j < rowd[i + 1]; j++) {
              if(i == cold[j]) {
                  vald[j] += vecd[i];
              }
          }
      }
  }

  logger.func_out();
}
template void
monolish::matrix::CRS<double>::diag_add(const vector<double> &vec);
template void
monolish::matrix::CRS<float>::diag_add(const vector<float> &vec);

// add viwe1D<vector>
template <typename T> void CRS<T>::diag_add(const view1D<vector<T>, T> &vec) {
  Logger &logger = Logger::get_instance();
  logger.func_in(monolish_func);

  const T *vecd = vec.data();
  T *vald = val.data();
  const auto *rowd = row_ptr.data();
  const auto *cold = col_ind.data();

  const auto Len = get_row() > get_col() ? get_row() : get_col();
  assert(Len == vec.size());

  if (gpu_status == true) {
#if MONOLISH_USE_NVIDIA_GPU // gpu
#pragma omp target teams distribute parallel for
      for (auto i = decltype(get_row()){0}; i < get_row(); i++) {
          for (auto j = rowd[i]; j < rowd[i + 1]; j++) {
              if(i == cold[j]) {
                  vald[j] += vecd[i];
              }
          }
      }
#else
    throw std::runtime_error("error USE_GPU is false, but gpu_status == true");
#endif
  } else {
#pragma omp parallel for
      for (auto i = decltype(get_row()){0}; i < get_row(); i++) {
          for (auto j = rowd[i]; j < rowd[i + 1]; j++) {
              if(i == cold[j]) {
                  vald[j] += vecd[i];
              }
          }
      }
  }

  logger.func_out();
}
template void monolish::matrix::CRS<double>::diag_add(
    const view1D<vector<double>, double> &vec);
template void monolish::matrix::CRS<float>::diag_add(
    const view1D<vector<float>, float> &vec);

// add viwe1D<Dense>
template <typename T>
void CRS<T>::diag_add(const view1D<matrix::Dense<T>, T> &vec) {
  Logger &logger = Logger::get_instance();
  logger.func_in(monolish_func);

  const T *vecd = vec.data();
  T *vald = val.data();
  const auto *rowd = row_ptr.data();
  const auto *cold = col_ind.data();

  const auto Len = get_row() > get_col() ? get_row() : get_col();
  assert(Len == vec.size());

  if (gpu_status == true) {
#if MONOLISH_USE_NVIDIA_GPU // gpu
#pragma omp target teams distribute parallel for
      for (auto i = decltype(get_row()){0}; i < get_row(); i++) {
          for (auto j = rowd[i]; j < rowd[i + 1]; j++) {
              if(i == cold[j]) {
                  vald[j] += vecd[i];
              }
          }
      }
#else
    throw std::runtime_error("error USE_GPU is false, but gpu_status == true");
#endif
  } else {
#pragma omp parallel for
      for (auto i = decltype(get_row()){0}; i < get_row(); i++) {
          for (auto j = rowd[i]; j < rowd[i + 1]; j++) {
              if(i == cold[j]) {
                  vald[j] += vecd[i];
              }
          }
      }
  }

  logger.func_out();
}
template void monolish::matrix::CRS<double>::diag_add(
    const view1D<matrix::Dense<double>, double> &vec);
template void monolish::matrix::CRS<float>::diag_add(
    const view1D<matrix::Dense<float>, float> &vec);
} // namespace monolish::matrix
