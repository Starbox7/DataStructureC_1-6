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
//		printf("=== ���� ���� ����Ʈ ===\n");
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
//	printf("�й� : 18114847, �̸� : �����, 4/21\n");
//	printf("��� 5-4, ���� ���Ḯ��Ʈ \n");
//	C_ListNode* CList = NULL;
//	CList = Head;
//
//	CAdd_first(CList, 'A');
//	CAdd_first(CList, 'B');
//	CAdd_first(CList, 'C');
//
//	display(CList);
//
//	printf("Head�� �� : %d\n", Head);
//	puts("");
//
//	printf("���1�� ������ �ּ�: %d\n", &(Head->data));
//	printf("���1�� ������ �ʵ�: %c\n", Head->data);
//	printf("���1�� ��ũ �ʵ�: %d\n", Head->link);
//	puts("");
//
//	printf("���2�� ������ �ּ�: %d\n", &(Head->link->data));
//	printf("���2�� ������ �ʵ�: %c\n", Head->link->data);
//	printf("���2�� ��ũ �ʵ�: %d\n", Head->link->link);
//	puts("");
//
//	printf("���3�� ������ �ּ�: %d\n", &(Head->link->link->data));
//	printf("���3�� ������ �ʵ�: %c\n", Head->link->link->data);
//	printf("���3�� ��ũ �ʵ�: %d\n", Head->link->link->link);
//	puts("");
//
//	CDel_first(CList);
//	display(CList);
//}