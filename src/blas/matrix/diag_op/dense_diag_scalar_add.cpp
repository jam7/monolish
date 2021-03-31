#include "../../../../include/monolish_blas.hpp"
#include "../../../internal/monolish_internal.hpp"

namespace monolish {
namespace matrix {

// add scalar
template <typename T> void Dense<T>::diag_add(const T alpha) {
  Logger &logger = Logger::get_instance();
  logger.func_in(monolish_func);

  T *vald = val.data();
  const size_t N = get_col();
  const size_t Len = get_row() > get_col() ? get_row() : get_col();

  if (gpu_status == true) {
#if MONOLISH_USE_GPU // gpu
#pragma omp target teams distribute parallel for
    for (size_t i = 0; i < Len; i++) {
      vald[N * i + i] += alpha;
    }
#else
    throw std::runtime_error("error USE_GPU is false, but gpu_status == true");
#endif
  } else {
#pragma omp parallel for
    for (size_t i = 0; i < Len; i++) {
      vald[N * i + i] += alpha;
    }
  }

  logger.func_out();
}
template void monolish::matrix::Dense<double>::diag_add(const double alpha);
template void monolish::matrix::Dense<float>::diag_add(const float alpha);

} // namespace matrix
} // namespace monolish
