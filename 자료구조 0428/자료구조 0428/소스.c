//#include <stdio.h>
//
//int stack[10];
//int top = -1;
//
//void push(int item) {
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
//		printf("%d ", stack[i]);
//	printf("] ");
//}
//
//
//int main() {
//	printf("학번 : 18114847, 이름 : 김 범 준, 0428\n");
//	printf("실습 #6-1, 배열로 구현된 스택\n\n");
//
//	int item;
//
//	printf("== 공백의 스택 출력 ==\n");
//	printStack();
//
//	printf("== push(1) ==\n");
//	push(1);
//	printStack();
//
//	printf("== push(2) ==\n");
//	push(2);
//	printStack();
//
//	printf("== push(3) ==\n");
//	push(3);
//	printStack();
//
//	printf("== peek() ==\n");
//	item = peek();
//	printStack();
//	printf("peek top => %d\n", item);
//
//	printf("== del() ==\n");
//	del();
//	printStack();
//
//	printf("== pop() ==\n");
//	item = pop();
//	printStack();
//	printf("\t pop top => %d\n", item);
//
//	printf("== pop() ==\n");
//	item = pop();
//	printStack();
//	printf("\t pop top => %d\n", item);
//
//	printf("== pop() ==\n");
//	pop();
//}