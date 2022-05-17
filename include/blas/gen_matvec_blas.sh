#!/bin/bash
echo "//this code is generated by gen_matvec_blas.sh
#pragma once
#include \"../common/monolish_common.hpp\"

namespace monolish {
/**
* @brief
* Basic Linear Algebra Subprograms for Dense Matrix, Sparse Matrix, Vector and
* Scalar
*/
namespace blas {
"

echo "
/**
 * @addtogroup BLASLV2
 * @{
 */
"

## matvec Dense
echo "
/**
 * \defgroup matvec_dense monolish::blas::matvec (Dense)
 * @brief Dense matrix and vector multiplication: y = Ax
 * @{
 */
/**
 * @brief Dense matrix and vector multiplication: y = Ax
 * @param A Dense matrix (size M x N)
 * @param x monolish vector (size M)
 * @param y monolish vector (size M)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */ "
for prec in double float; do
  for arg1 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
    for arg2 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
      echo "void matvec(const matrix::Dense<$prec> &A, const $arg1 &x, $arg2 &y);"
    done
  done
done
echo "/**@}*/"

## matvec_* Dense
for trans in N T; do
    echo "
    /**
    * \defgroup matvec_dense_$trans monolish::blas::matvec_$trans (Dense)
    * @brief Dense matrix and vector multiplication: y = A^$trans x
    * @{
    */
    /**
    * @brief Dense matrix and vector multiplication: y = A^$trans x
    * @param A Dense matrix (size M x N)
    * @param x monolish vector (size M)
    * @param y monolish vector (size M)
    * @note
    * - # of computation: MN
    * - Multi-threading: true
    * - GPU acceleration: true
    *    - # of data transfer: 0
    */ "
    for prec in double float; do
        for arg1 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
            for arg2 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
                echo "void matvec_$trans(const matrix::Dense<$prec> &A, const $arg1 &x, $arg2 &y);"
            done
        done
    done
echo "/**@}*/"
done

## matvec CRS
echo "
/**
 * \defgroup matvec_crs monolish::blas::matvec (CRS)
 * @brief CRS format sparse matrix and vector multiplication: y = Ax
 * @{
 */
/**
 * @brief CRS format sparse matrix and vector multiplication: y = Ax
 * @param A CRS matrix (size M x N)
 * @param x monolish vector (size M)
 * @param y monolish vector (size M)
 * @note
 * - # of computation: 2nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */ "
for prec in double float; do
  for arg1 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
    for arg2 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
      echo "void matvec(const matrix::CRS<$prec> &A, const $arg1 &x, $arg2 &y);"
    done
  done
done
echo "/**@}*/"

## matvec_* CRS
for trans in N T; do
    echo "
    /**
    * \defgroup matvec_crs_$trans monolish::blas::matvec_$trans (CRS)
    * @brief CRS format sparse matrix and vector multiplication: y = A^$trans x
    * @{
    */
    /**
    * @brief CRS format sparse matrix and vector multiplication: y = A^$trans x
    * @param A CRS matrix (size M x N)
    * @param x monolish vector (size M)
    * @param y monolish vector (size M)
    * @note
    * - # of computation: 2nnz
    * - Multi-threading: true
    * - GPU acceleration: true
    *    - # of data transfer: 0
    */ "
    for prec in double float; do
        for arg1 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
            for arg2 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
                echo "void matvec_$trans(const matrix::CRS<$prec> &A, const $arg1 &x, $arg2 &y);"
            done
        done
    done
echo "/**@}*/"
done


## matvec LinearOperator
echo "
/**
 * \defgroup matvec_LO monolish::blas::matvec (LinearOperator)
 * @brief LinearOperator matrix and vector multiplication: y = Ax
 * @{
 */
/**
 * @brief matrix (LinearOperator) and vector multiplication: y = Ax
 * @param A LinearOperator (size M x N)
 * @param x monolish vector (size N)
 * @param y monolish vector (size M)
 * @note
 * - # of computation: depends on matvec function
 * - Multi-threading: depends on matvec function
 * - GPU acceleration: depends on matvec function
 */ "
for prec in double float; do
  for arg1 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
    for arg2 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
      echo "void matvec(const matrix::LinearOperator<$prec> &A, const $arg1 &x, $arg2 &y);"
    done
  done
done

echo "/**@}*/"

## rmatvec LinearOperator
echo "
/**
 * \defgroup rmatvec_LO monolish::blas::rmatvec (LinearOperator)
 * @brief Adjoint LinearOperator matrix and vector multiplication: y = A^Hx
 * @{
 */
/**
 * @brief Adjoint LinearOperator matrix and vector multiplication: y = A^Hx
 * @param A LinearOperator (size M x N)
 * @param x monolish vector (size N)
 * @param y monolish vector (size M)
 * @note
 * - # of computation: depends on matvec function
 * - Multi-threading: depends on matvec function
 * - GPU acceleration: depends on matvec function
 */ "
for prec in double float; do
  for arg1 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
    for arg2 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
      echo "void rmatvec(const matrix::LinearOperator<$prec> &A, const $arg1 &x, $arg2 &y);"
    done
  done
done

echo "/**@}*/"
echo "/**@}*/"
echo "}"
echo "}"
