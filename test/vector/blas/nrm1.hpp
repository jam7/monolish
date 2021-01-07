#include "../../test_utils.hpp"

template <typename T> T ans_nrm1(monolish::vector<T> &mx) {
  T ans = 0;

  for (size_t i = 0; i < mx.size(); i++) {
    ans += std::abs(mx[i]);
  }

  return ans;
}

template <typename T> bool test_send_nrm1(const size_t size, double tol) {

  monolish::vector<T> x(size, -1.0, 1.0);

  auto ans = ans_nrm1(x);
  monolish::util::send(x);
  auto result = monolish::blas::nrm1(x);

  return ans_check<T>(__func__, result, ans, tol);
}

template <typename T> bool test_nrm1(const size_t size, double tol) {

  monolish::vector<T> x(size, 0.0, 1.0);

  auto result = monolish::blas::nrm1(x);
  auto ans = ans_nrm1(x);

  return ans_check<T>(__func__, result, ans, tol);
}
