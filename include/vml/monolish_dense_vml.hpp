 #pragma once
#include "../common/monolish_common.hpp"
#include <stdio.h>
#include <vector>

#if defined USE_MPI
#include <mpi.h>
#endif

namespace monolish {
/**
 * @brief
 * Vector and Matrix element-wise math library
 */
namespace vml {


/**
 * @brief element by element addition Dense matrix A and
 * Dense matrix B.
 * @param A monolish Dense Matrix (size M x N)
 * @param B monolish Dense Matrix (size M x N)
 * @param C monolish Dense Matrix (size M x N)
 * @note
* - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
*/ 
void add(const matrix::Dense<double> &A, const matrix::Dense<double> &B, matrix::Dense<double> &C);
void add(const matrix::Dense<float> &A, const matrix::Dense<float> &B, matrix::Dense<float> &C);

/**
 * @brief element by element subtract Dense matrix A and
 * Dense matrix B.
 * @param A monolish Dense Matrix (size M x N)
 * @param B monolish Dense Matrix (size M x N)
 * @param C monolish Dense Matrix (size M x N)
 * @note
* - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
*/ 
void sub(const matrix::Dense<double> &A, const matrix::Dense<double> &B, matrix::Dense<double> &C);
void sub(const matrix::Dense<float> &A, const matrix::Dense<float> &B, matrix::Dense<float> &C);

/**
 * @brief element by element multiplication Dense matrix A and
 * Dense matrix B.
 * @param A monolish Dense Matrix (size M x N)
 * @param B monolish Dense Matrix (size M x N)
 * @param C monolish Dense Matrix (size M x N)
 * @note
* - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
*/ 
void mul(const matrix::Dense<double> &A, const matrix::Dense<double> &B, matrix::Dense<double> &C);
void mul(const matrix::Dense<float> &A, const matrix::Dense<float> &B, matrix::Dense<float> &C);

/**
 * @brief element by element division Dense matrix A and
 * Dense matrix B.
 * @param A monolish Dense Matrix (size M x N)
 * @param B monolish Dense Matrix (size M x N)
 * @param C monolish Dense Matrix (size M x N)
 * @note
* - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
*/ 
void div(const matrix::Dense<double> &A, const matrix::Dense<double> &B, matrix::Dense<double> &C);
void div(const matrix::Dense<float> &A, const matrix::Dense<float> &B, matrix::Dense<float> &C);


/**
 * @brief element by element addition Dense matrix A and
 * Dense matrix B.
 * @param A monolish Dense Matrix (size M x N)
 * @param alpha scalar value
 * @param C monolish Dense Matrix (size M x N)
 * @note
* - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
*/ 
void add(const matrix::Dense<double> &A, const double alpha, matrix::Dense<double> &C);
void add(const matrix::Dense<float> &A, const float alpha, matrix::Dense<float> &C);

/**
 * @brief element by element subtract Dense matrix A and
 * Dense matrix B.
 * @param A monolish Dense Matrix (size M x N)
 * @param alpha scalar value
 * @param C monolish Dense Matrix (size M x N)
 * @note
* - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
*/ 
void sub(const matrix::Dense<double> &A, const double alpha, matrix::Dense<double> &C);
void sub(const matrix::Dense<float> &A, const float alpha, matrix::Dense<float> &C);

/**
 * @brief element by element multiplication Dense matrix A and
 * Dense matrix B.
 * @param A monolish Dense Matrix (size M x N)
 * @param alpha scalar value
 * @param C monolish Dense Matrix (size M x N)
 * @note
* - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
*/ 
void mul(const matrix::Dense<double> &A, const double alpha, matrix::Dense<double> &C);
void mul(const matrix::Dense<float> &A, const float alpha, matrix::Dense<float> &C);

/**
 * @brief element by element division Dense matrix A and
 * Dense matrix B.
 * @param A monolish Dense Matrix (size M x N)
 * @param alpha scalar value
 * @param C monolish Dense Matrix (size M x N)
 * @note
* - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
*/ 
void div(const matrix::Dense<double> &A, const double alpha, matrix::Dense<double> &C);
void div(const matrix::Dense<float> &A, const float alpha, matrix::Dense<float> &C);


/**
 *@brief power to Dense matrix elements Dense matrix (C[0:N] = pow(A[0:N], B[0:N]))
 * @param A monolish Dense Matrix (size M x N)
 * @param B monolish Dense Matrix (size M x N)
 * @param C monolish Dense Matrix (size M x N)
 * @note
* - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
*/ 
void pow(const matrix::Dense<double> &A, const matrix::Dense<double> &B, matrix::Dense<double> &C);
void pow(const matrix::Dense<float> &A, const matrix::Dense<float> &B, matrix::Dense<float> &C);

/**
 * @brief power to Dense matrix elements by scalar value (C[0:N] = pow(A[0:N], alpha))
 * @param A monolish Dense Matrix (size M x N)
 * @param alpha scalar value
 * @param C monolish Dense Matrix (size M x N)
 * @note
* - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
*/ 
void pow(const matrix::Dense<double> &A, const double alpha, matrix::Dense<double> &C);
void pow(const matrix::Dense<float> &A, const float alpha, matrix::Dense<float> &C);


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


/**
* @brief Create a new Dense matrix with greatest elements of two matrices (C[0:nnz] = max(A[0:nnz], B[0:nnz]))
* @param A monolish Dense matrix (size M x N)
* @param B monolish Dense matrix (size M x N)
* @param C monolish Dense matrix (size M x N)
* @note
* - # of computation: M*N
* - Multi-threading: true
* - GPU acceleration: true
*    - # of data transfer: 0
*/ 
void max(const matrix::Dense<double> &A, const matrix::Dense<double> &B, matrix::Dense<double> &C);
void max(const matrix::Dense<float> &A, const matrix::Dense<float> &B, matrix::Dense<float> &C);

/**
* @brief Create a new Dense matrix with smallest elements of two matrices (C[0:nnz] = min(A[0:nnz], B[0:nnz]))
* @param A monolish Dense matrix (size M x N)
* @param B monolish Dense matrix (size M x N)
* @param C monolish Dense matrix (size M x N)
* @note
* - # of computation: M*N
* - Multi-threading: true
* - GPU acceleration: true
*    - # of data transfer: 0
*/ 
void min(const matrix::Dense<double> &A, const matrix::Dense<double> &B, matrix::Dense<double> &C);
void min(const matrix::Dense<float> &A, const matrix::Dense<float> &B, matrix::Dense<float> &C);


/**
 * @brief Finds the greatest element in Dense matrix (max(C[0:nnz]))
 * @param C monolish Dense matrix (size M x N)
 * @return greatest value
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
*/ 
double max(matrix::Dense<double> &C);
float max(matrix::Dense<float> &C);

/**
 * @brief Finds the smallest element in Dense matrix (min(C[0:nnz]))
 * @param C monolish Dense matrix (size M x N)
 * @return smallest value
 * @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
*/ 
double min(matrix::Dense<double> &C);
float min(matrix::Dense<float> &C);


/**
* @brief reciprocal to Dense matrix elements (C[0:nnz] = 1 / A[0:nnz])
* @param A monolish Dense matrix (size M x N)
* @param C monolish Dense matrix (size M x N)
* @note
 * - # of computation: M*N
 * - Multi-threading: true
 * - GPU acceleration: true
*/ 
void reciprocal(const matrix::Dense<double> &a, matrix::Dense<double> &y);
void reciprocal(const matrix::Dense<float> &a, matrix::Dense<float> &y);

} // namespace blas
} // namespace monolish 
