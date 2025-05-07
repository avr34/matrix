#ifndef MATRIX_H
#define MATRIX_H

#include <stdio.h>
#include <stdlib.h>

#define DT float
#define MATRIX Matrix

typedef enum errcode {
    PASSED
} ErrCode;

const char * ErrString{
    "Ran without issues"
}

typedef struct matrix {
    DT ** data;
    short int rows, cols;
} MATRIX;

DT matSqrt(DT a);

Matrix * initMat(int Rows, int Cols);
Matrix * initIdentity(int width);
Matrix * popMat(int Rows, int Cols, DT * a);
int insertVal(DT value, int i, int j, Matrix * a);
DT getVal(int i, int j, Matrix * a);
DT ** getMat(Matrix * a);

ErrCode swapRow(int first, int second, Matrix * a, Matrix * b);
ErrCode multRow(DT coefficient, int row, Matrix * a, Matrix * b);
ErrCode addRow(int first, int second, Matrix * a, Matrix * b);
ErrCode subRow(int first, int second, Matrix * a, Matrix * b);  // First - Second

ErrCode addMat(Matrix * a, Matrix * b);
ErrCode subMat(Matrix * a, Matrix * b);

ErrCode forwardPhase(int i, int j, Matrix * a, int * pivots, int * size);
ErrCode reversePhase(Matrix * a, int * pivots, int size);

Matrix * duplicate(Matrix * a);
ErrCode ref(Matrix * a, Matrix * b);
ErrCode rref(Matrix * a, Matrix * b);
ErrCode transpose(Matrix * a, Matrix * b);
ErrCode augment(Matrix * a, Matrix * b, Matrix * c);
ErrCode split(int a, int b, Matrix * a, Matrix * b);
ErrCode multMat(Matrix * a, Matrix * b, Matrix * c);
ErrCode hadamard(Matrix * a, Matrix * b, Matrix * c);
ErrCode mult(DT coefficient, Matrix * a, Matrix * b);
ErrCode invertMat(Matrix * a, Matrix * b);

DT dotProd(Matrix * a, Matrix * b, Matrix * c);
DT matNorm(Matrix * a, Matrix * b);

int getRows(Matrix * a);
int getCols(Matrix * a);

Matrix * linRegress(DT * x, DT * y, int length);

ErrCode colVector(int j, Matrix * a, Matrix * b);
ErrCode rowVector(int i, Matrix * a, Matrix * b);

ErrCode destroyMat(Matrix * a);

ErrCode printMat(Matrix * mat);

#endif