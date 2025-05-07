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

Below is a basic example.

```
include "matrix.h"

int main(){
	double arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	double arr2[] = {1, 2, 3};

	Matrix * mat1 = popMatSingle(3, 3, arr1);
	Matrix * mat2 = popMatSingle(3, 1, arr2);

	Matrix * rref_mat1 = rref(mat1);
	Matrix * mult_mat12 = multMat(mat1, mat2);

	printMat(rref_mat1);
	printMat(mult_mat12);

	destroymat(mat1);
	destroymat(mat2);
	destroymat(rref_mat1);
	destroymat(mult_mat12);

	return 0;
}
```

To find the usage of all the other functions, take a look at the documentation (doesn't exist yet! whoops).