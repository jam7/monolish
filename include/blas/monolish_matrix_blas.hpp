// this code is generated by gen_matrix_blas.sh
#pragma once
#include "../common/monolish_common.hpp"

/**
 * @brief
 * Basic Linear Algebra Subprograms for Dense Matrix, Sparse Matrix, Vector and
 * Scalar
 */
namespace monolish {
namespace blas {

/**
 * @addtogroup BLASLV3
 * @{
 */

/**
 * \defgroup mat_copy_Dense monolish::blas::copy (Dense)
 * @brief Dense matrix copy (C=A)
 * @{
 */
/**
 * @brief Dense matrix copy (C=A)
 * @param A monolish Dense matrix (size M x N)
 * @param C monolish Dense matrix (size M x N)
 * @note
 * - # of computation: M x N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void copy(const matrix::Dense<double> &A, matrix::Dense<double> &C);
void copy(const matrix::Dense<float> &A, matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup mat_copy_crs monolish::blas::copy (CRS)
 * @brief CRS matrix copy (y=a)
 * @{
 */
/**
 * @brief CRS matrix copy (y=a)
 * @param A monolish CRS matrix (size M x N)
 * @param C monolish CRS matrix (size M x N)
 * @note
 * - # of computation: M x N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 * @warning
 * A and C must be same non-zero structure
 */
void copy(const matrix::CRS<double> &A, matrix::CRS<double> &C);
void copy(const matrix::CRS<float> &A, matrix::CRS<float> &C);
/**@}*/

/**
 * \defgroup mat_copy_LO monolish::blas::copy (LinearOperator)
 * @brief LinearOperator copy (C=A)
 * @{
 */
/**
 * @brief LinearOperator copy (C=A)
 * @param A monolish LinearOperator (size M x N)
 * @param C monolish LinearOperator (size M x N)
 * @note
 * - # of computation: M x N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void copy(const matrix::LinearOperator<double> &A,
          matrix::LinearOperator<double> &C);
void copy(const matrix::LinearOperator<float> &A,
          matrix::LinearOperator<float> &C);
/**@}*/

/**
 * \defgroup mscal_dense monolish::blas::mscal (Dense)
 * @brief Dense matrix scal: A = alpha * A
 * @{
 */
/**
 * @brief Dense matrix scal: A = alpha * A
 * @param alpha scalar value
 * @param A Dense matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void mscal(const double alpha, matrix::Dense<double> &A);
void mscal(const float alpha, matrix::Dense<float> &A);
/**@}*/

/**
 * \defgroup mscal_crs monolish::blas::mscal (CRS)
 * @brief CRS matrix scal: A = alpha * A
 * @{
 */
/**
 * @brief CRS matrix scal: A = alpha * A
 * @param alpha scalar value
 * @param A CRS matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void mscal(const double alpha, matrix::CRS<double> &A);
void mscal(const float alpha, matrix::CRS<float> &A);
/**@}*/

/**
 * \defgroup madd_dense monolish::blas::matadd (Dense)
 * @brief Dense matrix addition: C = A + B
 * @{
 */
/**
 * @brief Dense matrix addition: C = A + B
 * @param A Dense matrix (size M x N)
 * @param B Dense matrix (size M x N)
 * @param C Dense matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void matadd(const matrix::Dense<double> &A, const matrix::Dense<double> &B,
            matrix::Dense<double> &C);
void matadd(const matrix::Dense<float> &A, const matrix::Dense<float> &B,
            matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup madd_LO monolish::blas::matadd (LinearOperator)
 * @brief LinearOperator matrix addition: C = A + B
 * @{
 */
/**
 * @brief LinearOperator matrix addition: C = A + B
 * @param A LinearOperator (size M x N)
 * @param B LinearOperator (size M x N)
 * @param C LinearOperator (size M x N)
 * @note
 * - # of computation: 2 functions
 * - Multi-threading: false
 * - GPU acceleration: false
 */
void matadd(const matrix::LinearOperator<double> &A,
            const matrix::LinearOperator<double> &B,
            matrix::LinearOperator<double> &C);
void matadd(const matrix::LinearOperator<float> &A,
            const matrix::LinearOperator<float> &B,
            matrix::LinearOperator<float> &C);
/**@}*/

/**
 * \defgroup madd_crs monolish::blas::matadd (CRS)
 * @brief CRS matrix addition: C = A + B
 * @{
 */
/**
 * @brief CRS matrix addition: C = A + B
 * @param A CRS matrix (size M x N)
 * @param B CRS matrix (size M x N)
 * @param C CRS matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 * @warning
 * A and B must be same non-zero structure
 */
void matadd(const matrix::CRS<double> &A, const matrix::CRS<double> &B,
            matrix::CRS<double> &C);
void matadd(const matrix::CRS<float> &A, const matrix::CRS<float> &B,
            matrix::CRS<float> &C);
/**@}*/

/**
 * \defgroup msub_dense monolish::blas::matsub (Dense)
 * @brief Dense matrix subtract: C = A - B
 * @{
 */
/**
 * @brief Dense matrix subtract: C = A - B
 * @param A Dense matrix (size M x N)
 * @param B Dense matrix (size M x N)
 * @param C Dense matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void matsub(const matrix::Dense<double> &A, const matrix::Dense<double> &B,
            matrix::Dense<double> &C);
void matsub(const matrix::Dense<float> &A, const matrix::Dense<float> &B,
            matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup msub_LO monolish::blas::matsub (LinearOperator)
 * @brief LinearOperator subtract: C = A - B
 * @{
 */
/**
 * @brief LinearOperator subtract: C = A - B
 * @param A LinearOperator (size M x N)
 * @param B LinearOperator (size M x N)
 * @param C LinearOperator (size M x N)
 * @note
 * - # of computation: 2 functions
 * - Multi-threading: false
 * - GPU acceleration: false
 */
void matsub(const matrix::LinearOperator<double> &A,
            const matrix::LinearOperator<double> &B,
            matrix::LinearOperator<double> &C);
void matsub(const matrix::LinearOperator<float> &A,
            const matrix::LinearOperator<float> &B,
            matrix::LinearOperator<float> &C);
/**@}*/

/**
 * \defgroup msub_crs monolish::blas::matsub (CRS)
 * @brief CRS matrix subtract: C = A - B (A and B must be
 * @{
 */
/**
 * @brief CRS matrix subtract: C = A - B (A and B must be
 * same non-zero structure)
 * @param A CRS matrix (size M x N)
 * @param B CRS matrix (size M x N)
 * @param C CRS matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 * @warning
 * A and B must be same non-zero structure
 */
void matsub(const matrix::CRS<double> &A, const matrix::CRS<double> &B,
            matrix::CRS<double> &C);
void matsub(const matrix::CRS<float> &A, const matrix::CRS<float> &B,
            matrix::CRS<float> &C);
/**@}*/

/**
 * \defgroup mm_dense monolish::blas::matmul (Dense, Dense, Dense)
 * @brief Dense matrix multiplication: C = AB
 * @{
 */
/**
 * @brief Dense matrix multiplication: C = AB
 * @param A Dense matrix (size M x K)
 * @param B Dense matrix (size K x N)
 * @param C Dense matrix (size M x N)
 * @note
 * - # of computation: 2MNK
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void matmul(const matrix::Dense<double> &A, const matrix::Dense<double> &B,
            matrix::Dense<double> &C);
void matmul(const matrix::Dense<float> &A, const matrix::Dense<float> &B,
            matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup mm_crs_dense monolish::blas::matmul (CRS, Dense, Dense)
 * @brief CRS and Dense matrix multiplication: C = AB
 * @{
 */
/**
 * @brief CRS and Dense matrix multiplication: C = AB
 * @param A CRS matrix (size M x K)
 * @param B Dense matrix (size K x N)
 * @param C Dense matrix (size M x N)
 * @note
 * - # of computation: 2*N*nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void matmul(const matrix::CRS<double> &A, const matrix::Dense<double> &B,
            matrix::Dense<double> &C);
void matmul(const matrix::CRS<float> &A, const matrix::Dense<float> &B,
            matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup mm_LO monolish::blas::matmul (LO, LO, LO)
 * @brief LinearOperator multiplication: C = AB
 * @{
 */
/**
 * @brief LinearOperator multiplication: C = AB
 * @param A LinearOperator (size M x K)
 * @param B LinearOperator (size K x N)
 * @param C LinearOperator (size M x N)
 * @note
 * - # of computation: 2 functions
 * - Multi-threading: false
 * - GPU acceleration: false
 */
void matmul(const matrix::LinearOperator<double> &A,
            const matrix::LinearOperator<double> &B,
            matrix::LinearOperator<double> &C);
void matmul(const matrix::LinearOperator<float> &A,
            const matrix::LinearOperator<float> &B,
            matrix::LinearOperator<float> &C);
/**@}*/

/**
 * \defgroup mm_LO_dense monolish::blas::matmul (LO, Dense, Dense)
 * @brief LinearOperator and Dense multiplication: C = AB
 * @{
 */
/**
 * @brief LinearOperator and Dense multiplication: C = AB
 * @param A LinearOperator (size M x K)
 * @param B Dense matrix (size K x N)
 * @param C Dense matrix (size M x N)
 * @note
 * - # of computation: ?
 * - Multi-threading: false
 * - GPU acceleration: false
 */
void matmul(const matrix::LinearOperator<double> &A,
            const matrix::Dense<double> &B, matrix::Dense<double> &C);
void matmul(const matrix::LinearOperator<float> &A,
            const matrix::Dense<float> &B, matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup rmm_LO monolish::blas::rmatmul (LO, Dense, Dense)
 * @brief LinearOperator multiplication: C = A^H B
 * @{
 */
/**
 * @brief LinearOperator multiplication: C = A^H B
 * @param A LinearOperator (size K x M)
 * @param B Dense matrix (size K x N)
 * @param C Dense matrix (size M x N)
 * @note
 * - # of computation: ?
 * - Multi-threading: false
 * - GPU acceleration: false
 */
void rmatmul(const matrix::LinearOperator<double> &A,
             const matrix::Dense<double> &B, matrix::Dense<double> &C);
void rmatmul(const matrix::LinearOperator<float> &A,
             const matrix::Dense<float> &B, matrix::Dense<float> &C);
/**@}*/
/**@}*/
} // namespace blas
} // namespace monolish
