C=const

echo " #pragma once
#include \"../common/monolish_common.hpp\"

#if defined USE_MPI
#include <mpi.h>
#endif

namespace monolish {
/**
 * @brief
 * Vector and Matrix element-wise math library
 */
namespace vml {
"

## CRS matrix-matrix arithmetic
detail=(addition subtract multiplication division)
func=(add sub mul div)
for i in ${!detail[@]}; do
echo "
/**
 * @brief element by element ${detail[$i]} CRS matrix A and
 * CRS matrix B.
 * @param A monolish CRS Matrix (size M x N)
 * @param B monolish CRS Matrix (size M x N)
 * @param C monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 * @warning
 * A, B, and C must be same non-zero structure
*/ "
for prec in double float; do
  echo "void ${func[$i]}(const matrix::CRS<$prec> &A, const matrix::CRS<$prec> &B, matrix::CRS<$prec> &C);"
done
done

echo ""
################################################################

## CRS matrix-scalar arithmetic
detail=(addition subtract multiplication division)
func=(add sub mul div)
for i in ${!detail[@]}; do
echo "
/**
 * @brief element by element ${detail[$i]} CRS matrix A and
 * CRS matrix B.
 * @param A monolish CRS Matrix (size M x N)
 * @param alpha scalar value
 * @param C monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 * @warning
 * A, B, and C must be same non-zero structure
*/ "
for prec in double float; do
  echo "void ${func[$i]}(const matrix::CRS<$prec> &A, const $prec alpha, matrix::CRS<$prec> &C);"
done
done

echo ""
#############################################

## matrix-matrix pow
echo "
/**
 *@brief power to CRS matrix elements CRS matrix (C[0:N] = pow(A[0:N], B[0:N]))
 * @param A monolish CRS Matrix (size M x N)
 * @param B monolish CRS Matrix (size M x N)
 * @param C monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B, and C must be same non-zero structure
*/ "
for prec in double float; do
  echo "void pow(const matrix::CRS<$prec> &A, const matrix::CRS<$prec> &B, matrix::CRS<$prec> &C);"
done
 
echo "
/**
 * @brief power to CRS matrix elements by scalar value (C[0:N] = pow(A[0:N], alpha))
 * @param A monolish CRS Matrix (size M x N)
 * @param alpha scalar value
 * @param C monolish CRS Matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B, and C must be same non-zero structure
*/ "
for prec in double float; do
  echo "void pow(const matrix::CRS<$prec> &A, const $prec alpha, matrix::CRS<$prec> &C);"
done

echo ""
#############################################
## 2arg math
math=(sin sqrt sinh asin asinh tan tanh atan atanh ceil floor sign)
for math in ${math[@]}; do
echo "
/**
 * @brief $math to CRS matrix elements (C[0:nnz] = $math(A[0:nnz]))
 * @param A monolish CRS matrix (size M x N)
 * @param C monolish CRS matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B, and C must be same non-zero structure
*/ "
for prec in double float; do
  echo "void $math(const matrix::CRS<$prec> &A, matrix::CRS<$prec> &C);"
done
done

echo ""
#############################################

## matrix-matrix max min
detail=(greatest smallest)
func=(max min)
for i in ${!detail[@]}; do
echo "
/**
 * @brief Create a new CRS matrix with ${detail[$i]} elements of two matrices (C[0:nnz] = ${func[$i]}(A[0:nnz], B[0:nnz]))
 * @param A monolish CRS matrix (size M x N)
 * @param B monolish CRS matrix (size M x N)
 * @param C monolish CRS matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 * @warning
 * A, B, and C must be same non-zero structure
*/ "
for prec in double float; do
  echo "void ${func[$i]}(const matrix::CRS<$prec> &A, const matrix::CRS<$prec> &B, matrix::CRS<$prec> &C);"
done
done

echo ""

## CRS matrix max min
detail=(greatest smallest)
func=(max min)
for i in ${!detail[@]}; do
echo "
/**
 * @brief Finds the ${detail[$i]} element in CRS matrix (${func[$i]}(C[0:nnz]))
 * @param C monolish CRS matrix (size M x N)
 * @return ${detail[$i]} value
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B, and C must be same non-zero structure
*/ "
for prec in double float; do
    echo "$prec ${func[$i]}(matrix::CRS<$prec> &C);"
done
done

echo ""
#############################################

## reciprocal
echo "
/**
 * @brief reciprocal to CRS matrix elements (C[0:nnz] = 1 / A[0:nnz])
 * @param A monolish CRS matrix (size M x N)
 * @param C monolish CRS matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B, and C must be same non-zero structure
*/ "
for prec in double float; do
  echo "void reciprocal(const matrix::CRS<$prec> &a, matrix::CRS<$prec> &y);"
done

echo "
} // namespace blas
} // namespace monolish "
