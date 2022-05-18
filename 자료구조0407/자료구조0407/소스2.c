#include<stdio.h>

typedef struct element {
    int row;
    int col;
    int value;
}; element;

typedef struct sparse_matrix {
    int rows;
    int cols;
    int terms;
    element data[10];
}; sparse_matrix;

sparse_matrix A = { 4, 5, 4, {{0, 2, -2}, {0, 4, 9}, {2, 0, 10}, {3, 1, 4}} };

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
    printf("Mat_Info:%3d %3d %3d\n", A.rows, A.cols, A.terms);
    for (int i = 0; i < A.terms; i++)
        printf("Data[%d] %3d %3d %3d\n", i, A.data[i].row, A.data[i].col, A.data[i].value);
    puts("");
}

void main() {
    //printf("## 학번 : 18114821, 이름 : 권민수\n");
    transpose(A);

    printf("#### Sparse Matrix ####\n");
    sparse_print(A);

    printf("#### Transpos Matrix ####\n");
    sparse_print(B);

}