#include "../../../../include/monolish_blas.hpp"
#include "../../../internal/monolish_internal.hpp"

namespace monolish::matrix {

// sub scalar
template <typename T> void Dense<T>::diag_sub(const T alpha) {
  Logger &logger = Logger::get_instance();
  logger.func_in(monolish_func);

  T *vald = val.data();
  const auto N = get_col();
  const auto Len = get_row() > get_col() ? get_row() : get_col();

  if (gpu_status == true) {
#if MONOLISH_USE_NVIDIA_GPU // gpu
#pragma omp target teams distribute parallel for
    for (auto i = decltype(Len){0}; i < Len; i++) {
      vald[N * i + i] -= alpha;
    }
#else
    throw std::runtime_error("error USE_GPU is false, but gpu_status == true");
#endif
  } else {
#pragma omp parallel for
    for (auto i = decltype(Len){0}; i < Len; i++) {
      vald[N * i + i] -= alpha;
    }
  }

  logger.func_out();
}
template void monolish::matrix::Dense<double>::diag_sub(const double alpha);
template void monolish::matrix::Dense<float>::diag_sub(const float alpha);

} // namespace monolish::matrix
