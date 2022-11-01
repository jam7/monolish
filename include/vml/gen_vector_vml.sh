#!/bin/bash
echo "//this code is generated by gen_vector_vml.sh
#pragma once

#include \"../common/monolish_common.hpp\"

namespace monolish {
/**
 * @brief
 * Vector and Matrix element-wise math library
 */
namespace vml {
"

echo "
/**
 * @addtogroup Vector_VML
 * @{
 */
"

## vector-vector arithmetic
detail=(addition subtract multiplication division)
func=(add sub mul div)
for i in ${!detail[@]}; do
echo "
/**
 * \defgroup vml_vec${func[$i]} monolish::vml::${func[$i]}
 * @brief element by element ${detail[$i]} of vector a and vector b.
 * @{
 */
/**
 * @brief element by element ${detail[$i]} of vector a and vector b.
 * @param a monolish vector (size N)
 * @param b monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
*/ "
for prec in double float; do
  for arg1 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
    for arg2 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
      for arg3 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
        echo "void ${func[$i]}(const $arg1 &a, const $arg2 &b, $arg3 &y);"
      done
    done
  done
done
echo "/**@}*/"
done

echo ""

## scalar-vector arithmetic
for i in ${!detail[@]}; do
echo "
/**
 * \defgroup vml_svec${func[$i]} monolish::vml::${func[$i]}
 * @brief element by element ${detail[$i]} of scalar alpha and vector a.
 * @{
 */
/**
 * @brief element by element ${detail[$i]} of scalar alpha and vector a.
 * @param a monolish vector (size N)
 * @param alpha scalar value
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
*/ "
  for prec in double float; do
    for arg1 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
      for arg2 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
        echo "void ${func[$i]}(const $arg1 &a, const $prec alpha, $arg2 &y);"
      done
    done
  done
echo "/**@}*/"
done

echo ""
#############################################

## vector-vector pow
echo "
/**
 * \defgroup vml_vecpow monolish::vml::pow
 * @brief power to vector elements by double precision vector (y[0:N] = pow(a[0:N], b[0]:N]))
 * @{
 */
/**
 * @brief power to vector elements by double precision vector
 *(y[0:N] = pow(a[0:N], b[0]:N]))
* @param a monolish vector (size N)
* @param b monolish vector (size N)
* @param y monolish vector (size N)
* @note
* - # of computation: N
* - Multi-threading: true
* - GPU acceleration: true
*    - # of data transfer: 0
*/ "
for prec in double float; do
  for arg1 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
    for arg2 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
      for arg3 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
        echo "void pow(const $arg1 &a, const $arg2 &b, $arg3 &y);"
      done
    done
  done
done
echo "/**@}*/"

## scalar-vector pow
echo "
/**
 * \defgroup vml_svecpow monolish::vml::pow
 * @brief power to vector elements by double precision scalar value (y[0:N] = pow(a[0:N], alpha))
 * @{
 */
/**
 * @brief power to vector elements by double precision scalar
 *value (y[0:N] = pow(a[0:N], alpha))
 * @param a monolish vector (size N)
 * @param alpha scalar value
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
*/ "
for prec in double float; do
  for arg1 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
    for arg2 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
      echo "void pow(const $arg1 &a, const $prec alpha, $arg2 &y);"
    done
  done
done

echo "/**@}*/"
#############################################


## 2arg math
math=(sin sqrt sinh asin asinh tan tanh atan atanh ceil floor sign exp)
for math in ${math[@]}; do
echo "
/**
 * \defgroup vml_vec$math monolish::vml::$math
 * @brief $math to vector elements (y[0:N] = $math(a[0:N]))
 * @{
 */
/**
 * @brief $math to vector elements (y[0:N] = $math(a[0:N]))
 * @param a monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
*/ "
  for prec in double float; do
    for arg1 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
      for arg2 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
        echo "void $math(const $arg1 &a, $arg2 &y);"
      done
    done
  done
echo "/**@}*/"
done

echo ""
#############################################

## vector-vector max min
detail=(greatest smallest)
func=(max min)
for i in ${!detail[@]}; do
echo "
/**
 * \defgroup vml_vvec${func[$i]} monolish::vml::${func[$i]}
 * @brief Create a new vector with ${detail[$i]} elements of two matrices (y[0:N] = ${func[$i]}(a[0:N], b[0:N]))
 * @{
 */
/**
 * @brief Create a new vector with ${detail[$i]} elements of two matrices (y[0:N] = ${func[$i]}(a[0:N], b[0:N]))
 * @param a monolish vector (size N)
 * @param b monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
*/ "
for prec in double float; do
  for arg1 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
    for arg2 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
      for arg3 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
        echo "void ${func[$i]}(const $arg1 &a, const $arg2 &b, $arg3 &y);"
      done
    done
  done
done
echo "/**@}*/"
done

echo ""

## vector-scalar max min
detail=(greatest smallest)
func=(max min)
for i in ${!detail[@]}; do
echo "
/**
 * \defgroup vml_svec${func[$i]} monolish::vml::${func[$i]}
 * @brief Create a new vector with ${detail[$i]} elements of vector or scalar (y[0:N] = ${func[$i]}(a[0:N], alpha))
 * @{
 */
/**
 * @brief Create a new vector with ${detail[$i]} elements of vector or scalar (y[0:N] = ${func[$i]}(a[0:N], alpha))
 * @param a monolish vector (size N)
 * @param alpha scalar value
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
*/"
for prec in double float; do
  for arg1 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\>; do
    for arg2 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\>; do
      echo "void ${func[$i]}(const $arg1 &a, const $prec alpha, $arg2 &y);"
    done
  done
done
echo "/**@}*/"
done

echo ""

## vector max min
detail=(greatest smallest)
func=(max min)
for i in ${!detail[@]}; do
echo "
/**
 * \defgroup vml_vec${func[$i]} monolish::vml::${func[$i]}
 * @brief Finds the ${detail[$i]} element in vector (${func[$i]}(y[0:N]))
 * @{
 */
/**
 * @brief Finds the ${detail[$i]} element in vector (${func[$i]}(y[0:N]))
 * @param y monolish vector (size N)
 * @return ${detail[$i]} value
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
*/"
for prec in double float; do
  for arg1 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
    echo "[[nodiscard]] $prec ${func[$i]}(const $arg1 &y);"
  done
done
echo "/**@}*/"
done

echo ""
#############################################

## vector alo
echo "
/**
* \defgroup vml_svecalo monolish::vml::alo
 * @brief Asymmetric linear operation to vector elements (y[0:nnz] = alpha max(a[0:nnz], 0) + beta min(a[0:nnz], 0))
 * @{
 */
/**
 * @brief Asymmetric linear operation to vector elements (y[0:nnz] = alpha max(a[0:nnz], 0) + beta min(a[0:nnz], 0))
 * @param a monolish vector (size N)
 * @param alpha linear coefficient in positive range
 * @param beta linear coefficient in negative range
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
*/ "
for prec in double float; do
  for arg1 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\>; do
    for arg2 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\>; do
      echo "void alo(const $arg1 &a, const $prec alpha, const $prec beta, $arg2 &y);"
    done
  done
done
echo "/**@}*/"

echo ""
#############################################

## reciprocal
math=reciprocal
echo "
/**
 * \defgroup vml_vec$math monolish::vml::$math
 * @brief $math to double precision vector elements (y[0:N] = 1 / a[0:N])
 * @{
 */
/**
 * @brief $math to double precision vector elements (y[0:N] = 1 / a[0:N])
 * @param a monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
*/ "
for prec in double float; do
  for arg1 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
    for arg2 in vector\<$prec\> view1D\<vector\<$prec\>,$prec\> view1D\<matrix::Dense\<$prec\>,$prec\>; do
      echo "void $math(const $arg1 &a, $arg2 &y);"
    done
  done
done
echo "/**@}*/"

echo "/**@}*/"
echo "}"
echo "}"
