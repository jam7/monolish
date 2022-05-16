// this code is generated by gen_dense_vml.sh
#pragma once

#include "../common/monolish_common.hpp"

namespace monolish {
/**
 * @brief
 * Vector and Matrix element-wise math library
 */
namespace vml {

/**
 * @addtogroup Dense_VML
 * @{
 */

/**
 * \defgroup vml_dnsadd monolish::vml::add
 * @brief element by element addition Dense matrix A and Dense matrix B.
 * @{
 */
/**
 * @brief element by element addition Dense matrix A and Dense matrix B.
 * @param A monolish Dense Matrix (size M x N)
 * @param B monolish Dense Matrix (size M x N)
 * @param C monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void add(const matrix::Dense<double> &A, const matrix::Dense<double> &B,
         matrix::Dense<double> &C);
void add(const matrix::Dense<float> &A, const matrix::Dense<float> &B,
         matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnssub monolish::vml::sub
 * @brief element by element subtract Dense matrix A and Dense matrix B.
 * @{
 */
/**
 * @brief element by element subtract Dense matrix A and Dense matrix B.
 * @param A monolish Dense Matrix (size M x N)
 * @param B monolish Dense Matrix (size M x N)
 * @param C monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void sub(const matrix::Dense<double> &A, const matrix::Dense<double> &B,
         matrix::Dense<double> &C);
void sub(const matrix::Dense<float> &A, const matrix::Dense<float> &B,
         matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnsmul monolish::vml::mul
 * @brief element by element multiplication Dense matrix A and Dense matrix B.
 * @{
 */
/**
 * @brief element by element multiplication Dense matrix A and Dense matrix B.
 * @param A monolish Dense Matrix (size M x N)
 * @param B monolish Dense Matrix (size M x N)
 * @param C monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void mul(const matrix::Dense<double> &A, const matrix::Dense<double> &B,
         matrix::Dense<double> &C);
void mul(const matrix::Dense<float> &A, const matrix::Dense<float> &B,
         matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnsdiv monolish::vml::div
 * @brief element by element division Dense matrix A and Dense matrix B.
 * @{
 */
/**
 * @brief element by element division Dense matrix A and Dense matrix B.
 * @param A monolish Dense Matrix (size M x N)
 * @param B monolish Dense Matrix (size M x N)
 * @param C monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void div(const matrix::Dense<double> &A, const matrix::Dense<double> &B,
         matrix::Dense<double> &C);
void div(const matrix::Dense<float> &A, const matrix::Dense<float> &B,
         matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_sdnsadd monolish::vml::add
 * @brief element by element addition scalar alpha and Dense matrix A.
 * @{
 */
/**
 * @brief element by element addition scalar alpha and Dense matrix A.
 * @param A monolish Dense Matrix (size M x N)
 * @param alpha scalar value
 * @param C monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void add(const matrix::Dense<double> &A, const double alpha,
         matrix::Dense<double> &C);
void add(const matrix::Dense<float> &A, const float alpha,
         matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_sdnssub monolish::vml::sub
 * @brief element by element subtract scalar alpha and Dense matrix A.
 * @{
 */
/**
 * @brief element by element subtract scalar alpha and Dense matrix A.
 * @param A monolish Dense Matrix (size M x N)
 * @param alpha scalar value
 * @param C monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void sub(const matrix::Dense<double> &A, const double alpha,
         matrix::Dense<double> &C);
void sub(const matrix::Dense<float> &A, const float alpha,
         matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_sdnsmul monolish::vml::mul
 * @brief element by element multiplication scalar alpha and Dense matrix A.
 * @{
 */
/**
 * @brief element by element multiplication scalar alpha and Dense matrix A.
 * @param A monolish Dense Matrix (size M x N)
 * @param alpha scalar value
 * @param C monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void mul(const matrix::Dense<double> &A, const double alpha,
         matrix::Dense<double> &C);
void mul(const matrix::Dense<float> &A, const float alpha,
         matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_sdnsdiv monolish::vml::div
 * @brief element by element division scalar alpha and Dense matrix A.
 * @{
 */
/**
 * @brief element by element division scalar alpha and Dense matrix A.
 * @param A monolish Dense Matrix (size M x N)
 * @param alpha scalar value
 * @param C monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void div(const matrix::Dense<double> &A, const double alpha,
         matrix::Dense<double> &C);
void div(const matrix::Dense<float> &A, const float alpha,
         matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnspow monolish::vml::pow
 *@brief power to Dense matrix elements (C[0:N] = pow(A[0:N], B[0:N]))
 * @{
 */
/**
 *@brief power to Dense matrix elements (C[0:N] = pow(A[0:N], B[0:N]))
 * @param A monolish Dense Matrix (size M x N)
 * @param B monolish Dense Matrix (size M x N)
 * @param C monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void pow(const matrix::Dense<double> &A, const matrix::Dense<double> &B,
         matrix::Dense<double> &C);
void pow(const matrix::Dense<float> &A, const matrix::Dense<float> &B,
         matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_sdnspow monolish::vml::pow
 * @brief power to Dense matrix elements by scalar value (C[0:N] = pow(A[0:N],
 * alpha))
 * @{
 */
/**
 * @brief power to Dense matrix elements by scalar value (C[0:N] = pow(A[0:N],
 * alpha))
 * @param A monolish Dense Matrix (size M x N)
 * @param alpha scalar value
 * @param C monolish Dense Matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void pow(const matrix::Dense<double> &A, const double alpha,
         matrix::Dense<double> &C);
void pow(const matrix::Dense<float> &A, const float alpha,
         matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnssin monolish::vml::sin
 * @brief sin to Dense matrix elements (C[0:nnz] = sin(A[0:nnz]))
 * @{
 */
/**
 * @brief sin to Dense matrix elements (C[0:nnz] = sin(A[0:nnz]))
 * @param A monolish Dense matrix (size M x N)
 * @param C monolish Dense matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void sin(const matrix::Dense<double> &A, matrix::Dense<double> &C);
void sin(const matrix::Dense<float> &A, matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnssqrt monolish::vml::sqrt
 * @brief sqrt to Dense matrix elements (C[0:nnz] = sqrt(A[0:nnz]))
 * @{
 */
/**
 * @brief sqrt to Dense matrix elements (C[0:nnz] = sqrt(A[0:nnz]))
 * @param A monolish Dense matrix (size M x N)
 * @param C monolish Dense matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void sqrt(const matrix::Dense<double> &A, matrix::Dense<double> &C);
void sqrt(const matrix::Dense<float> &A, matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnssinh monolish::vml::sinh
 * @brief sinh to Dense matrix elements (C[0:nnz] = sinh(A[0:nnz]))
 * @{
 */
/**
 * @brief sinh to Dense matrix elements (C[0:nnz] = sinh(A[0:nnz]))
 * @param A monolish Dense matrix (size M x N)
 * @param C monolish Dense matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void sinh(const matrix::Dense<double> &A, matrix::Dense<double> &C);
void sinh(const matrix::Dense<float> &A, matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnsasin monolish::vml::asin
 * @brief asin to Dense matrix elements (C[0:nnz] = asin(A[0:nnz]))
 * @{
 */
/**
 * @brief asin to Dense matrix elements (C[0:nnz] = asin(A[0:nnz]))
 * @param A monolish Dense matrix (size M x N)
 * @param C monolish Dense matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void asin(const matrix::Dense<double> &A, matrix::Dense<double> &C);
void asin(const matrix::Dense<float> &A, matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnsasinh monolish::vml::asinh
 * @brief asinh to Dense matrix elements (C[0:nnz] = asinh(A[0:nnz]))
 * @{
 */
/**
 * @brief asinh to Dense matrix elements (C[0:nnz] = asinh(A[0:nnz]))
 * @param A monolish Dense matrix (size M x N)
 * @param C monolish Dense matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void asinh(const matrix::Dense<double> &A, matrix::Dense<double> &C);
void asinh(const matrix::Dense<float> &A, matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnstan monolish::vml::tan
 * @brief tan to Dense matrix elements (C[0:nnz] = tan(A[0:nnz]))
 * @{
 */
/**
 * @brief tan to Dense matrix elements (C[0:nnz] = tan(A[0:nnz]))
 * @param A monolish Dense matrix (size M x N)
 * @param C monolish Dense matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void tan(const matrix::Dense<double> &A, matrix::Dense<double> &C);
void tan(const matrix::Dense<float> &A, matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnstanh monolish::vml::tanh
 * @brief tanh to Dense matrix elements (C[0:nnz] = tanh(A[0:nnz]))
 * @{
 */
/**
 * @brief tanh to Dense matrix elements (C[0:nnz] = tanh(A[0:nnz]))
 * @param A monolish Dense matrix (size M x N)
 * @param C monolish Dense matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void tanh(const matrix::Dense<double> &A, matrix::Dense<double> &C);
void tanh(const matrix::Dense<float> &A, matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnsatan monolish::vml::atan
 * @brief atan to Dense matrix elements (C[0:nnz] = atan(A[0:nnz]))
 * @{
 */
/**
 * @brief atan to Dense matrix elements (C[0:nnz] = atan(A[0:nnz]))
 * @param A monolish Dense matrix (size M x N)
 * @param C monolish Dense matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void atan(const matrix::Dense<double> &A, matrix::Dense<double> &C);
void atan(const matrix::Dense<float> &A, matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnsatanh monolish::vml::atanh
 * @brief atanh to Dense matrix elements (C[0:nnz] = atanh(A[0:nnz]))
 * @{
 */
/**
 * @brief atanh to Dense matrix elements (C[0:nnz] = atanh(A[0:nnz]))
 * @param A monolish Dense matrix (size M x N)
 * @param C monolish Dense matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void atanh(const matrix::Dense<double> &A, matrix::Dense<double> &C);
void atanh(const matrix::Dense<float> &A, matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnsceil monolish::vml::ceil
 * @brief ceil to Dense matrix elements (C[0:nnz] = ceil(A[0:nnz]))
 * @{
 */
/**
 * @brief ceil to Dense matrix elements (C[0:nnz] = ceil(A[0:nnz]))
 * @param A monolish Dense matrix (size M x N)
 * @param C monolish Dense matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void ceil(const matrix::Dense<double> &A, matrix::Dense<double> &C);
void ceil(const matrix::Dense<float> &A, matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnsfloor monolish::vml::floor
 * @brief floor to Dense matrix elements (C[0:nnz] = floor(A[0:nnz]))
 * @{
 */
/**
 * @brief floor to Dense matrix elements (C[0:nnz] = floor(A[0:nnz]))
 * @param A monolish Dense matrix (size M x N)
 * @param C monolish Dense matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void floor(const matrix::Dense<double> &A, matrix::Dense<double> &C);
void floor(const matrix::Dense<float> &A, matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnssign monolish::vml::sign
 * @brief sign to Dense matrix elements (C[0:nnz] = sign(A[0:nnz]))
 * @{
 */
/**
 * @brief sign to Dense matrix elements (C[0:nnz] = sign(A[0:nnz]))
 * @param A monolish Dense matrix (size M x N)
 * @param C monolish Dense matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void sign(const matrix::Dense<double> &A, matrix::Dense<double> &C);
void sign(const matrix::Dense<float> &A, matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnsdnsmax monolish::vml::max
 * @brief Create a new Dense matrix with greatest elements of two matrices
 * (C[0:nnz] = max(A[0:nnz], B[0:nnz]))
 * @{
 */
/**
 * @brief Create a new Dense matrix with greatest elements of two matrices
 * (C[0:nnz] = max(A[0:nnz], B[0:nnz]))
 * @param A monolish Dense matrix (size M x N)
 * @param B monolish Dense matrix (size M x N)
 * @param C monolish Dense matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void max(const matrix::Dense<double> &A, const matrix::Dense<double> &B,
         matrix::Dense<double> &C);
void max(const matrix::Dense<float> &A, const matrix::Dense<float> &B,
         matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnsdnsmin monolish::vml::min
 * @brief Create a new Dense matrix with smallest elements of two matrices
 * (C[0:nnz] = min(A[0:nnz], B[0:nnz]))
 * @{
 */
/**
 * @brief Create a new Dense matrix with smallest elements of two matrices
 * (C[0:nnz] = min(A[0:nnz], B[0:nnz]))
 * @param A monolish Dense matrix (size M x N)
 * @param B monolish Dense matrix (size M x N)
 * @param C monolish Dense matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void min(const matrix::Dense<double> &A, const matrix::Dense<double> &B,
         matrix::Dense<double> &C);
void min(const matrix::Dense<float> &A, const matrix::Dense<float> &B,
         matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnsmax monolish::vml::max
 * @brief Finds the greatest element in Dense matrix (max(C[0:nnz]))
 * @{
 */
/**
 * @brief Finds the greatest element in Dense matrix (max(C[0:nnz]))
 * @param C monolish Dense matrix (size M x N)
 * @return greatest value
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
[[nodiscard]] double max(const matrix::Dense<double> &C);
[[nodiscard]] float max(const matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnsmin monolish::vml::min
 * @brief Finds the smallest element in Dense matrix (min(C[0:nnz]))
 * @{
 */
/**
 * @brief Finds the smallest element in Dense matrix (min(C[0:nnz]))
 * @param C monolish Dense matrix (size M x N)
 * @return smallest value
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
[[nodiscard]] double min(const matrix::Dense<double> &C);
[[nodiscard]] float min(const matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup vml_dnsreciprocal monolish::vml::reciprocal
 * @brief Compute reciprocal to Dense matrix elements (C[0:nnz] = 1 / A[0:nnz])
 * @{
 */
/**
 * @brief Compute reciprocal to Dense matrix elements (C[0:nnz] = 1 / A[0:nnz])
 * @param A monolish Dense matrix (size M x N)
 * @param C monolish Dense matrix (size M x N)
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 */
void reciprocal(const matrix::Dense<double> &A, matrix::Dense<double> &C);
void reciprocal(const matrix::Dense<float> &A, matrix::Dense<float> &C);
/**@}*/
/**@}*/
} // namespace vml
} // namespace monolish
