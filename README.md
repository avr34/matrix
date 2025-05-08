# matrix

matrix is a simple C library that can be used to perform matrix operations. Some of its capabilities are:

- Standard matrix-vector, vector-matrix, and matrix-matrix <u>multiplications</u>,
- Matrix <u>addition</u> and <u>subtraction</u>,
- Matrix <u>splitting</u> and <u>augmentation</u>,
- <u>Row-echelon form</u> and <u>reduced row-echelon form</u> calculations,
- Matrix <u>inversion</u> and <u>transposing</u>,
- <u>Linear regression</u>,
- And <u>hadamard products</u>, useful for backpropagation.

features
--------

- No external dependencies, just include `matrix.c` when compiling and you're set!
- Written in C99
- Multithreading and python bindings hopefully coming soon!

basic example
--------------

Below is a basic example, accompanied by its output.

```
/* test.c */
#include "matrix.h"

int main(){
    double arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    double arr2[] = {1, 2, 3};

    Matrix * mat1 = popMatSingle(3, 3, arr1);
    Matrix * mat2 = popMatSingle(3, 1, arr2);

    Matrix * rref_mat1 = rref(mat1);
    Matrix * mult_mat12 = multMat(mat1, mat2);

    printMat(mat1);
    printMat(mat2);
    printMat(rref_mat1);
    printMat(mult_mat12);

    destroyMat(mat1);
    destroyMat(mat2);
    destroyMat(rref_mat1);
    destroyMat(mult_mat12);

    return 0;
}
```

Compile and run, and this is what we get:

```
$ gcc test.c matrix.c -o test -lm
$ ./test
|* 1.000000 2.000000 3.000000 *|
|* 4.000000 5.000000 6.000000 *|
|* 7.000000 8.000000 9.000000 *|

|* 1.000000 *|
|* 2.000000 *|
|* 3.000000 *|

|* 1.000000 0.000000 -1.000000 *|
|* -0.000000 1.000000 2.000000 *|
|* 0.000000 0.000000 0.000000 *|

|* 14.000000 *|
|* 32.000000 *|
|* 50.000000 *|
```

To find the usage of all the other functions, take a look at the documentation (doesn't exist yet! whoops).
