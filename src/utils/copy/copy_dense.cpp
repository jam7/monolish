#include "../../../include/monolish/common/monolish_common.hpp"
#include "../../../include/monolish/common/monolish_dense.hpp"
#include "../../../include/monolish/common/monolish_logger.hpp"
#include "../../../include/monolish/common/monolish_matrix.hpp"
#include "../../internal/monolish_internal.hpp"

namespace monolish {
namespace matrix {

template <typename T> void Dense<T>::operator=(const Dense<T> &mat) {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);

  // err
  assert(monolish::util::is_same_size(*this, mat));
  assert(monolish::util::is_same_device_mem_stat(*this, mat));

  // gpu copy
  if (mat.get_device_mem_stat()) {
    internal::vcopy(get_nnz(), mat.data(), data(), true);
  } else {
    internal::vcopy(get_nnz(), mat.data(), data(), false);
  }

  logger.util_out();
}

template void Dense<double>::operator=(const Dense<double> &mat);
template void Dense<float>::operator=(const Dense<float> &mat);

template <typename T>
void Dense<T>::set_ptr(const size_t M, const size_t N, const T *value) {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);
  val_create_flag = true;
  resize(M * N);
  for (size_t i = 0; i < M * N; ++i) {
    data()[i] = value[i];
  }

  rowN = M;
  colN = N;
  logger.util_out();
}
template void Dense<double>::set_ptr(const size_t M, const size_t N,
                                     const double *value);
template void Dense<float>::set_ptr(const size_t M, const size_t N,
                                    const float *value);

template <typename T>
void Dense<T>::set_ptr(const size_t M, const size_t N,
                       const std::vector<T> &value) {
  set_ptr(M, N, value.data());
}
template void Dense<double>::set_ptr(const size_t M, const size_t N,
                                     const std::vector<double> &value);
template void Dense<float>::set_ptr(const size_t M, const size_t N,
                                    const std::vector<float> &value);

} // namespace matrix
} // namespace monolish
