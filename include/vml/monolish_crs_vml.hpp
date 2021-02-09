 #pragma once
#include "../common/monolish_common.hpp"

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
 * @brief element by element addition CRS matrix A and
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
*/ 
void add(const matrix::CRS<double> &A, const matrix::CRS<double> &B, matrix::CRS<double> &C);
void add(const matrix::CRS<float> &A, const matrix::CRS<float> &B, matrix::CRS<float> &C);

/**
 * @brief element by element subtract CRS matrix A and
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
*/ 
void sub(const matrix::CRS<double> &A, const matrix::CRS<double> &B, matrix::CRS<double> &C);
void sub(const matrix::CRS<float> &A, const matrix::CRS<float> &B, matrix::CRS<float> &C);

/**
 * @brief element by element multiplication CRS matrix A and
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
*/ 
void mul(const matrix::CRS<double> &A, const matrix::CRS<double> &B, matrix::CRS<double> &C);
void mul(const matrix::CRS<float> &A, const matrix::CRS<float> &B, matrix::CRS<float> &C);

/**
 * @brief element by element division CRS matrix A and
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
*/ 
void div(const matrix::CRS<double> &A, const matrix::CRS<double> &B, matrix::CRS<double> &C);
void div(const matrix::CRS<float> &A, const matrix::CRS<float> &B, matrix::CRS<float> &C);


/**
 * @brief element by element addition CRS matrix A and
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
*/ 
void add(const matrix::CRS<double> &A, const double alpha, matrix::CRS<double> &C);
void add(const matrix::CRS<float> &A, const float alpha, matrix::CRS<float> &C);

/**
 * @brief element by element subtract CRS matrix A and
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
*/ 
void sub(const matrix::CRS<double> &A, const double alpha, matrix::CRS<double> &C);
void sub(const matrix::CRS<float> &A, const float alpha, matrix::CRS<float> &C);

/**
 * @brief element by element multiplication CRS matrix A and
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
*/ 
void mul(const matrix::CRS<double> &A, const double alpha, matrix::CRS<double> &C);
void mul(const matrix::CRS<float> &A, const float alpha, matrix::CRS<float> &C);

/**
 * @brief element by element division CRS matrix A and
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
*/ 
void div(const matrix::CRS<double> &A, const double alpha, matrix::CRS<double> &C);
void div(const matrix::CRS<float> &A, const float alpha, matrix::CRS<float> &C);


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
*/ 
void pow(const matrix::CRS<double> &A, const matrix::CRS<double> &B, matrix::CRS<double> &C);
void pow(const matrix::CRS<float> &A, const matrix::CRS<float> &B, matrix::CRS<float> &C);

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
*/ 
void pow(const matrix::CRS<double> &A, const double alpha, matrix::CRS<double> &C);
void pow(const matrix::CRS<float> &A, const float alpha, matrix::CRS<float> &C);


