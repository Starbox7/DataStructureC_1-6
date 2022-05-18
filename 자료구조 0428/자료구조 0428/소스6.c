//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char stack[10];
//int top = -1;
//
//void stack_empty() {
//    printf("\n*** Stack is Empty!!! ***\n");
//}
//
//void stack_full() {
//    printf("\n*** Stack is Full~~~ ***\n");
//}
//
//void push(char item) {
//    if (top >= 9) {
//        stack_full();
//        exit(1);
//    }
//    stack[++top] = item;
//}
//
//char pop() {
//    if (top == -1) {
//        stack_empty();
//        exit(1);
//    }
//    else return stack[top--];
//}
//
//char peek() {
//    if (top == -1) {
//        stack_empty();
//    }
//    return stack[top];
//}
//
//int priority(char op) {
//    switch (op) {
//    case'(': case ')': return 0;
//    case'+': case '-': return 1;
//    case'*': case '/': return 2;
//    }
//    return -1;
//}
//
//char infix_to_postfix(char exp[]) {
//    int i = 0;
//    char ch, top_op;
//    int len = strlen(exp);
//
//    for (i = 0; i < len; i++) {
//        ch = exp[i];
//        switch (ch) {
//        case '+':case '-':case '*':case '/':
//            while ((top != -1) && (priority(ch) <= priority(peek()))) {
//                printf("%2c", pop());
//            }
//            push(ch);
//            break;
//        case '(':
//            push(ch);
//            break;
//        case')':
//            top_op = pop();
//            while (top_op != '(') {
//                printf("%2c", top_op);
//                top_op = pop();
//            }
//            break;
//        default:
//            printf("%2c", ch);
//            break;
//        }
//    }
//    while (top != -1) {
//        printf("%2c", pop());
//    }
//    printf("\n");
//}
//
//void main() {
//    printf("�й� : 18114847, �̸� : �����, 5/12\n");
// 	printf("���� ǥ����� ���� ǥ������� ��ȯ�ϴ� ����\n\n");
//
//    //char exp[] = { "8/2-3+3*2" };
//    char exp[] = { "9/(2+1)*5-4*3" };  //�ǽ� #6-7��
//    int len = strlen(exp);
//
//    printf("����� : ");
//
//    for (int i = 0; i < len; i++) {
//        printf("%2c", exp[i]);
//    }
//    printf("\n");
//
//    printf("���� ǥ��� : ");
//
//    infix_to_postfix(exp);
//}