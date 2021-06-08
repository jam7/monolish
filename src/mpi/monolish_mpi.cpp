// This code is generated by gen_vector_blas.sh
#include "../internal/monolish_internal.hpp"
#include "Bcast.hpp"
#include "Gather.hpp"
#include "Scatter.hpp"
#include "allreduce.hpp"
#include "send_recv.hpp"

namespace monolish::mpi {

void Comm::Init() {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);
#if defined MONOLISH_USE_MPI
  assert(MPI_Init(nullptr, nullptr) == MPI_SUCCESS);
  if (comm == 0) {
    comm = MPI_COMM_WORLD;
  }
#endif
  logger.util_out();
}

void Comm::Init(int argc, char **argv) {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);
#if defined MONOLISH_USE_MPI
  assert(MPI_Init(&argc, &argv) == MPI_SUCCESS);
  if (comm == 0) {
    comm = MPI_COMM_WORLD;
  }
#endif
  logger.util_out();
}

bool Comm::Initialized() const {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);
#if defined MONOLISH_USE_MPI
  int flag;
  assert(MPI_Initialized(&flag) == MPI_SUCCESS);
  logger.util_out();
  return (flag == 0) ? true : false;
#endif
  logger.util_out();
  return true;
}

void Comm::Finalize() {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);
#if defined MONOLISH_USE_MPI
  assert(MPI_Finalize() == MPI_SUCCESS);
#endif
  logger.util_out();
}

///////////////////////////////////////////////

int Comm::get_rank() {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);
#if defined MONOLISH_USE_MPI
  MPI_Comm_rank(get_comm(), &rank);
  logger.util_out();
  return rank;
#endif
  logger.util_out();
  return 0;
}

int Comm::get_size() {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);
#if defined MONOLISH_USE_MPI
  MPI_Comm_size(get_comm(), &size);
  logger.util_out();
  return size;
#endif
  logger.util_out();
  return 1;
}

void Comm::set_comm(MPI_Comm external_comm) {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);
  comm = external_comm;
  logger.util_out();
}

///////////////////////////////////////////////

void Comm::Barrier() const {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);
#if defined MONOLISH_USE_MPI
  MPI_Barrier(get_comm());
  logger.util_out();
#endif
  logger.util_out();
}

void Comm::Send(double val, int dst, int tag, bool gpu_sync) const {
  Send_core(val, dst, tag, get_comm(), gpu_sync);
}
void Comm::Send(float val, int dst, int tag, bool gpu_sync) const {
  Send_core(val, dst, tag, get_comm(), gpu_sync);
}
void Comm::Send(int val, int dst, int tag, bool gpu_sync) const {
  Send_core(val, dst, tag, get_comm(), gpu_sync);
}
void Comm::Send(size_t val, int dst, int tag, bool gpu_sync) const {
  Send_core(val, dst, tag, get_comm(), gpu_sync);
}

void Comm::Send(std::vector<double> &vec, int dst, int tag,
                bool gpu_sync) const {
  Send_core(vec, dst, tag, get_comm(), gpu_sync);
}
void Comm::Send(std::vector<float> &vec, int dst, int tag,
                bool gpu_sync) const {
  Send_core(vec, dst, tag, get_comm(), gpu_sync);
}
void Comm::Send(std::vector<int> &vec, int dst, int tag, bool gpu_sync) const {
  Send_core(vec, dst, tag, get_comm(), gpu_sync);
}
void Comm::Send(std::vector<size_t> &vec, int dst, int tag,
                bool gpu_sync) const {
  Send_core(vec, dst, tag, get_comm(), gpu_sync);
}

void Comm::Send(monolish::vector<double> &vec, int dst, int tag,
                bool gpu_sync) const {
  Send_core(vec, dst, tag, get_comm(), gpu_sync);
}
void Comm::Send(monolish::vector<float> &vec, int dst, int tag,
                bool gpu_sync) const {
  Send_core(vec, dst, tag, get_comm(), gpu_sync);
}

