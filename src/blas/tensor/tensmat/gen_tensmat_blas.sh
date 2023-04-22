#!/bin/bash

TRANSPOSE_BOOL(){
    if [ $1 = "N" ]
    then
        echo "false"
    else
        echo "true"
    fi
}

echo "//this code is generated by gen_tensmat_blas.sh
#include \"../../../../include/monolish_blas.hpp\"
#include \"../../../internal/monolish_internal.hpp\"
#include \"tensor_dense-dense_tensmat.hpp\"

namespace monolish::blas {
"

## tensmat tensor_Dense-Dense
for prec in double float; do
    if [ $prec = "double" ]
    then
        echo "void tensmat(const tensor::tensor_Dense<$prec> &A, const matrix::Dense<$prec> &B, tensor::tensor_Dense<$prec> &C){tensor_Dense_Dense_Dtensmat_core(1.0, A, B, 0.0, C, false, false);}"
        echo "void tensmat(const $prec &a, const tensor::tensor_Dense<$prec> &A, const matrix::Dense<$prec> &B, const $prec &b, tensor::tensor_Dense<$prec> &C){tensor_Dense_Dense_Dtensmat_core(a, A, B, b, C, false, false);}"
    else
        echo "void tensmat(const tensor::tensor_Dense<$prec> &A, const matrix::Dense<$prec> &B, tensor::tensor_Dense<$prec> &C){tensor_Dense_Dense_Stensmat_core(1.0, A, B, 0.0, C, false, false);}"
        echo "void tensmat(const $prec &a, const tensor::tensor_Dense<$prec> &A, const matrix::Dense<$prec> &B, const $prec &b, tensor::tensor_Dense<$prec> &C){tensor_Dense_Dense_Stensmat_core(a, A, B, b, C, false, false);}"
    fi
done

echo ""

echo "}"
