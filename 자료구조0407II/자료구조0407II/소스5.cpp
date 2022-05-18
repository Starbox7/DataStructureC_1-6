#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
	float coef;
	int expo;
	struct ListNode* link;
}ListNode;

typedef struct ListHead {
	ListNode* head;
}ListHead;

ListHead* createLinkedList(void) {
	ListHead* L;
	L = (ListHead*)malloc(sizeof(ListHead));
	L->head = NULL;
	return L;
}

void addLastNode(ListHead* L, float coef, int expo) {
	ListNode* newNode;
	ListNode* p;
	newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->coef = coef;
	newNode->expo = expo;
	newNode->link = NULL;
	if (L->head == NULL) {
		L->head = newNode;
		return;
	}
	else {
		p = L->head;
		while (p->link != NULL) {
			p = p->link;
		}
		p->link = newNode;
	}
}

void printPoly(ListHead* L) {
	ListNode* p = L->head;
	for (; p; p = p->link) {
		printf("%3.0fx^%d", p->coef, p->expo);
	}
}

void addPoly(ListHead* A, ListHead* B, ListHead* C) {
	ListNode* pA = A->head;
	ListNode* pB = B->head;
	float sum;

	while (pA && pB) {
		if (pA->expo == pB->expo) {
			sum = pA->coef + pB->coef;
			addLastNode(C, sum, pA->expo);
			pA = pA->link; pB = pB->link;
		}
		else if (pA->expo > pB->expo) {
			addLastNode(C, pA->coef, pA->expo);
			pA = pA->link;
		}
		else {
			addLastNode(C, pB->coef, pB->expo);
			pB = pB -> link;
		}
	}
	for (; pA != NULL; pA = pA->link)
		addLastNode(C, pA->coef, pA->expo);

	for (; pB != NULL; pB = pB->link)
		addLastNode(C, pB->coef, pB->expo);
}

void main(void) {

	printf("학번 : 18114847, 이름 : 김범준, 4/21\n");
	printf("살숩 5-5, 강의노트 34p, 다항식의 덧셈 \n");
	ListHead* A, * B, * C;

	A = createLinkedList();
	B = createLinkedList();
	C = createLinkedList();

	addLastNode(A, 3, 14);
	addLastNode(A, 2, 8);
	addLastNode(A, 1, 0);
	printf("\n A(x) = ");
	printPoly(A);

	addLastNode(B, 8, 14);
	addLastNode(B, -3, 10);
	addLastNode(B, 10, 6);
	//addLastNode(B, 1, 0);
	printf("\n B(x) = ");
	printPoly(B);

	addPoly(A, B, C);
	printf("\n C(x)=");
	printPoly(C);

	getchar();
}