MPI_Status Comm::Recv(double val, int src, int tag, bool gpu_sync) const {
  return Recv_core(val, src, tag, get_comm(), gpu_sync);
}
MPI_Status Comm::Recv(float val, int src, int tag, bool gpu_sync) const {
  return Recv_core(val, src, tag, get_comm(), gpu_sync);
}
MPI_Status Comm::Recv(int val, int src, int tag, bool gpu_sync) const {
  return Recv_core(val, src, tag, get_comm(), gpu_sync);
}
MPI_Status Comm::Recv(size_t val, int src, int tag, bool gpu_sync) const {
  return Recv_core(val, src, tag, get_comm(), gpu_sync);
}

MPI_Status Comm::Recv(std::vector<double> &vec, int src, int tag,
                      bool gpu_sync) const {
  return Recv_core(vec, src, tag, get_comm(), gpu_sync);
}
MPI_Status Comm::Recv(std::vector<float> &vec, int src, int tag,
                      bool gpu_sync) const {
  return Recv_core(vec, src, tag, get_comm(), gpu_sync);
}
MPI_Status Comm::Recv(std::vector<int> &vec, int src, int tag,
                      bool gpu_sync) const {
  return Recv_core(vec, src, tag, get_comm(), gpu_sync);
}
MPI_Status Comm::Recv(std::vector<size_t> &vec, int src, int tag,
                      bool gpu_sync) const {
  return Recv_core(vec, src, tag, get_comm(), gpu_sync);
}

MPI_Status Comm::Recv(monolish::vector<double> &vec, int src, int tag,
                      bool gpu_sync) const {
  return Recv_core(vec, src, tag, get_comm(), gpu_sync);
}
MPI_Status Comm::Recv(monolish::vector<float> &vec, int src, int tag,
                      bool gpu_sync) const {
  return Recv_core(vec, src, tag, get_comm(), gpu_sync);
}

double Comm::Allreduce(double val) const {
  return Allreduce_core(val, MPI_SUM, get_comm());
}
float Comm::Allreduce(float val) const {
  return Allreduce_core(val, MPI_SUM, get_comm());
}
int Comm::Allreduce(int val) const {
  return Allreduce_core(val, MPI_SUM, get_comm());
}
size_t Comm::Allreduce(size_t val) const {
  return Allreduce_core(val, MPI_SUM, get_comm());
}

double Comm::Allreduce_sum(double val) const {
  return Allreduce_core(val, MPI_SUM, get_comm());
}
float Comm::Allreduce_sum(float val) const {
  return Allreduce_core(val, MPI_SUM, get_comm());
}
int Comm::Allreduce_sum(int val) const {
  return Allreduce_core(val, MPI_SUM, get_comm());
}
size_t Comm::Allreduce_sum(size_t val) const {
  return Allreduce_core(val, MPI_SUM, get_comm());
}

double Comm::Allreduce_prod(double val) const {
  return Allreduce_core(val, MPI_PROD, get_comm());
}
float Comm::Allreduce_prod(float val) const {
  return Allreduce_core(val, MPI_PROD, get_comm());
}
int Comm::Allreduce_prod(int val) const {
  return Allreduce_core(val, MPI_PROD, get_comm());
}
size_t Comm::Allreduce_prod(size_t val) const {
  return Allreduce_core(val, MPI_PROD, get_comm());
}

double Comm::Allreduce_max(double val) const {
  return Allreduce_core(val, MPI_MAX, get_comm());
}
float Comm::Allreduce_max(float val) const {
  return Allreduce_core(val, MPI_MAX, get_comm());
}
int Comm::Allreduce_max(int val) const {
  return Allreduce_core(val, MPI_MAX, get_comm());
}
size_t Comm::Allreduce_max(size_t val) const {
  return Allreduce_core(val, MPI_MAX, get_comm());
}

double Comm::Allreduce_min(double val) const {
  return Allreduce_core(val, MPI_MIN, get_comm());
}
float Comm::Allreduce_min(float val) const {
  return Allreduce_core(val, MPI_MIN, get_comm());
}
int Comm::Allreduce_min(int val) const {
  return Allreduce_core(val, MPI_MIN, get_comm());
}
size_t Comm::Allreduce_min(size_t val) const {
  return Allreduce_core(val, MPI_MIN, get_comm());
}

