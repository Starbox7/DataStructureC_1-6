//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct ListNode {
//	char data[10];
//	struct ListNode* link;
//}ListNode;
//
//void main() {
//	printf("�й� : 18114847, �̸� : �����\n\n");
//	ListNode* pt1, * pt2, * pt3, * pt4;
//	ListNode* list;
//
//	pt1 = (ListNode*)malloc(sizeof(ListNode));
//	pt2 = (ListNode*)malloc(sizeof(ListNode));
//	pt3 = (ListNode*)malloc(sizeof(ListNode));
//	/*pt4 = (ListNode*)malloc(sizeof(ListNode));*/
//
//	strcpy(pt1->data, "C���");
//	pt1->link = NULL;
//	//pt2->data = "�� ��";
//	strcpy(pt2->data, "�� ��");
//	pt2->link = NULL;
//	//pt3->data = "���̽�";
//	strcpy(pt3->data, "���̽�");
//	pt3->link = NULL;
//	/*pt4->data = 'A';
//	pt4->link = NULL;*/
//
//	printf("== �������� 4���� ��� ==\n");
//	printf("pt1=%d, pt1->data=%10s, pt1->link=%d\n", pt1, pt1->data, pt1->link);
//	printf("pt2=%d, pt2->data=%10s, pt2->link=%d\n", pt2, pt2->data, pt2->link);
//	printf("pt3=%d, pt3->data=%10s, pt3->link=%d\n", pt3, pt3->data, pt3->link);
//	/*printf("pt4=%d, pt4->data=%c, pt4->link=%d\n", pt4, pt4->data, pt4->link);*/
//
//	pt1->link = pt2;
//	pt2->link = pt3;
//	/*pt3->link = pt4;*/
//
//	printf("== ����� 4���� ��� ==\n");
//	printf("pt1=%d, pt1->data=%10s, pt1->link=%d\n", pt1, pt1->data, pt1->link);
//	printf("pt2=%d, pt2->data=%10s, pt2->link=%d\n", pt2, pt2->data, pt2->link);
//	printf("pt3=%d, pt3->data=%10s, pt3->link=%d\n", pt3, pt3->data, pt3->link);
//	/*printf("pt4=%d, pt4->data=%c, pt4->link=%d\n", pt4, pt4->data, pt4->link);*/
//
//	list = pt1;
//	printf("\n== ���� ����Ʈ�� ���� ==\n");
//	while (list != NULL){
//		printf(" %10s ", list->data);
//		list = list->link;
//		}
//	printf("\n");
//
//	free(pt1);
//	free(pt2);
//	free(pt3);
//	/*free(pt4);*/
//}