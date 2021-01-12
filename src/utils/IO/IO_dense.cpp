#include "../../../include/common/monolish_dense.hpp"
#include "../../../include/common/monolish_logger.hpp"
#include "../../../include/common/monolish_matrix.hpp"
#include "../../internal/monolish_internal.hpp"

#include <cassert>
#include <fstream>
#include <iomanip>
#include <limits>
#include <sstream>
#include <stdexcept>
#include <string>

namespace monolish {
namespace matrix {

template <typename T> void Dense<T>::print_all(bool force_cpu) const {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);

  if (get_device_mem_stat() == true && force_cpu == false) {
#if MONOLISH_USE_GPU
#pragma omp target
    for (size_t i = 0; i < get_row(); i++) {
      for (size_t j = 0; j < get_col(); j++) {
        printf("%d %d %f\n", i + 1, j + 1, val[i * get_col() + j]);
      }
    }
#else
    throw std::runtime_error(
        "error USE_GPU is false, but get_device_mem_stat() == true");
#endif
  } else {
    for (size_t i = 0; i < get_row(); i++) {
      for (size_t j = 0; j < get_col(); j++) {
        std::cout << i + 1 << " " << j + 1 << " " << val[i * get_col() + j]
                  << std::endl;
      }
    }
  }

  logger.util_out();
}
template void Dense<double>::print_all(bool force_cpu) const;
template void Dense<float>::print_all(bool force_cpu) const;

}
}
