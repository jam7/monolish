#include "../../test_utils.hpp"

template <typename T> void ans_vreciprocal(monolish::vector<T> &ans) {
  for (size_t i = 0; i < ans.size(); i++) {
    ans[i] = 1 / ans[i];
  }
}

template <typename T>
bool test_send_vreciprocal(const size_t size, double tol) {

  monolish::vector<T> ans(size, 0.1, 1.0, test_random_engine());

  monolish::vector<T> ans_tmp(ans);
  ans_vreciprocal(ans_tmp);

  monolish::util::send(ans);
  monolish::vml::reciprocal(ans, ans);
  ans.recv();

  return ans_check<T>(__func__, ans.data(), ans_tmp.data(), ans.size(), tol);
}

template <typename T> bool test_vreciprocal(const size_t size, double tol) {

  monolish::vector<T> ans(size, 0.1, 1.0, test_random_engine());

  monolish::vector<T> ans_tmp(ans);
  ans_vreciprocal(ans_tmp);

  monolish::vml::reciprocal(ans, ans);

  return ans_check<T>(__func__, ans.data(), ans_tmp.data(), ans.size(), tol);
}
