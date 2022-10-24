#!/bin/bash
echo "//this code is generated by gen_matrix_vml.sh
#include \"../../../include/monolish_vml.hpp\"
#include \"../../internal/monolish_internal.hpp\"
#include \"./arithmetic/matadd.hpp\"
#include \"./arithmetic/matsub.hpp\"
#include \"./arithmetic/matmul.hpp\"
#include \"./arithmetic/matdiv.hpp\"
#include \"./math_2op/matasin.hpp\"
#include \"./math_2op/matasinh.hpp\"
#include \"./math_2op/matatan.hpp\"
#include \"./math_2op/matatanh.hpp\"
#include \"./math_2op/matfloor.hpp\"
#include \"./math_2op/matreciprocal.hpp\"
#include \"./math_2op/matsign.hpp\"
#include \"./math_2op/matsin.hpp\"
#include \"./math_2op/matsinh.hpp\"
#include \"./math_2op/matsqrt.hpp\"
#include \"./math_2op/matceil.hpp\"
#include \"./math_2op/mattan.hpp\"
#include \"./math_2op/mattanh.hpp\"
#include \"./math_1_3op/matmax.hpp\"
#include \"./math_1_3op/matmin.hpp\"
#include \"./math_1_3op/matpow.hpp\"

namespace monolish {
namespace vml {
"

for MAT in Dense CRS
do

## $MAT matrix-matrix arithmetic
funcs=(add sub mul div)
for func in ${funcs[@]}; do
  for prec in double float; do
    echo "void ${func}(const matrix::$MAT<$prec> &A, const matrix::$MAT<$prec> &B, matrix::$MAT<$prec> &C){mm${func}_core(A, B, C);}"
  done
done

echo ""
################################################################

## $MAT matrix-scalar arithmetic
funcs=(add sub mul div)
for func in ${funcs[@]}; do
  for prec in double float; do
    echo "void ${func}(const matrix::$MAT<$prec> &A, const $prec alpha, matrix::$MAT<$prec> &C){sm${func}_core(A, alpha, C);}"
  done
done

echo ""
#############################################

## matrix-matrix pow
for prec in double float; do
  echo "void pow(const matrix::$MAT<$prec> &A, const matrix::$MAT<$prec> &B, matrix::$MAT<$prec> &C){mmpow_core(A, B, C);}"
done

## matrix-scalar pow
for prec in double float; do
  echo "void pow(const matrix::$MAT<$prec> &A, const $prec alpha, matrix::$MAT<$prec> &C){smpow_core(A, alpha, C);}"
done

echo ""
#############################################
## 2arg math
math=(sin sqrt sinh asin asinh tan tanh atan atanh ceil floor sign reciprocal)
for math in ${math[@]}; do
  for prec in double float; do
    echo "void $math(const matrix::$MAT<$prec> &A, matrix::$MAT<$prec> &C){m${math}_core(A, C);}"
  done
done

echo ""
#############################################

## matrix-matrix max min
detail=(greatest smallest)
funcs=(max min)
for func in ${funcs[@]}; do
  for prec in double float; do
    echo "void ${func}(const matrix::$MAT<$prec> &A, const matrix::$MAT<$prec> &B, matrix::$MAT<$prec> &C){mm${func}_core(A, B, C);}"
  done
done

echo ""

## matrix-scalar max min
detail=(greatest smallest)
funcs=(max min)
for func in ${funcs[@]}; do
  for prec in double float; do
    echo "void ${func}(const matrix::$MAT<$prec> &A, const $prec alpha, matrix::$MAT<$prec> &C){sm${func}_core(A, alpha, C);}"
  done
done

echo ""

## $MAT matrix max min
detail=(greatest smallest)
funcs=(max min)
for func in ${funcs[@]}; do
  for prec in double float; do
    echo "$prec ${func}(const matrix::$MAT<$prec> &C){return m${func}_core<matrix::$MAT<$prec>,$prec>(C);}"
  done
done

echo ""
#############################################

done # $MAT, CRS

echo "
} // namespace blas
} // namespace monolish "
