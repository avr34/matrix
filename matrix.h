#include <stdio.h>
#include <stdlib.h>

typedef struct matrix Matrix;

double matSqrt(double a);

Matrix * initMat(int Rows, int Cols);
Matrix * initIdentity(int width);
Matrix * popMatSingle(int Rows, int Cols, double * a);
Matrix * popMat(int Rows, int Cols, double * a);
int insertVal(double value, int i, int j, Matrix * a);
double getVal(int i, int j, Matrix * a);
double * getMatSingle(Matrix * a);
double ** getMat(Matrix * a);

int swapRow(int first, int second, Matrix * a);
int multRow(double coefficient, int row, Matrix * a);
int addRow(int first, int second, Matrix * a);
int subRow(int first, int second, Matrix * a); // In words, "Second = First row subtracted from second."

Matrix * addMat(Matrix * a, Matrix * b);
Matrix * subMat(Matrix * a, Matrix * b);

void forwardPhase(int i, int j, Matrix * a, int * pivots, int * size);
void reversePhase(Matrix * a, int * pivots, int size);

Matrix * duplicate(Matrix * a);
Matrix * ref(Matrix * a);
Matrix * rref(Matrix * a);
Matrix * transpose(Matrix * a);
Matrix * augment(Matrix * a, Matrix * b);
Matrix * split(Matrix * a, int b, int c);
Matrix * multMat(Matrix * a, Matrix * b);
Matrix * hadamard(Matrix * a, Matrix * b);
Matrix * mult(double coefficient, Matrix * a);
Matrix * invertMat(Matrix * a);

double dotProd(Matrix * a, Matrix * b);
double matNorm(Matrix * a);

int getRows(Matrix * a);
int getCols(Matrix * a);

Matrix * linRegress(double * x, double * y, int length);
Matrix ** QR(Matrix * a);

Matrix * colVector(int j, Matrix * a);
Matrix * rowVector(int i, Matrix * a);

int destroyMat(Matrix * a);

void printMat(Matrix * mat);
