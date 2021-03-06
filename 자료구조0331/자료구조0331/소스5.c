#include <stdio.h>

typedef struct element {
	int row;
	int col;
	int value;
}element;

typedef struct sparse_matrix {
	int rows;
	int cols;
	int terms;
	element data[7];
}sparse_matrix;

sparse_matrix A = { 6,5,7,{{0,1,-2},{0,4,9},{1,4,5},{2,2,-7},{3,0,10},{3,2,3},{5,1,1}} };

sparse_matrix B;

void transpose(sparse_matrix A) {
	int i, j, temp;
	B.rows = A.cols;
	B.cols = A.rows;
	B.terms = A.terms;

	if (A.terms > 0) {
		temp = 0;
		for (i = 0; i < A.cols; i++)
			for (j = 0; j < A.terms; j++)
				if (A.data[j].col == i) {
					B.data[temp].row = A.data[j].col;
					B.data[temp].col = A.data[j].row;
					B.data[temp].value = A.data[j].value;
					temp++;
				}
	}
}

void sparse_print(sparse_matrix A) {
	printf("Mat_info:%3d   %3d   %3d\n", A.rows, A.cols, A.terms);
	for (int i = 0; i < A.terms; i++)
		printf("Data[%d]  %3d %3d %3d\n", i, A.data[i].row, A.data[i].col, A.data[i].value);
	puts("");
}

void main() {
	transpose(A);

	printf("#####  Sparse matrix  ##### \n");
	sparse_print(A);

	printf("#####  Transpose matrix  ##### \n");
	sparse_print(B);
}
