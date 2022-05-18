/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char stack[15];
int top = -1;

void stack_empty() {
    printf("\n***Stack is Empty!!! ***\n");
}

void stack_full() {
    printf("\n*** Stack is Full~~~ ***\n");
}

void push(char item) {
    if (top >= 9) {
        stack_full();
        exit(1);
    }
    stack[++top] = item;
}

char pop() {
    if (top == -1) {
        stack_empty();
        exit(1);
    }
    else return stack[top--];
}

char peek() {
    if (top == -1) {
        stack_empty();
    }
    return stack[top];
}

void print_stack() {
    int i;
    printf("\n Stack : ");
    for (i = 0; i <= top; i++) {
        printf("%3c", stack[i]);
    }
    printf("\n");
}

int eval(char exp[]) {
    int item1, item2, value, i = 0;
    int len = strlen(exp);
    char ch;

    for (i = 0; i < len; i++) {
        ch = exp[i];
     
        if (ch != '+' && ch != '-' && ch != '*' && ch != '/') {
            value = ch - '0';
            printf("01 %d, %d \n", ch, value);
            push(value);
        }
        else {
            item2 = pop();
            item1 = pop();
            switch (ch) {
            case '+': push(item1 + item2); break;
            case '-': push(item1 - item2); break;
            case '*': push(item1 * item2); break;
            case '/': push(item1 / item2); break;
            }
           
        }
        
    }
   
    return pop();
}


void main() {
    printf("�й� : 18114847, �̸� : �����, 5/12\n");
    printf("������ �̿��� ���� ǥ��� ����\n\n");

    int result;
    printf("����ǥ����� 921+/5*43*-\n");
    result = eval("921+/5*43*-");
    printf("������� %d\n", result);
}*/