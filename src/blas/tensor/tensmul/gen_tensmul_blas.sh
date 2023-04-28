#!/bin/bash

TRANSPOSE_BOOL(){
    if [ $1 = "N" ]
    then
        echo "false"
    else
        echo "true"
    fi
}

echo "//this code is generated by gen_tensmul_blas.sh
#include \"../../../../include/monolish_blas.hpp\"
#include \"../../../internal/monolish_internal.hpp\"
#include \"tensor_dense-tensor_dense_tensmul.hpp\"

namespace monolish::blas {
"

## tensmul tensor_Dense-tensor_Dense
for prec in double float; do
    if [ $prec = "double" ]
    then
        echo "void tensmul(const tensor::tensor_Dense<$prec> &A, const tensor::tensor_Dense<$prec> &B, tensor::tensor_Dense<$prec> &C){tensor_Dense_tensor_Dense_Dtensmul_core(1.0, A, B, 0.0, C, false, false);}"
        echo "void tensmul(const $prec &a, const tensor::tensor_Dense<$prec> &A, const tensor::tensor_Dense<$prec> &B, const $prec &b, tensor::tensor_Dense<$prec> &C){tensor_Dense_tensor_Dense_Dtensmul_core(a, A, B, b, C, false, false);}"
    else
        echo "void tensmul(const tensor::tensor_Dense<$prec> &A, const tensor::tensor_Dense<$prec> &B, tensor::tensor_Dense<$prec> &C){tensor_Dense_tensor_Dense_Stensmul_core(1.0, A, B, 0.0, C, false, false);}"
        echo "void tensmul(const $prec &a, const tensor::tensor_Dense<$prec> &A, const tensor::tensor_Dense<$prec> &B, const $prec &b, tensor::tensor_Dense<$prec> &C){tensor_Dense_tensor_Dense_Stensmul_core(a, A, B, b, C, false, false);}"
    fi
done

echo ""

echo "}"
