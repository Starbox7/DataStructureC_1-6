//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct C_ListNode {
//	char data;
//	struct C_ListNode *link;
//}C_ListNode;
//
//C_ListNode *Head = NULL;
//
//void display(C_ListNode* list) {
//	if (Head == NULL)
//		printf("** Circular Linked List is Empty!! **\n");
//	else {
//		printf("=== 원형 연결 리스트 ===\n");
//		list = Head;
//		printf(" %c ", list->data);
//		while (list->link != Head) {
//			list = list->link;
//			printf(" %c ", list->data);
//		}
//		printf("\n");
//	}
//}
//
//void CAdd_first(C_ListNode* list, char x) {
//	C_ListNode* newnode, * temp;
//	newnode = (C_ListNode*)malloc(sizeof(C_ListNode));
//	newnode->data = x;
//	
//	if (Head == NULL) {
//		newnode->link = newnode;
//		Head = newnode;	
//	}
//	else {
//		temp = Head;
//		while (temp->link != Head)
//			temp = temp->link;
//		newnode->link = Head;
//		temp->link = newnode;
//		Head = newnode;
//	}
//}
//
//void CDel_first(C_ListNode* list) {
//	C_ListNode* target = Head, * temp = Head;
//
//	if (Head == NULL)
//		display(list);
//	else if (target->link == Head)
//		Head = NULL;
//	else {
//		while (temp->link != Head)
//			temp = temp->link;
//		Head = target->link;
//		temp->link = Head;
//	}
//	free(target);
//}
//
//int main() {
//	printf("학번 : 18114847, 이름 : 김범준, 4/21\n");
//	printf("살숩 5-4, 원형 연결리스트 \n");
//	C_ListNode* CList = NULL;
//	CList = Head;
//
//	CAdd_first(CList, 'A');
//	CAdd_first(CList, 'B');
//	CAdd_first(CList, 'C');
//
//	display(CList);
//
//	printf("Head의 값 : %d\n", Head);
//	puts("");
//
//	printf("노드1의 데이터 주소: %d\n", &(Head->data));
//	printf("노드1의 데이터 필드: %c\n", Head->data);
//	printf("노드1의 링크 필드: %d\n", Head->link);
//	puts("");
//
//	printf("노드2의 데이터 주소: %d\n", &(Head->link->data));
//	printf("노드2의 데이터 필드: %c\n", Head->link->data);
//	printf("노드2의 링크 필드: %d\n", Head->link->link);
//	puts("");
//
//	printf("노드3의 데이터 주소: %d\n", &(Head->link->link->data));
//	printf("노드3의 데이터 필드: %c\n", Head->link->link->data);
//	printf("노드3의 링크 필드: %d\n", Head->link->link->link);
//	puts("");
//
//	CDel_first(CList);
//	display(CList);
//}