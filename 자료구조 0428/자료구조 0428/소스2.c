//#include <stdio.h>
//
//char stack[10];
//int top = -1;
//
//void push(char item) {
//	if (top >= 9) {
//		printf("\n Stack is FULL ! \n");
//		return;
//	}
//	else stack[++top] = item;
//}
//
//int pop() {
//	if (top == -1) {
//		printf("\n Stack is Empty !\n");
//		return 0;
//	}
//	else return stack[top--];
//}
//
//int del() {
//	if (top == -1) {
//		printf("\n Stack is Empty !\n");
//		exit(1);
//	}
//	else top--;
//}
//
//int peek() {
//	if (top == -1) {
//		printf("\n Stack is Empty !\n");
//		exit(1);
//	}
//	else return stack[top];
//}
//
//void printStack() {
//	int i;
//	printf("\n STACK [ ");
//	for (i = 0; i <= top; i++)
//		printf("%c ", stack[i]);
//	printf("] ");
//}
//
//
//int main() {
//	printf("�й� : 18114847, �̸� : �� �� ��, 0428\n");
//	printf("�ǽ� #6-2, �迭�� ������ ����\n\n");
//
//	char item;
//
//	printf("== ������ ���� ��� ==\n");
//	printStack();
//
//	printf("== push(A) ==\n");
//	push('A');
//	printStack();
//
//	printf("== push(D) ==\n");
//	push('B');
//	printStack();
//
//	printf("== push(C) ==\n");
//	push('C');
//	printStack();
//
//
//	printf("== pop() ==\n");
//	item = pop();
//	printStack();
//	printf("\t pop top => %c\n", item);
//
//	printf("== pop() ==\n");
//	item = pop();
//	printStack();
//	printf("\t pop top => %c\n", item);
//
//	printf("== push(D) ==\n");
//	push('D');
//	printStack();
//
//	printf("== push(D) ==\n");
//	push('B');
//	printStack();
//
//	printf("== push(C) ==\n");
//	push('C');
//	printStack();
//
//	printf("== pop() ==\n");
//	item = pop();
//	printStack();
//	printf("\t pop top => %c\n", item);
//
//	printf("== pop() ==\n");
//	item = pop();
//	printStack();
//	printf("\t pop top => %c\n", item);
//
//	printf("== pop() ==\n");
//	item = pop();
//	printStack();
//	printf("\t pop top => %c\n", item);
//
//	printf("== pop() ==\n");
//	item = pop();
//	printStack();
//	printf("\t pop top => %c\n", item);
//
//}