void Comm::Bcast(double &val, int root, bool gpu_sync) const {
  Bcast_core(val, root, get_comm(), gpu_sync);
}
void Comm::Bcast(float &val, int root, bool gpu_sync) const {
  Bcast_core(val, root, get_comm(), gpu_sync);
}
void Comm::Bcast(int &val, int root, bool gpu_sync) const {
  Bcast_core(val, root, get_comm(), gpu_sync);
}
void Comm::Bcast(size_t &val, int root, bool gpu_sync) const {
  Bcast_core(val, root, get_comm(), gpu_sync);
}

void Comm::Bcast(std::vector<double> &vec, int root, bool gpu_sync) const {
  Bcast_core(vec, root, get_comm(), gpu_sync);
}
void Comm::Bcast(std::vector<float> &vec, int root, bool gpu_sync) const {
  Bcast_core(vec, root, get_comm(), gpu_sync);
}
void Comm::Bcast(std::vector<int> &vec, int root, bool gpu_sync) const {
  Bcast_core(vec, root, get_comm(), gpu_sync);
}
void Comm::Bcast(std::vector<size_t> &vec, int root, bool gpu_sync) const {
  Bcast_core(vec, root, get_comm(), gpu_sync);
}

void Comm::Bcast(monolish::vector<double> &vec, int root, bool gpu_sync) const {
  Bcast_core(vec, root, get_comm(), gpu_sync);
}
void Comm::Bcast(monolish::vector<float> &vec, int root, bool gpu_sync) const {
  Bcast_core(vec, root, get_comm(), gpu_sync);
}

void Comm::Gather(monolish::vector<double> &sendvec,
                  monolish::vector<double> &recvvec, int root,
                  bool gpu_sync) const {
  Gather_core(sendvec, recvvec, root, get_comm(), gpu_sync);
}
void Comm::Gather(monolish::vector<float> &sendvec,
                  monolish::vector<float> &recvvec, int root,
                  bool gpu_sync) const {
  Gather_core(sendvec, recvvec, root, get_comm(), gpu_sync);
}

void Comm::Gather(std::vector<double> &sendvec, std::vector<double> &recvvec,
                  int root, bool gpu_sync) const {
  Gather_core(sendvec, recvvec, root, get_comm(), gpu_sync);
}
void Comm::Gather(std::vector<float> &sendvec, std::vector<float> &recvvec,
                  int root, bool gpu_sync) const {
  Gather_core(sendvec, recvvec, root, get_comm(), gpu_sync);
}
void Comm::Gather(std::vector<int> &sendvec, std::vector<int> &recvvec,
                  int root, bool gpu_sync) const {
  Gather_core(sendvec, recvvec, root, get_comm(), gpu_sync);
}
void Comm::Gather(std::vector<size_t> &sendvec, std::vector<size_t> &recvvec,
                  int root, bool gpu_sync) const {
  Gather_core(sendvec, recvvec, root, get_comm(), gpu_sync);
}

void Comm::Scatter(monolish::vector<double> &sendvec,
                   monolish::vector<double> &recvvec, int root,
                   bool gpu_sync) const {
  Scatter_core(sendvec, recvvec, root, get_comm(), gpu_sync);
}
void Comm::Scatter(monolish::vector<float> &sendvec,
                   monolish::vector<float> &recvvec, int root,
                   bool gpu_sync) const {
  Scatter_core(sendvec, recvvec, root, get_comm(), gpu_sync);
}

void Comm::Scatter(std::vector<double> &sendvec, std::vector<double> &recvvec,
                   int root, bool gpu_sync) const {
  Scatter_core(sendvec, recvvec, root, get_comm(), gpu_sync);
}
void Comm::Scatter(std::vector<float> &sendvec, std::vector<float> &recvvec,
                   int root, bool gpu_sync) const {
  Scatter_core(sendvec, recvvec, root, get_comm(), gpu_sync);
}
void Comm::Scatter(std::vector<int> &sendvec, std::vector<int> &recvvec,
                   int root, bool gpu_sync) const {
  Scatter_core(sendvec, recvvec, root, get_comm(), gpu_sync);
}
void Comm::Scatter(std::vector<size_t> &sendvec, std::vector<size_t> &recvvec,
                   int root, bool gpu_sync) const {
  Scatter_core(sendvec, recvvec, root, get_comm(), gpu_sync);
}

} // namespace monolish::mpi
