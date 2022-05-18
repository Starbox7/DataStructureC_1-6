//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef char element;
//
//typedef struct stackNode {
//    element data;
//    struct stackNode* link;
//}stackNode;
//
//stackNode* top;
//
//void push(element item) {
//    stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
//    temp->data = item;
//    temp->link = top;
//    top = temp;
//}
//
//element pop() {
//    element item;
//    stackNode* temp = top;
//    if (top == NULL) {
//        printf("\n Stack is empty !\n");
//        return 0;
//    }
//    else {
//        item = temp->data;
//        top = temp->link;
//        free(temp);
//        return item;
//    }
//}
//
//element peek() {
//    element item;
//    if (top == NULL) {
//        printf("\n Stack is empty !\n");
//        return 0;
//    }
//    else {
//        item = top->data;
//        return item;
//    }
//}
//
//void del() {
//    stackNode* temp;
//    if (top == NULL) {
//        printf("\n Stack is empty !\n");
//    }
//    else {
//        temp = top;
//        top = top->link;
//        free(temp);
//    }
//}
//
//void printStack() {
//    stackNode* p = top;
//    printf("\n STACK [ ");
//    while (p) {
//        printf("%c ", p->data);
//        p = p->link;
//    }
//    printf("] ");
//}
//
//void main(void) {
//    printf("학번 : 18114847 이름 : 김 범 준\n");
//    printf("실습#6-3, 연결리스트로 구현된 스택\n\n");
//
//    element item;
//    top = NULL;
//
//    printStack(); 
//    push('A');
//    printStack(); 
//    push('B');
//    printStack(); 
//    push('C');
//
//    item = pop();
//    printStack();
//    printf("\t pop top => %c\n", item);
//
//    item = pop();
//    printStack();
//    printf("\t pop top => %c\n", item);
//
//    printStack(); 
//    push('D');
//
//    item = pop();
//    printStack();
//    printf("\t pop top => %c\n", item);
//
//    item = pop();
//    printStack();
//    printf("\t pop top => %c\n", item);
//
//}