#include "../internal/monolish_internal.hpp"
#include "../internal/mpi/mpi_util.hpp"

namespace monolish {
namespace {

///////////////////////////
// send
///////////////////////////

// Scalar
template <typename T>
void Send_core(T &val, int dst, int tag, MPI_Comm comm, bool gpu_sync) {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);

#if defined MONOLISH_USE_MPI
  MPI_Send(&val, 1, internal::mpi::get_type(val), dst, tag, comm);
#endif

  logger.util_out();
}

// std::vector
template <typename T>
void Send_core(std::vector<T> &vec, int dst, int tag, MPI_Comm comm, bool gpu_sync) {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);

#if defined MONOLISH_USE_MPI
  MPI_Send(vec.data(), vec.size(), internal::mpi::get_type(vec[0]), dst, tag, comm);
#endif

  logger.util_out();
}

// monolish::vector
template <typename T>
void Send_core(monolish::vector<T> &vec, int dst, int tag, MPI_Comm comm, bool gpu_sync) {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);

#if defined MONOLISH_USE_GPU
  if ( (gpu_sync == true) && (vec.get_device_mem_stat()==true) ) {
    vec.recv();
  }
#endif

#if defined MONOLISH_USE_MPI
  MPI_Send(vec.data(), vec.size(), internal::mpi::get_type(vec[0]), dst, tag, comm);
#endif

#if defined MONOLISH_USE_GPU
  if (gpu_sync == true) {
    vec.send();
  }
#endif

  logger.util_out();
}

///////////////////////////
// recv
///////////////////////////

// Scalar
template <typename T>
void Recv_core(T &val, int src, int tag, MPI_Comm comm, bool gpu_sync) {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);

#if defined MONOLISH_USE_MPI
  MPI_Recv(&val, 1, internal::mpi::get_type(val), src, tag, comm);
#endif

  logger.util_out();
}

// std::vector
template <typename T>
void Recv_core(std::vector<T> &vec, int src, int tag, MPI_Comm comm, bool gpu_sync) {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);

#if defined MONOLISH_USE_MPI
  MPI_Recv(vec.data(), vec.size(), internal::mpi::get_type(vec[0]), src, tag, comm);
#endif

  logger.util_out();
}

// monolish::vector
template <typename T>
void Recv_core(monolish::vector<T> &vec, int src, int tag, MPI_Comm comm, bool gpu_sync) {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);

#if defined MONOLISH_USE_GPU
  if ( (gpu_sync == true) && (vec.get_device_mem_stat()==true) ) {
    vec.recv();
  }
#endif

#if defined MONOLISH_USE_MPI
  MPI_Recv(vec.data(), vec.size(), internal::mpi::get_type(vec[0]), src, tag, comm);
#endif

#if defined MONOLISH_USE_GPU
  if (gpu_sync == true) {
    vec.send();
  }
#endif

  logger.util_out();
}

} // namespace
} // namespace monolish
