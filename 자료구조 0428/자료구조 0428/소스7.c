#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

#define MAX_STACK_SIZE 100
#define ROW_SIZE 4
#define COL_SIZE 5
#define TRUE 1
#define FALSE 0;

typedef struct {
    int row;
    int col;
    int dir;
}element;
element stack[MAX_STACK_SIZE];

int top = -1;

typedef struct {
    int vert;
    int horiz;
}offsets;
offsets move[8];

void path(void);
void stack_full();
element stack_empty();

int mark[ROW_SIZE + 2][COL_SIZE + 2];
/* int maze[ROW_SIZE + 2][COL_SIZE + 2] = {   // 미로를 구성하는 배열 (바깥테두리는 모두 1로 표시)
      {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, {1,0,1,0,0,0,1,1,0,0,0,1,1,1,1,1,1}, {1,1,0,0,0,1,1,0,1,1,1,0,0,1,1,1,1},
      {1,0,1,1,0,0,0,0,1,1,1,1,0,0,1,1,1}, {1,1,1,0,1,1,1,1,0,1,1,0,1,1,0,0,1}, {1,1,1,0,1,0,0,1,0,1,1,1,1,1,1,1,1},
      {1,0,0,1,1,0,1,1,1,0,1,0,0,1,0,1,1}, {1,0,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1}, {1,0,0,1,1,0,1,1,0,1,1,1,1,1,0,1,1},
      {1,1,1,0,0,0,1,1,0,1,1,0,0,0,0,0,1}, {1,0,0,1,1,1,1,1,0,0,0,1,1,1,1,0,1}, {1,0,1,0,0,1,1,1,1,1,0,1,1,1,1,0,1},
      {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} }; */

int maze[ROW_SIZE + 2][COL_SIZE + 2] = {   // 미로를 구성하는 배열 (바깥테두리는 모두 1로 표시)
      {1,1,1,1,1,1,1,}, {1,0,0,1,1,1,1}, {1,0,1,1,0,1,1},
      {1,0,0,1,0,1,1}, {1,1,1,0,0,0,1}, {1,1,1,1,1,1,1} };

int EXIT_ROW = ROW_SIZE, EXIT_COL = COL_SIZE;

void add(int* top, element item) {
    if (*top >= MAX_STACK_SIZE - 1) {
        stack_full();
        return;
    }
    stack[++(*top)] = item;
}

element del(int* top) {
    if (*top == -1)
        return stack_empty();
    return stack[(*top)--];
}

void main(void) {
    printf("학번 : 18114847, 이름 : 김범준, 5/12\n");
	printf("미로찾기\n\n");

    int i, j;
    for (i = 0; i <= ROW_SIZE + 1; i++)
        for (j = 0; j <= COL_SIZE + 1; j++) mark[i][j] = 0;
    move[0].vert = -1;   move[0].horiz = 0;
    move[1].vert = -1;   move[1].horiz = 1;
    move[2].vert = 0;   move[2].horiz = 1;
    move[3].vert = 1;   move[3].horiz = 1;
    move[4].vert = 1;   move[4].horiz = 0;
    move[5].vert = 1;   move[5].horiz = -1;
    move[6].vert = 0;   move[6].horiz = -1;
    move[7].vert = -1;   move[7].horiz = -1;

    path();
}

void path(void) {
    int i, row, col, next_row, next_col, dir, found = FALSE;

    element position;

    mark[1][1] = 1;
    top = 0;
    stack[0].row = 1;
    stack[0].col = 1;
    stack[0].dir = 1;

    while (top > -1 && !found) {
        position = del(&top);
        row = position.row;
        col = position.col;
        dir = position.dir;
        while (dir < 8 && !found) {
            next_row = row + move[dir].vert;
            next_col = col + move[dir].horiz;

            if (next_row == EXIT_ROW && next_col == EXIT_COL)found = TRUE;

            else if (!maze[next_row][next_col] && !mark[next_row][next_col]) {
                mark[next_row][next_col] = 1;
                position.row = row;
                position.col = col;
                position.dir = ++dir;
                add(&top, position);
                row = next_row;
                col = next_col;
                dir = 0;
            }
            else ++dir;
        }
    }
    if (found) {
        printf("The path is:\n");
        printf(" row col\n");
        for (i = 0; i <= top; i++) {
            printf(" <%3d,%3d>", stack[i].row, stack[i].col);
            if ((i + 1) % 6 == 0)printf("\n");
        }
        printf(" <%3d,%3d> ", row, col);
        printf(" <%3d,%3d>\n", EXIT_ROW, EXIT_COL);
    }
    else printf(" The maze does not have a path\n");
}

void stack_full() {
    fprintf(stderr, "Stack is full !! \n");
}

element stack_empty() {
    element item;
    item.col = -1;
    item.dir = -1;
    item.row = -1;
    fprintf(stderr, "Stack is empty !! \n");
    return item;
}