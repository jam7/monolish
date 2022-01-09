//this code is generated by gen_vector_blas.sh
#pragma once
#include "../common/monolish_common.hpp"

/**
* @brief
* Basic Linear Algebra Subprograms for Dense Matrix, Sparse Matrix, Vector and
* Scalar
*/
namespace monolish::blas {


/**
 * @addtogroup BLASLV1 
 * @{
 */


/**
 * \defgroup vecadd monolish::blas::vecadd
 * @brief element by element addition of vector a and vector b.
 * @{
 */
/**
 * @brief element by element addition of vector a and vector b.
 * @param a monolish vector (size N)
 * @param b monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */ 
void vecadd(const vector<double> &a, const vector<double> &b, vector<double> &y);
void vecadd(const vector<double> &a, const vector<double> &b, view1D<vector<double>,double> &y);
void vecadd(const vector<double> &a, const vector<double> &b, view1D<matrix::Dense<double>,double> &y);
void vecadd(const vector<double> &a, const view1D<vector<double>,double> &b, vector<double> &y);
void vecadd(const vector<double> &a, const view1D<vector<double>,double> &b, view1D<vector<double>,double> &y);
void vecadd(const vector<double> &a, const view1D<vector<double>,double> &b, view1D<matrix::Dense<double>,double> &y);
void vecadd(const vector<double> &a, const view1D<matrix::Dense<double>,double> &b, vector<double> &y);
void vecadd(const vector<double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<vector<double>,double> &y);
void vecadd(const vector<double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<matrix::Dense<double>,double> &y);
void vecadd(const view1D<vector<double>,double> &a, const vector<double> &b, vector<double> &y);
void vecadd(const view1D<vector<double>,double> &a, const vector<double> &b, view1D<vector<double>,double> &y);
void vecadd(const view1D<vector<double>,double> &a, const vector<double> &b, view1D<matrix::Dense<double>,double> &y);
void vecadd(const view1D<vector<double>,double> &a, const view1D<vector<double>,double> &b, vector<double> &y);
void vecadd(const view1D<vector<double>,double> &a, const view1D<vector<double>,double> &b, view1D<vector<double>,double> &y);
void vecadd(const view1D<vector<double>,double> &a, const view1D<vector<double>,double> &b, view1D<matrix::Dense<double>,double> &y);
void vecadd(const view1D<vector<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, vector<double> &y);
void vecadd(const view1D<vector<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<vector<double>,double> &y);
void vecadd(const view1D<vector<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<matrix::Dense<double>,double> &y);
void vecadd(const view1D<matrix::Dense<double>,double> &a, const vector<double> &b, vector<double> &y);
void vecadd(const view1D<matrix::Dense<double>,double> &a, const vector<double> &b, view1D<vector<double>,double> &y);
void vecadd(const view1D<matrix::Dense<double>,double> &a, const vector<double> &b, view1D<matrix::Dense<double>,double> &y);
void vecadd(const view1D<matrix::Dense<double>,double> &a, const view1D<vector<double>,double> &b, vector<double> &y);
void vecadd(const view1D<matrix::Dense<double>,double> &a, const view1D<vector<double>,double> &b, view1D<vector<double>,double> &y);
void vecadd(const view1D<matrix::Dense<double>,double> &a, const view1D<vector<double>,double> &b, view1D<matrix::Dense<double>,double> &y);
void vecadd(const view1D<matrix::Dense<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, vector<double> &y);
void vecadd(const view1D<matrix::Dense<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<vector<double>,double> &y);
void vecadd(const view1D<matrix::Dense<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<matrix::Dense<double>,double> &y);
void vecadd(const vector<float> &a, const vector<float> &b, vector<float> &y);
void vecadd(const vector<float> &a, const vector<float> &b, view1D<vector<float>,float> &y);
void vecadd(const vector<float> &a, const vector<float> &b, view1D<matrix::Dense<float>,float> &y);
void vecadd(const vector<float> &a, const view1D<vector<float>,float> &b, vector<float> &y);
void vecadd(const vector<float> &a, const view1D<vector<float>,float> &b, view1D<vector<float>,float> &y);
void vecadd(const vector<float> &a, const view1D<vector<float>,float> &b, view1D<matrix::Dense<float>,float> &y);
void vecadd(const vector<float> &a, const view1D<matrix::Dense<float>,float> &b, vector<float> &y);
void vecadd(const vector<float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<vector<float>,float> &y);
void vecadd(const vector<float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<matrix::Dense<float>,float> &y);
void vecadd(const view1D<vector<float>,float> &a, const vector<float> &b, vector<float> &y);
void vecadd(const view1D<vector<float>,float> &a, const vector<float> &b, view1D<vector<float>,float> &y);
void vecadd(const view1D<vector<float>,float> &a, const vector<float> &b, view1D<matrix::Dense<float>,float> &y);
void vecadd(const view1D<vector<float>,float> &a, const view1D<vector<float>,float> &b, vector<float> &y);
void vecadd(const view1D<vector<float>,float> &a, const view1D<vector<float>,float> &b, view1D<vector<float>,float> &y);
void vecadd(const view1D<vector<float>,float> &a, const view1D<vector<float>,float> &b, view1D<matrix::Dense<float>,float> &y);
void vecadd(const view1D<vector<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, vector<float> &y);
void vecadd(const view1D<vector<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<vector<float>,float> &y);
void vecadd(const view1D<vector<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<matrix::Dense<float>,float> &y);
void vecadd(const view1D<matrix::Dense<float>,float> &a, const vector<float> &b, vector<float> &y);
void vecadd(const view1D<matrix::Dense<float>,float> &a, const vector<float> &b, view1D<vector<float>,float> &y);
void vecadd(const view1D<matrix::Dense<float>,float> &a, const vector<float> &b, view1D<matrix::Dense<float>,float> &y);
void vecadd(const view1D<matrix::Dense<float>,float> &a, const view1D<vector<float>,float> &b, vector<float> &y);
void vecadd(const view1D<matrix::Dense<float>,float> &a, const view1D<vector<float>,float> &b, view1D<vector<float>,float> &y);
void vecadd(const view1D<matrix::Dense<float>,float> &a, const view1D<vector<float>,float> &b, view1D<matrix::Dense<float>,float> &y);
void vecadd(const view1D<matrix::Dense<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, vector<float> &y);
void vecadd(const view1D<matrix::Dense<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<vector<float>,float> &y);
void vecadd(const view1D<matrix::Dense<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<matrix::Dense<float>,float> &y);
/**@}*/

/**
 * \defgroup vecsub monolish::blas::vecsub
 * @brief element by element subtract of vector a and vector b.
 * @{
 */
/**
 * @brief element by element subtract of vector a and vector b.
 * @param a monolish vector (size N)
 * @param b monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */ 
void vecsub(const vector<double> &a, const vector<double> &b, vector<double> &y);
void vecsub(const vector<double> &a, const vector<double> &b, view1D<vector<double>,double> &y);
void vecsub(const vector<double> &a, const vector<double> &b, view1D<matrix::Dense<double>,double> &y);
void vecsub(const vector<double> &a, const view1D<vector<double>,double> &b, vector<double> &y);
void vecsub(const vector<double> &a, const view1D<vector<double>,double> &b, view1D<vector<double>,double> &y);
void vecsub(const vector<double> &a, const view1D<vector<double>,double> &b, view1D<matrix::Dense<double>,double> &y);
void vecsub(const vector<double> &a, const view1D<matrix::Dense<double>,double> &b, vector<double> &y);
void vecsub(const vector<double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<vector<double>,double> &y);
void vecsub(const vector<double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<matrix::Dense<double>,double> &y);
void vecsub(const view1D<vector<double>,double> &a, const vector<double> &b, vector<double> &y);
void vecsub(const view1D<vector<double>,double> &a, const vector<double> &b, view1D<vector<double>,double> &y);
void vecsub(const view1D<vector<double>,double> &a, const vector<double> &b, view1D<matrix::Dense<double>,double> &y);
void vecsub(const view1D<vector<double>,double> &a, const view1D<vector<double>,double> &b, vector<double> &y);
void vecsub(const view1D<vector<double>,double> &a, const view1D<vector<double>,double> &b, view1D<vector<double>,double> &y);
void vecsub(const view1D<vector<double>,double> &a, const view1D<vector<double>,double> &b, view1D<matrix::Dense<double>,double> &y);
void vecsub(const view1D<vector<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, vector<double> &y);
void vecsub(const view1D<vector<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<vector<double>,double> &y);
void vecsub(const view1D<vector<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<matrix::Dense<double>,double> &y);
void vecsub(const view1D<matrix::Dense<double>,double> &a, const vector<double> &b, vector<double> &y);
void vecsub(const view1D<matrix::Dense<double>,double> &a, const vector<double> &b, view1D<vector<double>,double> &y);
void vecsub(const view1D<matrix::Dense<double>,double> &a, const vector<double> &b, view1D<matrix::Dense<double>,double> &y);
void vecsub(const view1D<matrix::Dense<double>,double> &a, const view1D<vector<double>,double> &b, vector<double> &y);
void vecsub(const view1D<matrix::Dense<double>,double> &a, const view1D<vector<double>,double> &b, view1D<vector<double>,double> &y);
void vecsub(const view1D<matrix::Dense<double>,double> &a, const view1D<vector<double>,double> &b, view1D<matrix::Dense<double>,double> &y);
void vecsub(const view1D<matrix::Dense<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, vector<double> &y);
void vecsub(const view1D<matrix::Dense<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<vector<double>,double> &y);
void vecsub(const view1D<matrix::Dense<double>,double> &a, const view1D<matrix::Dense<double>,double> &b, view1D<matrix::Dense<double>,double> &y);
void vecsub(const vector<float> &a, const vector<float> &b, vector<float> &y);
void vecsub(const vector<float> &a, const vector<float> &b, view1D<vector<float>,float> &y);
void vecsub(const vector<float> &a, const vector<float> &b, view1D<matrix::Dense<float>,float> &y);
void vecsub(const vector<float> &a, const view1D<vector<float>,float> &b, vector<float> &y);
void vecsub(const vector<float> &a, const view1D<vector<float>,float> &b, view1D<vector<float>,float> &y);
void vecsub(const vector<float> &a, const view1D<vector<float>,float> &b, view1D<matrix::Dense<float>,float> &y);
void vecsub(const vector<float> &a, const view1D<matrix::Dense<float>,float> &b, vector<float> &y);
void vecsub(const vector<float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<vector<float>,float> &y);
void vecsub(const vector<float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<matrix::Dense<float>,float> &y);
void vecsub(const view1D<vector<float>,float> &a, const vector<float> &b, vector<float> &y);
void vecsub(const view1D<vector<float>,float> &a, const vector<float> &b, view1D<vector<float>,float> &y);
void vecsub(const view1D<vector<float>,float> &a, const vector<float> &b, view1D<matrix::Dense<float>,float> &y);
void vecsub(const view1D<vector<float>,float> &a, const view1D<vector<float>,float> &b, vector<float> &y);
void vecsub(const view1D<vector<float>,float> &a, const view1D<vector<float>,float> &b, view1D<vector<float>,float> &y);
void vecsub(const view1D<vector<float>,float> &a, const view1D<vector<float>,float> &b, view1D<matrix::Dense<float>,float> &y);
void vecsub(const view1D<vector<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, vector<float> &y);
void vecsub(const view1D<vector<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<vector<float>,float> &y);
void vecsub(const view1D<vector<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<matrix::Dense<float>,float> &y);
void vecsub(const view1D<matrix::Dense<float>,float> &a, const vector<float> &b, vector<float> &y);
void vecsub(const view1D<matrix::Dense<float>,float> &a, const vector<float> &b, view1D<vector<float>,float> &y);
void vecsub(const view1D<matrix::Dense<float>,float> &a, const vector<float> &b, view1D<matrix::Dense<float>,float> &y);
void vecsub(const view1D<matrix::Dense<float>,float> &a, const view1D<vector<float>,float> &b, vector<float> &y);
void vecsub(const view1D<matrix::Dense<float>,float> &a, const view1D<vector<float>,float> &b, view1D<vector<float>,float> &y);
void vecsub(const view1D<matrix::Dense<float>,float> &a, const view1D<vector<float>,float> &b, view1D<matrix::Dense<float>,float> &y);
void vecsub(const view1D<matrix::Dense<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, vector<float> &y);
void vecsub(const view1D<matrix::Dense<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<vector<float>,float> &y);
void vecsub(const view1D<matrix::Dense<float>,float> &a, const view1D<matrix::Dense<float>,float> &b, view1D<matrix::Dense<float>,float> &y);
/**@}*/

/**
 * \defgroup copy monolish::blas::copy
 * @brief vector copy (y=x)
 * @{
 */
/**
 * @brief vector copy (y=x)
 * @param x monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */ 
void copy(const vector<double> &x, vector<double> &y);
void copy(const vector<double> &x, view1D<vector<double>,double> &y);
void copy(const vector<double> &x, view1D<matrix::Dense<double>,double> &y);
void copy(const view1D<vector<double>,double> &x, vector<double> &y);
void copy(const view1D<vector<double>,double> &x, view1D<vector<double>,double> &y);
void copy(const view1D<vector<double>,double> &x, view1D<matrix::Dense<double>,double> &y);
void copy(const view1D<matrix::Dense<double>,double> &x, vector<double> &y);
void copy(const view1D<matrix::Dense<double>,double> &x, view1D<vector<double>,double> &y);
void copy(const view1D<matrix::Dense<double>,double> &x, view1D<matrix::Dense<double>,double> &y);
void copy(const vector<float> &x, vector<float> &y);
void copy(const vector<float> &x, view1D<vector<float>,float> &y);
void copy(const vector<float> &x, view1D<matrix::Dense<float>,float> &y);
void copy(const view1D<vector<float>,float> &x, vector<float> &y);
void copy(const view1D<vector<float>,float> &x, view1D<vector<float>,float> &y);
void copy(const view1D<vector<float>,float> &x, view1D<matrix::Dense<float>,float> &y);
void copy(const view1D<matrix::Dense<float>,float> &x, vector<float> &y);
void copy(const view1D<matrix::Dense<float>,float> &x, view1D<vector<float>,float> &y);
void copy(const view1D<matrix::Dense<float>,float> &x, view1D<matrix::Dense<float>,float> &y);
/**@}*/

/**
 * \defgroup asum monolish::blas::asum
 * @brief vector absolute sum
 * @{
 */
/**
 * @brief vector absolute sum
 * @param x monolish vector (size N)
 * @param ans The result of the asum
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */ 
void asum(const vector<double> &x, double &ans);
void asum(const view1D<vector<double>,double> &x, double &ans);
void asum(const view1D<matrix::Dense<double>,double> &x, double &ans);
void asum(const vector<float> &x, float &ans);
void asum(const view1D<vector<float>,float> &x, float &ans);
void asum(const view1D<matrix::Dense<float>,float> &x, float &ans);

/**
 * @brief vector absolute sum
 * @param x monolish vector (size N)
 * @return The result of the asum
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */ 
[[nodiscard]] double asum(const vector<double> &x);
[[nodiscard]] double asum(const view1D<vector<double>,double> &x);
[[nodiscard]] double asum(const view1D<matrix::Dense<double>,double> &x);
[[nodiscard]] float asum(const vector<float> &x);
[[nodiscard]] float asum(const view1D<vector<float>,float> &x);
[[nodiscard]] float asum(const view1D<matrix::Dense<float>,float> &x);
/**@}*/

/**
 * \defgroup sum monolish::blas::sum
 * @brief vector sum
 * @{
 */
/**
 * @brief vector sum
 * @param x monolish vector (size N)
 * @param ans The result of the sum
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */ 
void sum(const vector<double> &x, double &ans);
void sum(const view1D<vector<double>,double> &x, double &ans);
void sum(const view1D<matrix::Dense<double>,double> &x, double &ans);
void sum(const vector<float> &x, float &ans);
void sum(const view1D<vector<float>,float> &x, float &ans);
void sum(const view1D<matrix::Dense<float>,float> &x, float &ans);

/**
 * @brief vector\<float\> sum
 * @param x monolish vector\<float\> (size N)
 * @return The result of the sum
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */ 
[[nodiscard]] double sum(const vector<double> &x);
[[nodiscard]] double sum(const view1D<vector<double>,double> &x);
[[nodiscard]] double sum(const view1D<matrix::Dense<double>,double> &x);
[[nodiscard]] float sum(const vector<float> &x);
[[nodiscard]] float sum(const view1D<vector<float>,float> &x);
[[nodiscard]] float sum(const view1D<matrix::Dense<float>,float> &x);
/**@}*/

/**
 * \defgroup axpy monolish::blas::axpy
 * @brief axpy: y = ax + y
 * @{
 */
/**
 * @brief axpy: y = ax + y
 * @param alpha scalar value
 * @param x monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: 2N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */ 
void axpy(const double alpha, const vector<double> &x, vector<double> &y);
void axpy(const double alpha, const vector<double> &x, view1D<vector<double>,double> &y);
void axpy(const double alpha, const vector<double> &x, view1D<matrix::Dense<double>,double> &y);
void axpy(const double alpha, const view1D<vector<double>,double> &x, vector<double> &y);
void axpy(const double alpha, const view1D<vector<double>,double> &x, view1D<vector<double>,double> &y);
void axpy(const double alpha, const view1D<vector<double>,double> &x, view1D<matrix::Dense<double>,double> &y);
void axpy(const double alpha, const view1D<matrix::Dense<double>,double> &x, vector<double> &y);
void axpy(const double alpha, const view1D<matrix::Dense<double>,double> &x, view1D<vector<double>,double> &y);
void axpy(const double alpha, const view1D<matrix::Dense<double>,double> &x, view1D<matrix::Dense<double>,double> &y);
void axpy(const float alpha, const vector<float> &x, vector<float> &y);
void axpy(const float alpha, const vector<float> &x, view1D<vector<float>,float> &y);
void axpy(const float alpha, const vector<float> &x, view1D<matrix::Dense<float>,float> &y);
void axpy(const float alpha, const view1D<vector<float>,float> &x, vector<float> &y);
void axpy(const float alpha, const view1D<vector<float>,float> &x, view1D<vector<float>,float> &y);
void axpy(const float alpha, const view1D<vector<float>,float> &x, view1D<matrix::Dense<float>,float> &y);
void axpy(const float alpha, const view1D<matrix::Dense<float>,float> &x, vector<float> &y);
void axpy(const float alpha, const view1D<matrix::Dense<float>,float> &x, view1D<vector<float>,float> &y);
void axpy(const float alpha, const view1D<matrix::Dense<float>,float> &x, view1D<matrix::Dense<float>,float> &y);
/**@}*/


/**
 * \defgroup axpyz monolish::blas::axpyz
 * @brief axpy: z = ax + y
 * @{
 */
/**
 * @brief axpyz: z = ax + y
 * @param alpha scalar value
 * @param x monolish vector (size N)
 * @param y monolish vector (size N)
 * @param z monolish vector (size N)
 * @note
 * - # of computation: 2N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */ 
void axpyz(const double alpha, const vector<double> &x, const vector<double> &y, vector<double> &z);
void axpyz(const double alpha, const vector<double> &x, const vector<double> &y, view1D<vector<double>,double> &z);
void axpyz(const double alpha, const vector<double> &x, const vector<double> &y, view1D<matrix::Dense<double>,double> &z);
void axpyz(const double alpha, const vector<double> &x, const view1D<vector<double>,double> &y, vector<double> &z);
void axpyz(const double alpha, const vector<double> &x, const view1D<vector<double>,double> &y, view1D<vector<double>,double> &z);
void axpyz(const double alpha, const vector<double> &x, const view1D<vector<double>,double> &y, view1D<matrix::Dense<double>,double> &z);
void axpyz(const double alpha, const vector<double> &x, const view1D<matrix::Dense<double>,double> &y, vector<double> &z);
void axpyz(const double alpha, const vector<double> &x, const view1D<matrix::Dense<double>,double> &y, view1D<vector<double>,double> &z);
void axpyz(const double alpha, const vector<double> &x, const view1D<matrix::Dense<double>,double> &y, view1D<matrix::Dense<double>,double> &z);
void axpyz(const double alpha, const view1D<vector<double>,double> &x, const vector<double> &y, vector<double> &z);
void axpyz(const double alpha, const view1D<vector<double>,double> &x, const vector<double> &y, view1D<vector<double>,double> &z);
void axpyz(const double alpha, const view1D<vector<double>,double> &x, const vector<double> &y, view1D<matrix::Dense<double>,double> &z);
void axpyz(const double alpha, const view1D<vector<double>,double> &x, const view1D<vector<double>,double> &y, vector<double> &z);
void axpyz(const double alpha, const view1D<vector<double>,double> &x, const view1D<vector<double>,double> &y, view1D<vector<double>,double> &z);
void axpyz(const double alpha, const view1D<vector<double>,double> &x, const view1D<vector<double>,double> &y, view1D<matrix::Dense<double>,double> &z);
void axpyz(const double alpha, const view1D<vector<double>,double> &x, const view1D<matrix::Dense<double>,double> &y, vector<double> &z);
void axpyz(const double alpha, const view1D<vector<double>,double> &x, const view1D<matrix::Dense<double>,double> &y, view1D<vector<double>,double> &z);
void axpyz(const double alpha, const view1D<vector<double>,double> &x, const view1D<matrix::Dense<double>,double> &y, view1D<matrix::Dense<double>,double> &z);
void axpyz(const double alpha, const view1D<matrix::Dense<double>,double> &x, const vector<double> &y, vector<double> &z);
void axpyz(const double alpha, const view1D<matrix::Dense<double>,double> &x, const vector<double> &y, view1D<vector<double>,double> &z);
void axpyz(const double alpha, const view1D<matrix::Dense<double>,double> &x, const vector<double> &y, view1D<matrix::Dense<double>,double> &z);
void axpyz(const double alpha, const view1D<matrix::Dense<double>,double> &x, const view1D<vector<double>,double> &y, vector<double> &z);
void axpyz(const double alpha, const view1D<matrix::Dense<double>,double> &x, const view1D<vector<double>,double> &y, view1D<vector<double>,double> &z);
void axpyz(const double alpha, const view1D<matrix::Dense<double>,double> &x, const view1D<vector<double>,double> &y, view1D<matrix::Dense<double>,double> &z);
void axpyz(const double alpha, const view1D<matrix::Dense<double>,double> &x, const view1D<matrix::Dense<double>,double> &y, vector<double> &z);
void axpyz(const double alpha, const view1D<matrix::Dense<double>,double> &x, const view1D<matrix::Dense<double>,double> &y, view1D<vector<double>,double> &z);
void axpyz(const double alpha, const view1D<matrix::Dense<double>,double> &x, const view1D<matrix::Dense<double>,double> &y, view1D<matrix::Dense<double>,double> &z);
void axpyz(const float alpha, const vector<float> &x, const vector<float> &y, vector<float> &z);
void axpyz(const float alpha, const vector<float> &x, const vector<float> &y, view1D<vector<float>,float> &z);
void axpyz(const float alpha, const vector<float> &x, const vector<float> &y, view1D<matrix::Dense<float>,float> &z);
void axpyz(const float alpha, const vector<float> &x, const view1D<vector<float>,float> &y, vector<float> &z);
void axpyz(const float alpha, const vector<float> &x, const view1D<vector<float>,float> &y, view1D<vector<float>,float> &z);
void axpyz(const float alpha, const vector<float> &x, const view1D<vector<float>,float> &y, view1D<matrix::Dense<float>,float> &z);
void axpyz(const float alpha, const vector<float> &x, const view1D<matrix::Dense<float>,float> &y, vector<float> &z);
void axpyz(const float alpha, const vector<float> &x, const view1D<matrix::Dense<float>,float> &y, view1D<vector<float>,float> &z);
void axpyz(const float alpha, const vector<float> &x, const view1D<matrix::Dense<float>,float> &y, view1D<matrix::Dense<float>,float> &z);
void axpyz(const float alpha, const view1D<vector<float>,float> &x, const vector<float> &y, vector<float> &z);
void axpyz(const float alpha, const view1D<vector<float>,float> &x, const vector<float> &y, view1D<vector<float>,float> &z);
void axpyz(const float alpha, const view1D<vector<float>,float> &x, const vector<float> &y, view1D<matrix::Dense<float>,float> &z);
void axpyz(const float alpha, const view1D<vector<float>,float> &x, const view1D<vector<float>,float> &y, vector<float> &z);
void axpyz(const float alpha, const view1D<vector<float>,float> &x, const view1D<vector<float>,float> &y, view1D<vector<float>,float> &z);
void axpyz(const float alpha, const view1D<vector<float>,float> &x, const view1D<vector<float>,float> &y, view1D<matrix::Dense<float>,float> &z);
void axpyz(const float alpha, const view1D<vector<float>,float> &x, const view1D<matrix::Dense<float>,float> &y, vector<float> &z);
void axpyz(const float alpha, const view1D<vector<float>,float> &x, const view1D<matrix::Dense<float>,float> &y, view1D<vector<float>,float> &z);
void axpyz(const float alpha, const view1D<vector<float>,float> &x, const view1D<matrix::Dense<float>,float> &y, view1D<matrix::Dense<float>,float> &z);
void axpyz(const float alpha, const view1D<matrix::Dense<float>,float> &x, const vector<float> &y, vector<float> &z);
void axpyz(const float alpha, const view1D<matrix::Dense<float>,float> &x, const vector<float> &y, view1D<vector<float>,float> &z);
void axpyz(const float alpha, const view1D<matrix::Dense<float>,float> &x, const vector<float> &y, view1D<matrix::Dense<float>,float> &z);
void axpyz(const float alpha, const view1D<matrix::Dense<float>,float> &x, const view1D<vector<float>,float> &y, vector<float> &z);
void axpyz(const float alpha, const view1D<matrix::Dense<float>,float> &x, const view1D<vector<float>,float> &y, view1D<vector<float>,float> &z);
void axpyz(const float alpha, const view1D<matrix::Dense<float>,float> &x, const view1D<vector<float>,float> &y, view1D<matrix::Dense<float>,float> &z);
void axpyz(const float alpha, const view1D<matrix::Dense<float>,float> &x, const view1D<matrix::Dense<float>,float> &y, vector<float> &z);
void axpyz(const float alpha, const view1D<matrix::Dense<float>,float> &x, const view1D<matrix::Dense<float>,float> &y, view1D<vector<float>,float> &z);
void axpyz(const float alpha, const view1D<matrix::Dense<float>,float> &x, const view1D<matrix::Dense<float>,float> &y, view1D<matrix::Dense<float>,float> &z);
/**@}*/


/**
 * \defgroup dot monolish::blas::dot
 * @brief inner product (dot)
 * @{
 */
/**
 * @brief inner product (dot)
 * @param x monolish vector (size N)
 * @param y monolish vector (size N)
 * @param ans The result of the inner product product of x and y
 * @note
 * - # of computation: 2N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */ 
void dot(const vector<double> &x, const vector<double> &y, double &ans);
void dot(const vector<double> &x, const view1D<vector<double>,double> &y, double &ans);
void dot(const vector<double> &x, const view1D<matrix::Dense<double>,double> &y, double &ans);
void dot(const view1D<vector<double>,double> &x, const vector<double> &y, double &ans);
void dot(const view1D<vector<double>,double> &x, const view1D<vector<double>,double> &y, double &ans);
void dot(const view1D<vector<double>,double> &x, const view1D<matrix::Dense<double>,double> &y, double &ans);
void dot(const view1D<matrix::Dense<double>,double> &x, const vector<double> &y, double &ans);
void dot(const view1D<matrix::Dense<double>,double> &x, const view1D<vector<double>,double> &y, double &ans);
void dot(const view1D<matrix::Dense<double>,double> &x, const view1D<matrix::Dense<double>,double> &y, double &ans);
void dot(const vector<float> &x, const vector<float> &y, float &ans);
void dot(const vector<float> &x, const view1D<vector<float>,float> &y, float &ans);
void dot(const vector<float> &x, const view1D<matrix::Dense<float>,float> &y, float &ans);
void dot(const view1D<vector<float>,float> &x, const vector<float> &y, float &ans);
void dot(const view1D<vector<float>,float> &x, const view1D<vector<float>,float> &y, float &ans);
void dot(const view1D<vector<float>,float> &x, const view1D<matrix::Dense<float>,float> &y, float &ans);
void dot(const view1D<matrix::Dense<float>,float> &x, const vector<float> &y, float &ans);
void dot(const view1D<matrix::Dense<float>,float> &x, const view1D<vector<float>,float> &y, float &ans);
void dot(const view1D<matrix::Dense<float>,float> &x, const view1D<matrix::Dense<float>,float> &y, float &ans);


/**
 * @brief inner product (dot)
 * @param x monolish vector (size N)
 * @param y monolish vector (size N)
 * @return The result of the inner product product of x and y
 * @note
 * - # of computation: 2N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */ 
[[nodiscard]] double dot(const vector<double> &x, const vector<double> &y);
[[nodiscard]] double dot(const vector<double> &x, const view1D<vector<double>,double> &y);
[[nodiscard]] double dot(const vector<double> &x, const view1D<matrix::Dense<double>,double> &y);
[[nodiscard]] double dot(const view1D<vector<double>,double> &x, const vector<double> &y);
[[nodiscard]] double dot(const view1D<vector<double>,double> &x, const view1D<vector<double>,double> &y);
[[nodiscard]] double dot(const view1D<vector<double>,double> &x, const view1D<matrix::Dense<double>,double> &y);
[[nodiscard]] double dot(const view1D<matrix::Dense<double>,double> &x, const vector<double> &y);
[[nodiscard]] double dot(const view1D<matrix::Dense<double>,double> &x, const view1D<vector<double>,double> &y);
[[nodiscard]] double dot(const view1D<matrix::Dense<double>,double> &x, const view1D<matrix::Dense<double>,double> &y);
[[nodiscard]] float dot(const vector<float> &x, const vector<float> &y);
[[nodiscard]] float dot(const vector<float> &x, const view1D<vector<float>,float> &y);
[[nodiscard]] float dot(const vector<float> &x, const view1D<matrix::Dense<float>,float> &y);
[[nodiscard]] float dot(const view1D<vector<float>,float> &x, const vector<float> &y);
[[nodiscard]] float dot(const view1D<vector<float>,float> &x, const view1D<vector<float>,float> &y);
[[nodiscard]] float dot(const view1D<vector<float>,float> &x, const view1D<matrix::Dense<float>,float> &y);
[[nodiscard]] float dot(const view1D<matrix::Dense<float>,float> &x, const vector<float> &y);
[[nodiscard]] float dot(const view1D<matrix::Dense<float>,float> &x, const view1D<vector<float>,float> &y);
[[nodiscard]] float dot(const view1D<matrix::Dense<float>,float> &x, const view1D<matrix::Dense<float>,float> &y);
/**@}*/


/**
 * \defgroup nrm1 monolish::blas::nrm1
 * @brief nrm1: sum(abs(x[0:N]))
 * @{
 */
/**
 * @brief nrm1: sum(abs(x[0:N]))
 * @param x monolish vector (size N)
 * @param ans The result of the nrm1
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */ 
void nrm1(const vector<double> &x, double &ans);
void nrm1(const view1D<vector<double>,double> &x, double &ans);
void nrm1(const view1D<matrix::Dense<double>,double> &x, double &ans);
void nrm1(const vector<float> &x, float &ans);
void nrm1(const view1D<vector<float>,float> &x, float &ans);
void nrm1(const view1D<matrix::Dense<float>,float> &x, float &ans);


/**
 * @brief nrm1: sum(abs(x[0:N]))
 * @param x monolish vector (size N)
 * @return The result of the nrm1
 * @note
 * - # of computation: 2N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */ 
[[nodiscard]] double nrm1(const vector<double> &x);
[[nodiscard]] double nrm1(const view1D<vector<double>,double> &x);
[[nodiscard]] double nrm1(const view1D<matrix::Dense<double>,double> &x);
[[nodiscard]] float nrm1(const vector<float> &x);
[[nodiscard]] float nrm1(const view1D<vector<float>,float> &x);
[[nodiscard]] float nrm1(const view1D<matrix::Dense<float>,float> &x);
/**@}*/


/**
 * \defgroup nrm2 monolish::blas::nrm2
 * @brief nrm2: ||x||_2
 * @{
 */
/**
 * @brief nrm2: ||x||_2
 * @param x monolish vector (size N)
 * @param ans The result of the nrm2
 * @note
 * - # of computation: 2N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */ 
void nrm2(const vector<double> &x, double &ans);
void nrm2(const view1D<vector<double>,double> &x, double &ans);
void nrm2(const view1D<matrix::Dense<double>,double> &x, double &ans);
void nrm2(const vector<float> &x, float &ans);
void nrm2(const view1D<vector<float>,float> &x, float &ans);
void nrm2(const view1D<matrix::Dense<float>,float> &x, float &ans);


/**
 * @brief nrm2: ||x||_2
 * @param x monolish vector (size N)
 * @return The result of the nrm2
 * @note
 * - # of computation: 2N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */ 
[[nodiscard]] double nrm2(const vector<double> &x);
[[nodiscard]] double nrm2(const view1D<vector<double>,double> &x);
[[nodiscard]] double nrm2(const view1D<matrix::Dense<double>,double> &x);
[[nodiscard]] float nrm2(const vector<float> &x);
[[nodiscard]] float nrm2(const view1D<vector<float>,float> &x);
[[nodiscard]] float nrm2(const view1D<matrix::Dense<float>,float> &x);
/**@}*/


/**
 * \defgroup scal monolish::blas::scal
 * @brief scal: x = alpha * x
 * @{
 */
/**
 * @brief scal: x = alpha * x
 * @param alpha scalar value
 * @param x monolish vector (size N)
 * @note
 * - # of computation: N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */ 
void scal(const double alpha, vector<double> &x);
void scal(const double alpha, view1D<vector<double>,double> &x);
void scal(const double alpha, view1D<matrix::Dense<double>,double> &x);
void scal(const float alpha, vector<float> &x);
void scal(const float alpha, view1D<vector<float>,float> &x);
void scal(const float alpha, view1D<matrix::Dense<float>,float> &x);
/**@}*/


/**
 * \defgroup xpay monolish::blas::xpay
 * @brief xpay: y = x + ay
 * @{
 */
/**
 * @brief xpay: y = x + ay
 * @param alpha scalar value
 * @param x monolish vector (size N)
 * @param y monolish vector (size N)
 * @note
 * - # of computation: 2N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */ 
void xpay(const double alpha, const vector<double> &x, vector<double> &y);
void xpay(const double alpha, const vector<double> &x, view1D<vector<double>,double> &y);
void xpay(const double alpha, const vector<double> &x, view1D<matrix::Dense<double>,double> &y);
void xpay(const double alpha, const view1D<vector<double>,double> &x, vector<double> &y);
void xpay(const double alpha, const view1D<vector<double>,double> &x, view1D<vector<double>,double> &y);
void xpay(const double alpha, const view1D<vector<double>,double> &x, view1D<matrix::Dense<double>,double> &y);
void xpay(const double alpha, const view1D<matrix::Dense<double>,double> &x, vector<double> &y);
void xpay(const double alpha, const view1D<matrix::Dense<double>,double> &x, view1D<vector<double>,double> &y);
void xpay(const double alpha, const view1D<matrix::Dense<double>,double> &x, view1D<matrix::Dense<double>,double> &y);
void xpay(const float alpha, const vector<float> &x, vector<float> &y);
void xpay(const float alpha, const vector<float> &x, view1D<vector<float>,float> &y);
void xpay(const float alpha, const vector<float> &x, view1D<matrix::Dense<float>,float> &y);
void xpay(const float alpha, const view1D<vector<float>,float> &x, vector<float> &y);
void xpay(const float alpha, const view1D<vector<float>,float> &x, view1D<vector<float>,float> &y);
void xpay(const float alpha, const view1D<vector<float>,float> &x, view1D<matrix::Dense<float>,float> &y);
void xpay(const float alpha, const view1D<matrix::Dense<float>,float> &x, vector<float> &y);
void xpay(const float alpha, const view1D<matrix::Dense<float>,float> &x, view1D<vector<float>,float> &y);
void xpay(const float alpha, const view1D<matrix::Dense<float>,float> &x, view1D<matrix::Dense<float>,float> &y);
/**@}*/
/**@}*/
}
