
//#include <stdio.h>
//#include <stdlib.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//
//typedef struct ListNode {
//	int data; 
//	struct ListNode * link;
//} ListNode;
//
//ListNode * Head = NULL; 
//int del_value = 'NULL';
//
//void Add_first(ListNode* list, int x) {
//	ListNode* newnode;
//	newnode = (ListNode*)malloc(sizeof(ListNode));
//
//	newnode->data = x;
//
//	if (Head == NULL) {
//		newnode->link = NULL;
//		Head = newnode;
//	}
//	else {
//		newnode->link = Head;
//		Head = newnode;
//	}
//}
//
//void Add_last(ListNode* list, int x) {
//	ListNode* newnode, * temp;
//	newnode = (ListNode*)malloc(sizeof(ListNode));
//	newnode->data = x;
//	newnode->link = NULL;
//	temp = Head;
//	while (temp->link != NULL) {
//		temp = temp->link;
//	}
//	temp->link = newnode;
//}
//
//void Del_first(ListNode* list) {
//	ListNode* target = NULL;
//
//	if (Head == NULL)
//		printf("List is Empty!\n");
//	else {
//		target = Head;
//		del_value = target->data;
//		Head = target->link;
//	}
//	free(target);
//}
//
//void Del_last(ListNode* list) {
//	ListNode* target, * pre;
//
//	pre = Head;
//	target = Head->link;
//	if (target == NULL) {
//		del_value = pre->data;
//		Head = NULL;
//		return;
//	}
//
//	while (target->link != NULL) {
//		pre = target;
//		target = target->link;
//	}
//	del_value = target->data;
//	pre->link = NULL;
//
//	free(target);
//}
//
//void Del_item(ListNode* list, int x) {
//	ListNode* pt1, * pt2, * item;
//	pt1 = Head;
//	pt2 = pt1->link;
//	item = pt1;
//	if (item->data == x)
//		Head = pt1->link;
//	else {
//		while (pt2 != NULL) {
//			if (pt2->data == x) {
//				item = pt2;
//				pt1->link = pt2->link;
//			}
//			pt1 = pt2;
//			pt2 = pt2->link;
//		}
//	}
//	del_value = item->data;
//	free(item);
//} 
//
//void Reverse(ListNode* list) {
//	ListNode* p1, * p2, * p3;
//	p1 = Head; p2 = NULL; p3 = NULL;
//	while (p1 != NULL) {
//		p3 = p2;
//		p2 = p1;
//		p1 = p1->link;
//		p2->link = p3;
//	}
//	Head = p2;
//}
//
//void display(ListNode* list) {
//	printf("# Linked List wt : ");
//	list = Head;
//	while (list != NULL) {
//		printf(" %d ", list->data);
//		list = list->link;
//	}
//	printf("\n ");
//}
//
//void main() {
//	ListNode* List_1 = NULL;// ���鸮��Ʈ(List_1) ���� 
//	List_1 = Head;
//
//	Add_first(List_1, 10); // List_1 �� �տ� B ���� 
//	display(List_1);
//
//	Add_last(List_1, 20); // Uist 1 �������� C ���� 
//	display(List_1);
//
//	Add_last(List_1, 30); // List1 �������� D ���� 
//	display(List_1);
//
//	Add_first(List_1, 40); // List - 1 �� �տ� E ���� 
//	display(List_1);
//
//	/*Add_last(List_1, 'E); // List 1 �� �տ� B ���� 
//	display(List_1);*/
//
//	printf("\n == ���Ḯ��Ʈ�� ������ ���� ==\n");
//	Reverse(List_1); // ������ ���� �Լ� ȣ�� 
//	display(List_1);
//
//	printf("\n == ù ��° ��� ���� == \n");
//	Del_first(List_1);
//	display(List_1);
//	printf("* del_value : %c \n", del_value);
//
//	printf("\n == 10 ��� ���� == \n");
//	Del_item(List_1, 10);
//	display(List_1);
//	printf("* del_value : %d \n", del_value);
//
//	printf("\n == 30 ��� ���� ==  \n");
//	Del_item(List_1, 30);
//	display(List_1);
//	printf("* del-value : %d \n", del_value);
//
//	printf("\n == 20 ��� ���� == \n");
//	Del_item(List_1, 20);
//	display(List_1);
//	printf("* del_value : %d \n", del_value);
//
//	printf("\n == Add_last ('+') �� ���Ḯ��Ʈ == \n");
//	Add_last(List_1, '+');
//	display(List_1);
//}