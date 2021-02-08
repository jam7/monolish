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
* Basic Linear Algebra Subprograms for Dense Matrix, Sparse Matrix, Vector and
* Scalar
*/
namespace blas {


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
void copy(const matrix::LinearOperator<double> &A, matrix::LinearOperator<double> &C);
void copy(const matrix::LinearOperator<float> &A, matrix::LinearOperator<float> &C);


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


/**
* @brief Densematrix scal: A = alpha * A
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
void matadd(const matrix::Dense<double> &A, const matrix::Dense<double> &B, matrix::Dense<double> &C);
void matadd(const matrix::Dense<float> &A, const matrix::Dense<float> &B, matrix::Dense<float> &C);

/**
* @brief LinearOperator addition: C = A + B
* @param A LinearOperator (size M x N)
* @param B LinearOperator (size M x N)
* @param C LinearOperator (size M x N)
* @note
* - # of computation: 2 functions
* - Multi-threading: false
* - GPU acceleration: false
*/ 
void matadd(const matrix::LinearOperator<double> &A, const matrix::LinearOperator<double> &B, matrix::LinearOperator<double> &C);
void matadd(const matrix::LinearOperator<float> &A, const matrix::LinearOperator<float> &B, matrix::LinearOperator<float> &C);

/**
* @brief CRS matrix addition: C = A + B (A and B must be
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
void matadd(const matrix::CRS<double> &A, const matrix::CRS<double> &B, matrix::CRS<double> &C);
void matadd(const matrix::CRS<float> &A, const matrix::CRS<float> &B, matrix::CRS<float> &C);


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
void matsub(const matrix::Dense<double> &A, const matrix::Dense<double> &B, matrix::Dense<double> &C);
void matsub(const matrix::Dense<float> &A, const matrix::Dense<float> &B, matrix::Dense<float> &C);

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
void matsub(const matrix::LinearOperator<double> &A, const matrix::LinearOperator<double> &B, matrix::LinearOperator<double> &C);
void matsub(const matrix::LinearOperator<float> &A, const matrix::LinearOperator<float> &B, matrix::LinearOperator<float> &C);

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
* A B must be same non-zero structure
*/ 
void matsub(const matrix::CRS<double> &A, const matrix::CRS<double> &B, matrix::CRS<double> &C);
void matsub(const matrix::CRS<float> &A, const matrix::CRS<float> &B, matrix::CRS<float> &C);


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
void matmul(const matrix::Dense<double> &A, const matrix::Dense<double> &B, matrix::Dense<double> &C);
void matmul(const matrix::Dense<float> &A, const matrix::Dense<float> &B, matrix::Dense<float> &C);

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
void matmul(const matrix::LinearOperator<double> &A, const matrix::LinearOperator<double> &B, matrix::LinearOperator<double> &C);
void matmul(const matrix::LinearOperator<float> &A, const matrix::LinearOperator<float> &B, matrix::LinearOperator<float> &C);

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
void matmul(const matrix::CRS<double> &A, const matrix::Dense<double> &B, matrix::Dense<double> &C);
void matmul(const matrix::CRS<float> &A, const matrix::Dense<float> &B, matrix::Dense<float> &C);

} // namespace blas
} // namespace monolish