/**
 * @brief sin to CRS matrix elements (C[0:nnz] = sin(A[0:nnz]))
 * @param A monolish CRS matrix (size M x N)
 * @param C monolish CRS matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B, and C must be same non-zero structure
*/ 
void sin(const matrix::CRS<double> &A, matrix::CRS<double> &C);
void sin(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief sqrt to CRS matrix elements (C[0:nnz] = sqrt(A[0:nnz]))
 * @param A monolish CRS matrix (size M x N)
 * @param C monolish CRS matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B, and C must be same non-zero structure
*/ 
void sqrt(const matrix::CRS<double> &A, matrix::CRS<double> &C);
void sqrt(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief sinh to CRS matrix elements (C[0:nnz] = sinh(A[0:nnz]))
 * @param A monolish CRS matrix (size M x N)
 * @param C monolish CRS matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B, and C must be same non-zero structure
*/ 
void sinh(const matrix::CRS<double> &A, matrix::CRS<double> &C);
void sinh(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief asin to CRS matrix elements (C[0:nnz] = asin(A[0:nnz]))
 * @param A monolish CRS matrix (size M x N)
 * @param C monolish CRS matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B, and C must be same non-zero structure
*/ 
void asin(const matrix::CRS<double> &A, matrix::CRS<double> &C);
void asin(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief asinh to CRS matrix elements (C[0:nnz] = asinh(A[0:nnz]))
 * @param A monolish CRS matrix (size M x N)
 * @param C monolish CRS matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B, and C must be same non-zero structure
*/ 
void asinh(const matrix::CRS<double> &A, matrix::CRS<double> &C);
void asinh(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief tan to CRS matrix elements (C[0:nnz] = tan(A[0:nnz]))
 * @param A monolish CRS matrix (size M x N)
 * @param C monolish CRS matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B, and C must be same non-zero structure
*/ 
void tan(const matrix::CRS<double> &A, matrix::CRS<double> &C);
void tan(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief tanh to CRS matrix elements (C[0:nnz] = tanh(A[0:nnz]))
 * @param A monolish CRS matrix (size M x N)
 * @param C monolish CRS matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B, and C must be same non-zero structure
*/ 
void tanh(const matrix::CRS<double> &A, matrix::CRS<double> &C);
void tanh(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief atan to CRS matrix elements (C[0:nnz] = atan(A[0:nnz]))
 * @param A monolish CRS matrix (size M x N)
 * @param C monolish CRS matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B, and C must be same non-zero structure
*/ 
void atan(const matrix::CRS<double> &A, matrix::CRS<double> &C);
void atan(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief atanh to CRS matrix elements (C[0:nnz] = atanh(A[0:nnz]))
 * @param A monolish CRS matrix (size M x N)
 * @param C monolish CRS matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B, and C must be same non-zero structure
*/ 
void atanh(const matrix::CRS<double> &A, matrix::CRS<double> &C);
void atanh(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief ceil to CRS matrix elements (C[0:nnz] = ceil(A[0:nnz]))
 * @param A monolish CRS matrix (size M x N)
 * @param C monolish CRS matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B, and C must be same non-zero structure
*/ 
void ceil(const matrix::CRS<double> &A, matrix::CRS<double> &C);
void ceil(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief floor to CRS matrix elements (C[0:nnz] = floor(A[0:nnz]))
 * @param A monolish CRS matrix (size M x N)
 * @param C monolish CRS matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B, and C must be same non-zero structure
*/ 
void floor(const matrix::CRS<double> &A, matrix::CRS<double> &C);
void floor(const matrix::CRS<float> &A, matrix::CRS<float> &C);

/**
 * @brief sign to CRS matrix elements (C[0:nnz] = sign(A[0:nnz]))
 * @param A monolish CRS matrix (size M x N)
 * @param C monolish CRS matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B, and C must be same non-zero structure
*/ 
void sign(const matrix::CRS<double> &A, matrix::CRS<double> &C);
void sign(const matrix::CRS<float> &A, matrix::CRS<float> &C);


/**
 * @brief Create a new CRS matrix with greatest elements of two matrices (C[0:nnz] = max(A[0:nnz], B[0:nnz]))
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
*/ 
void max(const matrix::CRS<double> &A, const matrix::CRS<double> &B, matrix::CRS<double> &C);
void max(const matrix::CRS<float> &A, const matrix::CRS<float> &B, matrix::CRS<float> &C);

/**
 * @brief Create a new CRS matrix with smallest elements of two matrices (C[0:nnz] = min(A[0:nnz], B[0:nnz]))
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
*/ 
void min(const matrix::CRS<double> &A, const matrix::CRS<double> &B, matrix::CRS<double> &C);
void min(const matrix::CRS<float> &A, const matrix::CRS<float> &B, matrix::CRS<float> &C);


/**
 * @brief Finds the greatest element in CRS matrix (max(C[0:nnz]))
 * @param C monolish CRS matrix (size M x N)
 * @return greatest value
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B, and C must be same non-zero structure
*/ 
double max(matrix::CRS<double> &C);
float max(matrix::CRS<float> &C);

/**
 * @brief Finds the smallest element in CRS matrix (min(C[0:nnz]))
 * @param C monolish CRS matrix (size M x N)
 * @return smallest value
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 * @warning
 * A, B, and C must be same non-zero structure
*/ 
double min(matrix::CRS<double> &C);
float min(matrix::CRS<float> &C);


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
*/ 
void reciprocal(const matrix::CRS<double> &a, matrix::CRS<double> &y);
void reciprocal(const matrix::CRS<float> &a, matrix::CRS<float> &y);

} // namespace blas
} // namespace monolish 
