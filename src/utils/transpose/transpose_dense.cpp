#include "../../../include/common/monolish_dense.hpp"
#include "../../../include/common/monolish_logger.hpp"
#include "../../../include/common/monolish_matrix.hpp"
#include "../../internal/monolish_internal.hpp"

namespace monolish {
namespace matrix {

template <typename T> Dense<T> &Dense<T>::transpose() {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);
  Dense<T> B(get_col(), get_row());
  for (size_t i = 0; i < get_row(); ++i) {
    for (size_t j = 0; j < get_col(); ++j) {
      B.val[j * get_row() + i] = val[i * get_col() + j];
    }
  }
  std::copy(B.val.data(), B.val.data() + nnz, val.begin());
  set_row(B.get_row());
  set_col(B.get_col());
  logger.util_out();
  return *this;
}
template Dense<double> &Dense<double>::transpose();
template Dense<float> &Dense<float>::transpose();

template <typename T> void Dense<T>::transpose(const Dense<T> &B) {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);
  set_row(B.get_col());
  set_col(B.get_row());
  val.resize(B.get_row() * B.get_col());

  for (size_t i = 0; i < get_row(); ++i) {
    for (size_t j = 0; j < get_col(); ++j) {
      val[j * get_row() + i] = B.val[i * get_col() + j];
    }
  }
  logger.util_out();
}
template void Dense<double>::transpose(const Dense<double> &B);
template void Dense<float>::transpose(const Dense<float> &B);

}
}
