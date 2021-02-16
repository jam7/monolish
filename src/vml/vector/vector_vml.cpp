//this code is generated by gen_vector_vml.sh
#include "../../../include/monolish_vml.hpp"
#include "../../internal/monolish_internal.hpp"
#include "./arithmetic/vecadd.hpp"
#include "./arithmetic/vecsub.hpp"
#include "./arithmetic/vecmul.hpp"
#include "./arithmetic/vecdiv.hpp"

namespace monolish {
namespace vml {

void add(const vector<double> &a, const vector<double> &b, vector<double> &y){vvadd_core(a, b, y);}
void add(const vector<double> &a, const vector<double> &b, view1D<vector<double>,double> &y){vvadd_core(a, b, y);}
void add(const vector<double> &a, const vector<double> &b, view1D<matrix::Dense<double>,double> &y){vvadd_core(a, b, y);}
void add(const vector<double> &a, const view1D<vector<double>,double> &b, vector<double> &y){vvadd_core(a, b, y);}
void add(const vector<double> &a, const view1D<vector<double>,double> &b, view1D<vector<double>,double> &y){vvadd_core(a, b, y);}
void add(const vector<double> &a, const view1D<vector<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvadd_core(a, b, y);}
void add(const vector<double> &a, const view1D<matrix::Dense<double>,double> &b, vector<double> &y){vvadd_core(a, b, y);}
void add(const vector<double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<vector<double>,double> &y){vvadd_core(a, b, y);}
void add(const vector<double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvadd_core(a, b, y);}
void add(const view1D<vector<double>,double> &a, const vector<double> &b, vector<double> &y){vvadd_core(a, b, y);}
void add(const view1D<vector<double>,double> &a, const vector<double> &b, view1D<vector<double>,double> &y){vvadd_core(a, b, y);}
void add(const view1D<vector<double>,double> &a, const vector<double> &b, view1D<matrix::Dense<double>,double> &y){vvadd_core(a, b, y);}
void add(const view1D<vector<double>,double> &a, const view1D<vector<double>,double> &b, vector<double> &y){vvadd_core(a, b, y);}
void add(const view1D<vector<double>,double> &a, const view1D<vector<double>,double> &b, view1D<vector<double>,double> &y){vvadd_core(a, b, y);}
void add(const view1D<vector<double>,double> &a, const view1D<vector<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvadd_core(a, b, y);}
void add(const view1D<vector<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, vector<double> &y){vvadd_core(a, b, y);}
void add(const view1D<vector<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<vector<double>,double> &y){vvadd_core(a, b, y);}
void add(const view1D<vector<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvadd_core(a, b, y);}
void add(const view1D<matrix::Dense<double>,double> &a, const vector<double> &b, vector<double> &y){vvadd_core(a, b, y);}
void add(const view1D<matrix::Dense<double>,double> &a, const vector<double> &b, view1D<vector<double>,double> &y){vvadd_core(a, b, y);}
void add(const view1D<matrix::Dense<double>,double> &a, const vector<double> &b, view1D<matrix::Dense<double>,double> &y){vvadd_core(a, b, y);}
void add(const view1D<matrix::Dense<double>,double> &a, const view1D<vector<double>,double> &b, vector<double> &y){vvadd_core(a, b, y);}
void add(const view1D<matrix::Dense<double>,double> &a, const view1D<vector<double>,double> &b, view1D<vector<double>,double> &y){vvadd_core(a, b, y);}
void add(const view1D<matrix::Dense<double>,double> &a, const view1D<vector<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvadd_core(a, b, y);}
void add(const view1D<matrix::Dense<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, vector<double> &y){vvadd_core(a, b, y);}
void add(const view1D<matrix::Dense<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<vector<double>,double> &y){vvadd_core(a, b, y);}
void add(const view1D<matrix::Dense<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvadd_core(a, b, y);}
void add(const vector<float> &a, const vector<float> &b, vector<float> &y){vvadd_core(a, b, y);}
void add(const vector<float> &a, const vector<float> &b, view1D<vector<float>,float> &y){vvadd_core(a, b, y);}
void add(const vector<float> &a, const vector<float> &b, view1D<matrix::Dense<float>,float> &y){vvadd_core(a, b, y);}
void add(const vector<float> &a, const view1D<vector<float>,float> &b, vector<float> &y){vvadd_core(a, b, y);}
void add(const vector<float> &a, const view1D<vector<float>,float> &b, view1D<vector<float>,float> &y){vvadd_core(a, b, y);}
void add(const vector<float> &a, const view1D<vector<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvadd_core(a, b, y);}
void add(const vector<float> &a, const view1D<matrix::Dense<float>,float> &b, vector<float> &y){vvadd_core(a, b, y);}
void add(const vector<float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<vector<float>,float> &y){vvadd_core(a, b, y);}
void add(const vector<float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvadd_core(a, b, y);}
void add(const view1D<vector<float>,float> &a, const vector<float> &b, vector<float> &y){vvadd_core(a, b, y);}
void add(const view1D<vector<float>,float> &a, const vector<float> &b, view1D<vector<float>,float> &y){vvadd_core(a, b, y);}
void add(const view1D<vector<float>,float> &a, const vector<float> &b, view1D<matrix::Dense<float>,float> &y){vvadd_core(a, b, y);}
void add(const view1D<vector<float>,float> &a, const view1D<vector<float>,float> &b, vector<float> &y){vvadd_core(a, b, y);}
void add(const view1D<vector<float>,float> &a, const view1D<vector<float>,float> &b, view1D<vector<float>,float> &y){vvadd_core(a, b, y);}
void add(const view1D<vector<float>,float> &a, const view1D<vector<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvadd_core(a, b, y);}
void add(const view1D<vector<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, vector<float> &y){vvadd_core(a, b, y);}
void add(const view1D<vector<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<vector<float>,float> &y){vvadd_core(a, b, y);}
void add(const view1D<vector<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvadd_core(a, b, y);}
void add(const view1D<matrix::Dense<float>,float> &a, const vector<float> &b, vector<float> &y){vvadd_core(a, b, y);}
void add(const view1D<matrix::Dense<float>,float> &a, const vector<float> &b, view1D<vector<float>,float> &y){vvadd_core(a, b, y);}
void add(const view1D<matrix::Dense<float>,float> &a, const vector<float> &b, view1D<matrix::Dense<float>,float> &y){vvadd_core(a, b, y);}
void add(const view1D<matrix::Dense<float>,float> &a, const view1D<vector<float>,float> &b, vector<float> &y){vvadd_core(a, b, y);}
void add(const view1D<matrix::Dense<float>,float> &a, const view1D<vector<float>,float> &b, view1D<vector<float>,float> &y){vvadd_core(a, b, y);}
void add(const view1D<matrix::Dense<float>,float> &a, const view1D<vector<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvadd_core(a, b, y);}
void add(const view1D<matrix::Dense<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, vector<float> &y){vvadd_core(a, b, y);}
void add(const view1D<matrix::Dense<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<vector<float>,float> &y){vvadd_core(a, b, y);}
void add(const view1D<matrix::Dense<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvadd_core(a, b, y);}
void sub(const vector<double> &a, const vector<double> &b, vector<double> &y){vvsub_core(a, b, y);}
void sub(const vector<double> &a, const vector<double> &b, view1D<vector<double>,double> &y){vvsub_core(a, b, y);}
void sub(const vector<double> &a, const vector<double> &b, view1D<matrix::Dense<double>,double> &y){vvsub_core(a, b, y);}
void sub(const vector<double> &a, const view1D<vector<double>,double> &b, vector<double> &y){vvsub_core(a, b, y);}
void sub(const vector<double> &a, const view1D<vector<double>,double> &b, view1D<vector<double>,double> &y){vvsub_core(a, b, y);}
void sub(const vector<double> &a, const view1D<vector<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvsub_core(a, b, y);}
void sub(const vector<double> &a, const view1D<matrix::Dense<double>,double> &b, vector<double> &y){vvsub_core(a, b, y);}
void sub(const vector<double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<vector<double>,double> &y){vvsub_core(a, b, y);}
void sub(const vector<double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvsub_core(a, b, y);}
void sub(const view1D<vector<double>,double> &a, const vector<double> &b, vector<double> &y){vvsub_core(a, b, y);}
void sub(const view1D<vector<double>,double> &a, const vector<double> &b, view1D<vector<double>,double> &y){vvsub_core(a, b, y);}
void sub(const view1D<vector<double>,double> &a, const vector<double> &b, view1D<matrix::Dense<double>,double> &y){vvsub_core(a, b, y);}
void sub(const view1D<vector<double>,double> &a, const view1D<vector<double>,double> &b, vector<double> &y){vvsub_core(a, b, y);}
void sub(const view1D<vector<double>,double> &a, const view1D<vector<double>,double> &b, view1D<vector<double>,double> &y){vvsub_core(a, b, y);}
void sub(const view1D<vector<double>,double> &a, const view1D<vector<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvsub_core(a, b, y);}
void sub(const view1D<vector<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, vector<double> &y){vvsub_core(a, b, y);}
void sub(const view1D<vector<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<vector<double>,double> &y){vvsub_core(a, b, y);}
void sub(const view1D<vector<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvsub_core(a, b, y);}
void sub(const view1D<matrix::Dense<double>,double> &a, const vector<double> &b, vector<double> &y){vvsub_core(a, b, y);}
void sub(const view1D<matrix::Dense<double>,double> &a, const vector<double> &b, view1D<vector<double>,double> &y){vvsub_core(a, b, y);}
void sub(const view1D<matrix::Dense<double>,double> &a, const vector<double> &b, view1D<matrix::Dense<double>,double> &y){vvsub_core(a, b, y);}
void sub(const view1D<matrix::Dense<double>,double> &a, const view1D<vector<double>,double> &b, vector<double> &y){vvsub_core(a, b, y);}
void sub(const view1D<matrix::Dense<double>,double> &a, const view1D<vector<double>,double> &b, view1D<vector<double>,double> &y){vvsub_core(a, b, y);}
void sub(const view1D<matrix::Dense<double>,double> &a, const view1D<vector<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvsub_core(a, b, y);}
void sub(const view1D<matrix::Dense<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, vector<double> &y){vvsub_core(a, b, y);}
void sub(const view1D<matrix::Dense<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<vector<double>,double> &y){vvsub_core(a, b, y);}
void sub(const view1D<matrix::Dense<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvsub_core(a, b, y);}
void sub(const vector<float> &a, const vector<float> &b, vector<float> &y){vvsub_core(a, b, y);}
void sub(const vector<float> &a, const vector<float> &b, view1D<vector<float>,float> &y){vvsub_core(a, b, y);}
void sub(const vector<float> &a, const vector<float> &b, view1D<matrix::Dense<float>,float> &y){vvsub_core(a, b, y);}
void sub(const vector<float> &a, const view1D<vector<float>,float> &b, vector<float> &y){vvsub_core(a, b, y);}
void sub(const vector<float> &a, const view1D<vector<float>,float> &b, view1D<vector<float>,float> &y){vvsub_core(a, b, y);}
void sub(const vector<float> &a, const view1D<vector<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvsub_core(a, b, y);}
void sub(const vector<float> &a, const view1D<matrix::Dense<float>,float> &b, vector<float> &y){vvsub_core(a, b, y);}
void sub(const vector<float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<vector<float>,float> &y){vvsub_core(a, b, y);}
void sub(const vector<float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvsub_core(a, b, y);}
void sub(const view1D<vector<float>,float> &a, const vector<float> &b, vector<float> &y){vvsub_core(a, b, y);}
void sub(const view1D<vector<float>,float> &a, const vector<float> &b, view1D<vector<float>,float> &y){vvsub_core(a, b, y);}
void sub(const view1D<vector<float>,float> &a, const vector<float> &b, view1D<matrix::Dense<float>,float> &y){vvsub_core(a, b, y);}
void sub(const view1D<vector<float>,float> &a, const view1D<vector<float>,float> &b, vector<float> &y){vvsub_core(a, b, y);}
void sub(const view1D<vector<float>,float> &a, const view1D<vector<float>,float> &b, view1D<vector<float>,float> &y){vvsub_core(a, b, y);}
void sub(const view1D<vector<float>,float> &a, const view1D<vector<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvsub_core(a, b, y);}
void sub(const view1D<vector<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, vector<float> &y){vvsub_core(a, b, y);}
void sub(const view1D<vector<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<vector<float>,float> &y){vvsub_core(a, b, y);}
void sub(const view1D<vector<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvsub_core(a, b, y);}
void sub(const view1D<matrix::Dense<float>,float> &a, const vector<float> &b, vector<float> &y){vvsub_core(a, b, y);}
void sub(const view1D<matrix::Dense<float>,float> &a, const vector<float> &b, view1D<vector<float>,float> &y){vvsub_core(a, b, y);}
void sub(const view1D<matrix::Dense<float>,float> &a, const vector<float> &b, view1D<matrix::Dense<float>,float> &y){vvsub_core(a, b, y);}
void sub(const view1D<matrix::Dense<float>,float> &a, const view1D<vector<float>,float> &b, vector<float> &y){vvsub_core(a, b, y);}
void sub(const view1D<matrix::Dense<float>,float> &a, const view1D<vector<float>,float> &b, view1D<vector<float>,float> &y){vvsub_core(a, b, y);}
void sub(const view1D<matrix::Dense<float>,float> &a, const view1D<vector<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvsub_core(a, b, y);}
void sub(const view1D<matrix::Dense<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, vector<float> &y){vvsub_core(a, b, y);}
void sub(const view1D<matrix::Dense<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<vector<float>,float> &y){vvsub_core(a, b, y);}
void sub(const view1D<matrix::Dense<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvsub_core(a, b, y);}
void mul(const vector<double> &a, const vector<double> &b, vector<double> &y){vvmul_core(a, b, y);}
void mul(const vector<double> &a, const vector<double> &b, view1D<vector<double>,double> &y){vvmul_core(a, b, y);}
void mul(const vector<double> &a, const vector<double> &b, view1D<matrix::Dense<double>,double> &y){vvmul_core(a, b, y);}
void mul(const vector<double> &a, const view1D<vector<double>,double> &b, vector<double> &y){vvmul_core(a, b, y);}
void mul(const vector<double> &a, const view1D<vector<double>,double> &b, view1D<vector<double>,double> &y){vvmul_core(a, b, y);}
void mul(const vector<double> &a, const view1D<vector<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvmul_core(a, b, y);}
void mul(const vector<double> &a, const view1D<matrix::Dense<double>,double> &b, vector<double> &y){vvmul_core(a, b, y);}
void mul(const vector<double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<vector<double>,double> &y){vvmul_core(a, b, y);}
void mul(const vector<double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvmul_core(a, b, y);}
void mul(const view1D<vector<double>,double> &a, const vector<double> &b, vector<double> &y){vvmul_core(a, b, y);}
void mul(const view1D<vector<double>,double> &a, const vector<double> &b, view1D<vector<double>,double> &y){vvmul_core(a, b, y);}
void mul(const view1D<vector<double>,double> &a, const vector<double> &b, view1D<matrix::Dense<double>,double> &y){vvmul_core(a, b, y);}
void mul(const view1D<vector<double>,double> &a, const view1D<vector<double>,double> &b, vector<double> &y){vvmul_core(a, b, y);}
void mul(const view1D<vector<double>,double> &a, const view1D<vector<double>,double> &b, view1D<vector<double>,double> &y){vvmul_core(a, b, y);}
void mul(const view1D<vector<double>,double> &a, const view1D<vector<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvmul_core(a, b, y);}
void mul(const view1D<vector<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, vector<double> &y){vvmul_core(a, b, y);}
void mul(const view1D<vector<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<vector<double>,double> &y){vvmul_core(a, b, y);}
void mul(const view1D<vector<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvmul_core(a, b, y);}
void mul(const view1D<matrix::Dense<double>,double> &a, const vector<double> &b, vector<double> &y){vvmul_core(a, b, y);}
void mul(const view1D<matrix::Dense<double>,double> &a, const vector<double> &b, view1D<vector<double>,double> &y){vvmul_core(a, b, y);}
void mul(const view1D<matrix::Dense<double>,double> &a, const vector<double> &b, view1D<matrix::Dense<double>,double> &y){vvmul_core(a, b, y);}
void mul(const view1D<matrix::Dense<double>,double> &a, const view1D<vector<double>,double> &b, vector<double> &y){vvmul_core(a, b, y);}
void mul(const view1D<matrix::Dense<double>,double> &a, const view1D<vector<double>,double> &b, view1D<vector<double>,double> &y){vvmul_core(a, b, y);}
void mul(const view1D<matrix::Dense<double>,double> &a, const view1D<vector<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvmul_core(a, b, y);}
void mul(const view1D<matrix::Dense<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, vector<double> &y){vvmul_core(a, b, y);}
void mul(const view1D<matrix::Dense<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<vector<double>,double> &y){vvmul_core(a, b, y);}
void mul(const view1D<matrix::Dense<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvmul_core(a, b, y);}
void mul(const vector<float> &a, const vector<float> &b, vector<float> &y){vvmul_core(a, b, y);}
void mul(const vector<float> &a, const vector<float> &b, view1D<vector<float>,float> &y){vvmul_core(a, b, y);}
void mul(const vector<float> &a, const vector<float> &b, view1D<matrix::Dense<float>,float> &y){vvmul_core(a, b, y);}
void mul(const vector<float> &a, const view1D<vector<float>,float> &b, vector<float> &y){vvmul_core(a, b, y);}
void mul(const vector<float> &a, const view1D<vector<float>,float> &b, view1D<vector<float>,float> &y){vvmul_core(a, b, y);}
void mul(const vector<float> &a, const view1D<vector<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvmul_core(a, b, y);}
void mul(const vector<float> &a, const view1D<matrix::Dense<float>,float> &b, vector<float> &y){vvmul_core(a, b, y);}
void mul(const vector<float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<vector<float>,float> &y){vvmul_core(a, b, y);}
void mul(const vector<float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvmul_core(a, b, y);}
void mul(const view1D<vector<float>,float> &a, const vector<float> &b, vector<float> &y){vvmul_core(a, b, y);}
void mul(const view1D<vector<float>,float> &a, const vector<float> &b, view1D<vector<float>,float> &y){vvmul_core(a, b, y);}
void mul(const view1D<vector<float>,float> &a, const vector<float> &b, view1D<matrix::Dense<float>,float> &y){vvmul_core(a, b, y);}
void mul(const view1D<vector<float>,float> &a, const view1D<vector<float>,float> &b, vector<float> &y){vvmul_core(a, b, y);}
void mul(const view1D<vector<float>,float> &a, const view1D<vector<float>,float> &b, view1D<vector<float>,float> &y){vvmul_core(a, b, y);}
void mul(const view1D<vector<float>,float> &a, const view1D<vector<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvmul_core(a, b, y);}
void mul(const view1D<vector<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, vector<float> &y){vvmul_core(a, b, y);}
void mul(const view1D<vector<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<vector<float>,float> &y){vvmul_core(a, b, y);}
void mul(const view1D<vector<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvmul_core(a, b, y);}
void mul(const view1D<matrix::Dense<float>,float> &a, const vector<float> &b, vector<float> &y){vvmul_core(a, b, y);}
void mul(const view1D<matrix::Dense<float>,float> &a, const vector<float> &b, view1D<vector<float>,float> &y){vvmul_core(a, b, y);}
void mul(const view1D<matrix::Dense<float>,float> &a, const vector<float> &b, view1D<matrix::Dense<float>,float> &y){vvmul_core(a, b, y);}
void mul(const view1D<matrix::Dense<float>,float> &a, const view1D<vector<float>,float> &b, vector<float> &y){vvmul_core(a, b, y);}
void mul(const view1D<matrix::Dense<float>,float> &a, const view1D<vector<float>,float> &b, view1D<vector<float>,float> &y){vvmul_core(a, b, y);}
void mul(const view1D<matrix::Dense<float>,float> &a, const view1D<vector<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvmul_core(a, b, y);}
void mul(const view1D<matrix::Dense<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, vector<float> &y){vvmul_core(a, b, y);}
void mul(const view1D<matrix::Dense<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<vector<float>,float> &y){vvmul_core(a, b, y);}
void mul(const view1D<matrix::Dense<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvmul_core(a, b, y);}
void div(const vector<double> &a, const vector<double> &b, vector<double> &y){vvdiv_core(a, b, y);}
void div(const vector<double> &a, const vector<double> &b, view1D<vector<double>,double> &y){vvdiv_core(a, b, y);}
void div(const vector<double> &a, const vector<double> &b, view1D<matrix::Dense<double>,double> &y){vvdiv_core(a, b, y);}
void div(const vector<double> &a, const view1D<vector<double>,double> &b, vector<double> &y){vvdiv_core(a, b, y);}
void div(const vector<double> &a, const view1D<vector<double>,double> &b, view1D<vector<double>,double> &y){vvdiv_core(a, b, y);}
void div(const vector<double> &a, const view1D<vector<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvdiv_core(a, b, y);}
void div(const vector<double> &a, const view1D<matrix::Dense<double>,double> &b, vector<double> &y){vvdiv_core(a, b, y);}
void div(const vector<double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<vector<double>,double> &y){vvdiv_core(a, b, y);}
void div(const vector<double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvdiv_core(a, b, y);}
void div(const view1D<vector<double>,double> &a, const vector<double> &b, vector<double> &y){vvdiv_core(a, b, y);}
void div(const view1D<vector<double>,double> &a, const vector<double> &b, view1D<vector<double>,double> &y){vvdiv_core(a, b, y);}
void div(const view1D<vector<double>,double> &a, const vector<double> &b, view1D<matrix::Dense<double>,double> &y){vvdiv_core(a, b, y);}
void div(const view1D<vector<double>,double> &a, const view1D<vector<double>,double> &b, vector<double> &y){vvdiv_core(a, b, y);}
void div(const view1D<vector<double>,double> &a, const view1D<vector<double>,double> &b, view1D<vector<double>,double> &y){vvdiv_core(a, b, y);}
void div(const view1D<vector<double>,double> &a, const view1D<vector<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvdiv_core(a, b, y);}
void div(const view1D<vector<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, vector<double> &y){vvdiv_core(a, b, y);}
void div(const view1D<vector<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<vector<double>,double> &y){vvdiv_core(a, b, y);}
void div(const view1D<vector<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvdiv_core(a, b, y);}
void div(const view1D<matrix::Dense<double>,double> &a, const vector<double> &b, vector<double> &y){vvdiv_core(a, b, y);}
void div(const view1D<matrix::Dense<double>,double> &a, const vector<double> &b, view1D<vector<double>,double> &y){vvdiv_core(a, b, y);}
void div(const view1D<matrix::Dense<double>,double> &a, const vector<double> &b, view1D<matrix::Dense<double>,double> &y){vvdiv_core(a, b, y);}
void div(const view1D<matrix::Dense<double>,double> &a, const view1D<vector<double>,double> &b, vector<double> &y){vvdiv_core(a, b, y);}
void div(const view1D<matrix::Dense<double>,double> &a, const view1D<vector<double>,double> &b, view1D<vector<double>,double> &y){vvdiv_core(a, b, y);}
void div(const view1D<matrix::Dense<double>,double> &a, const view1D<vector<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvdiv_core(a, b, y);}
void div(const view1D<matrix::Dense<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, vector<double> &y){vvdiv_core(a, b, y);}
void div(const view1D<matrix::Dense<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<vector<double>,double> &y){vvdiv_core(a, b, y);}
void div(const view1D<matrix::Dense<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<matrix::Dense<double>,double> &y){vvdiv_core(a, b, y);}
void div(const vector<float> &a, const vector<float> &b, vector<float> &y){vvdiv_core(a, b, y);}
void div(const vector<float> &a, const vector<float> &b, view1D<vector<float>,float> &y){vvdiv_core(a, b, y);}
void div(const vector<float> &a, const vector<float> &b, view1D<matrix::Dense<float>,float> &y){vvdiv_core(a, b, y);}
void div(const vector<float> &a, const view1D<vector<float>,float> &b, vector<float> &y){vvdiv_core(a, b, y);}
void div(const vector<float> &a, const view1D<vector<float>,float> &b, view1D<vector<float>,float> &y){vvdiv_core(a, b, y);}
void div(const vector<float> &a, const view1D<vector<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvdiv_core(a, b, y);}
void div(const vector<float> &a, const view1D<matrix::Dense<float>,float> &b, vector<float> &y){vvdiv_core(a, b, y);}
void div(const vector<float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<vector<float>,float> &y){vvdiv_core(a, b, y);}
void div(const vector<float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvdiv_core(a, b, y);}
void div(const view1D<vector<float>,float> &a, const vector<float> &b, vector<float> &y){vvdiv_core(a, b, y);}
void div(const view1D<vector<float>,float> &a, const vector<float> &b, view1D<vector<float>,float> &y){vvdiv_core(a, b, y);}
void div(const view1D<vector<float>,float> &a, const vector<float> &b, view1D<matrix::Dense<float>,float> &y){vvdiv_core(a, b, y);}
void div(const view1D<vector<float>,float> &a, const view1D<vector<float>,float> &b, vector<float> &y){vvdiv_core(a, b, y);}
void div(const view1D<vector<float>,float> &a, const view1D<vector<float>,float> &b, view1D<vector<float>,float> &y){vvdiv_core(a, b, y);}
void div(const view1D<vector<float>,float> &a, const view1D<vector<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvdiv_core(a, b, y);}
void div(const view1D<vector<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, vector<float> &y){vvdiv_core(a, b, y);}
void div(const view1D<vector<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<vector<float>,float> &y){vvdiv_core(a, b, y);}
void div(const view1D<vector<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvdiv_core(a, b, y);}
void div(const view1D<matrix::Dense<float>,float> &a, const vector<float> &b, vector<float> &y){vvdiv_core(a, b, y);}
void div(const view1D<matrix::Dense<float>,float> &a, const vector<float> &b, view1D<vector<float>,float> &y){vvdiv_core(a, b, y);}
void div(const view1D<matrix::Dense<float>,float> &a, const vector<float> &b, view1D<matrix::Dense<float>,float> &y){vvdiv_core(a, b, y);}
void div(const view1D<matrix::Dense<float>,float> &a, const view1D<vector<float>,float> &b, vector<float> &y){vvdiv_core(a, b, y);}
void div(const view1D<matrix::Dense<float>,float> &a, const view1D<vector<float>,float> &b, view1D<vector<float>,float> &y){vvdiv_core(a, b, y);}
void div(const view1D<matrix::Dense<float>,float> &a, const view1D<vector<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvdiv_core(a, b, y);}
void div(const view1D<matrix::Dense<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, vector<float> &y){vvdiv_core(a, b, y);}
void div(const view1D<matrix::Dense<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<vector<float>,float> &y){vvdiv_core(a, b, y);}
void div(const view1D<matrix::Dense<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<matrix::Dense<float>,float> &y){vvdiv_core(a, b, y);}

void add(const vector<double> &a, const double alpha, vector<double> &y){svadd_core(a, alpha, y);}
void add(const vector<double> &a, const double alpha, view1D<vector<double>,double> &y){svadd_core(a, alpha, y);}
void add(const vector<double> &a, const double alpha, view1D<matrix::Dense<double>,double> &y){svadd_core(a, alpha, y);}
void add(const view1D<vector<double>,double> &a, const double alpha, vector<double> &y){svadd_core(a, alpha, y);}
void add(const view1D<vector<double>,double> &a, const double alpha, view1D<vector<double>,double> &y){svadd_core(a, alpha, y);}
void add(const view1D<vector<double>,double> &a, const double alpha, view1D<matrix::Dense<double>,double> &y){svadd_core(a, alpha, y);}
void add(const view1D<matrix::Dense<double>,double> &a, const double alpha, vector<double> &y){svadd_core(a, alpha, y);}
void add(const view1D<matrix::Dense<double>,double> &a, const double alpha, view1D<vector<double>,double> &y){svadd_core(a, alpha, y);}
void add(const view1D<matrix::Dense<double>,double> &a, const double alpha, view1D<matrix::Dense<double>,double> &y){svadd_core(a, alpha, y);}
void add(const vector<float> &a, const float alpha, vector<float> &y){svadd_core(a, alpha, y);}
void add(const vector<float> &a, const float alpha, view1D<vector<float>,float> &y){svadd_core(a, alpha, y);}
void add(const vector<float> &a, const float alpha, view1D<matrix::Dense<float>,float> &y){svadd_core(a, alpha, y);}
void add(const view1D<vector<float>,float> &a, const float alpha, vector<float> &y){svadd_core(a, alpha, y);}
void add(const view1D<vector<float>,float> &a, const float alpha, view1D<vector<float>,float> &y){svadd_core(a, alpha, y);}
void add(const view1D<vector<float>,float> &a, const float alpha, view1D<matrix::Dense<float>,float> &y){svadd_core(a, alpha, y);}
void add(const view1D<matrix::Dense<float>,float> &a, const float alpha, vector<float> &y){svadd_core(a, alpha, y);}
void add(const view1D<matrix::Dense<float>,float> &a, const float alpha, view1D<vector<float>,float> &y){svadd_core(a, alpha, y);}
void add(const view1D<matrix::Dense<float>,float> &a, const float alpha, view1D<matrix::Dense<float>,float> &y){svadd_core(a, alpha, y);}
void sub(const vector<double> &a, const double alpha, vector<double> &y){svsub_core(a, alpha, y);}
void sub(const vector<double> &a, const double alpha, view1D<vector<double>,double> &y){svsub_core(a, alpha, y);}
void sub(const vector<double> &a, const double alpha, view1D<matrix::Dense<double>,double> &y){svsub_core(a, alpha, y);}
void sub(const view1D<vector<double>,double> &a, const double alpha, vector<double> &y){svsub_core(a, alpha, y);}
void sub(const view1D<vector<double>,double> &a, const double alpha, view1D<vector<double>,double> &y){svsub_core(a, alpha, y);}
void sub(const view1D<vector<double>,double> &a, const double alpha, view1D<matrix::Dense<double>,double> &y){svsub_core(a, alpha, y);}
void sub(const view1D<matrix::Dense<double>,double> &a, const double alpha, vector<double> &y){svsub_core(a, alpha, y);}
void sub(const view1D<matrix::Dense<double>,double> &a, const double alpha, view1D<vector<double>,double> &y){svsub_core(a, alpha, y);}
void sub(const view1D<matrix::Dense<double>,double> &a, const double alpha, view1D<matrix::Dense<double>,double> &y){svsub_core(a, alpha, y);}
void sub(const vector<float> &a, const float alpha, vector<float> &y){svsub_core(a, alpha, y);}
void sub(const vector<float> &a, const float alpha, view1D<vector<float>,float> &y){svsub_core(a, alpha, y);}
void sub(const vector<float> &a, const float alpha, view1D<matrix::Dense<float>,float> &y){svsub_core(a, alpha, y);}
void sub(const view1D<vector<float>,float> &a, const float alpha, vector<float> &y){svsub_core(a, alpha, y);}
void sub(const view1D<vector<float>,float> &a, const float alpha, view1D<vector<float>,float> &y){svsub_core(a, alpha, y);}
void sub(const view1D<vector<float>,float> &a, const float alpha, view1D<matrix::Dense<float>,float> &y){svsub_core(a, alpha, y);}
void sub(const view1D<matrix::Dense<float>,float> &a, const float alpha, vector<float> &y){svsub_core(a, alpha, y);}
void sub(const view1D<matrix::Dense<float>,float> &a, const float alpha, view1D<vector<float>,float> &y){svsub_core(a, alpha, y);}
void sub(const view1D<matrix::Dense<float>,float> &a, const float alpha, view1D<matrix::Dense<float>,float> &y){svsub_core(a, alpha, y);}
void mul(const vector<double> &a, const double alpha, vector<double> &y){svmul_core(a, alpha, y);}
void mul(const vector<double> &a, const double alpha, view1D<vector<double>,double> &y){svmul_core(a, alpha, y);}
void mul(const vector<double> &a, const double alpha, view1D<matrix::Dense<double>,double> &y){svmul_core(a, alpha, y);}
void mul(const view1D<vector<double>,double> &a, const double alpha, vector<double> &y){svmul_core(a, alpha, y);}
void mul(const view1D<vector<double>,double> &a, const double alpha, view1D<vector<double>,double> &y){svmul_core(a, alpha, y);}
void mul(const view1D<vector<double>,double> &a, const double alpha, view1D<matrix::Dense<double>,double> &y){svmul_core(a, alpha, y);}
void mul(const view1D<matrix::Dense<double>,double> &a, const double alpha, vector<double> &y){svmul_core(a, alpha, y);}
void mul(const view1D<matrix::Dense<double>,double> &a, const double alpha, view1D<vector<double>,double> &y){svmul_core(a, alpha, y);}
void mul(const view1D<matrix::Dense<double>,double> &a, const double alpha, view1D<matrix::Dense<double>,double> &y){svmul_core(a, alpha, y);}
void mul(const vector<float> &a, const float alpha, vector<float> &y){svmul_core(a, alpha, y);}
void mul(const vector<float> &a, const float alpha, view1D<vector<float>,float> &y){svmul_core(a, alpha, y);}
void mul(const vector<float> &a, const float alpha, view1D<matrix::Dense<float>,float> &y){svmul_core(a, alpha, y);}
void mul(const view1D<vector<float>,float> &a, const float alpha, vector<float> &y){svmul_core(a, alpha, y);}
void mul(const view1D<vector<float>,float> &a, const float alpha, view1D<vector<float>,float> &y){svmul_core(a, alpha, y);}
void mul(const view1D<vector<float>,float> &a, const float alpha, view1D<matrix::Dense<float>,float> &y){svmul_core(a, alpha, y);}
void mul(const view1D<matrix::Dense<float>,float> &a, const float alpha, vector<float> &y){svmul_core(a, alpha, y);}
void mul(const view1D<matrix::Dense<float>,float> &a, const float alpha, view1D<vector<float>,float> &y){svmul_core(a, alpha, y);}
void mul(const view1D<matrix::Dense<float>,float> &a, const float alpha, view1D<matrix::Dense<float>,float> &y){svmul_core(a, alpha, y);}
void div(const vector<double> &a, const double alpha, vector<double> &y){svdiv_core(a, alpha, y);}
void div(const vector<double> &a, const double alpha, view1D<vector<double>,double> &y){svdiv_core(a, alpha, y);}
void div(const vector<double> &a, const double alpha, view1D<matrix::Dense<double>,double> &y){svdiv_core(a, alpha, y);}
void div(const view1D<vector<double>,double> &a, const double alpha, vector<double> &y){svdiv_core(a, alpha, y);}
void div(const view1D<vector<double>,double> &a, const double alpha, view1D<vector<double>,double> &y){svdiv_core(a, alpha, y);}
void div(const view1D<vector<double>,double> &a, const double alpha, view1D<matrix::Dense<double>,double> &y){svdiv_core(a, alpha, y);}
void div(const view1D<matrix::Dense<double>,double> &a, const double alpha, vector<double> &y){svdiv_core(a, alpha, y);}
void div(const view1D<matrix::Dense<double>,double> &a, const double alpha, view1D<vector<double>,double> &y){svdiv_core(a, alpha, y);}
void div(const view1D<matrix::Dense<double>,double> &a, const double alpha, view1D<matrix::Dense<double>,double> &y){svdiv_core(a, alpha, y);}
void div(const vector<float> &a, const float alpha, vector<float> &y){svdiv_core(a, alpha, y);}
void div(const vector<float> &a, const float alpha, view1D<vector<float>,float> &y){svdiv_core(a, alpha, y);}
void div(const vector<float> &a, const float alpha, view1D<matrix::Dense<float>,float> &y){svdiv_core(a, alpha, y);}
void div(const view1D<vector<float>,float> &a, const float alpha, vector<float> &y){svdiv_core(a, alpha, y);}
void div(const view1D<vector<float>,float> &a, const float alpha, view1D<vector<float>,float> &y){svdiv_core(a, alpha, y);}
void div(const view1D<vector<float>,float> &a, const float alpha, view1D<matrix::Dense<float>,float> &y){svdiv_core(a, alpha, y);}
void div(const view1D<matrix::Dense<float>,float> &a, const float alpha, vector<float> &y){svdiv_core(a, alpha, y);}
void div(const view1D<matrix::Dense<float>,float> &a, const float alpha, view1D<vector<float>,float> &y){svdiv_core(a, alpha, y);}
void div(const view1D<matrix::Dense<float>,float> &a, const float alpha, view1D<matrix::Dense<float>,float> &y){svdiv_core(a, alpha, y);}

} // namespace blas
} // namespace monolish 
