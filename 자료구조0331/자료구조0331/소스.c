//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//void main() {
//	typedef struct
//	{
//		char name[20];
//		int kor;
//		int math;
//		float avg;
//	} student;
//
//	student std1 = { "ȫ�浿", 80, 70 }; //�ּ� 32����Ʈ
//	std1.avg = (std1.kor + std1.math) / 2;
//
//	student std2; //�ּ� 32����Ʈ
//	std2.kor = 100;
//	std2.math = 99;
//	//std2, name = "�����";   //���ڿ� �ʵ忡�� ���� ������(=) ����� �Ұ��ϴ�.
//	strcpy(std2.name, "�����");
//	std2.avg = (std2.kor + std2.math) / 2;
//
//	student *std3; //������ Ÿ���� 4����Ʈ
//	std3 = (student*)malloc(sizeof(student)); //malloc() �Լ� : stdlib���� ȣ��
//	std3->kor = 50;
//	std3->math = 70;
//	std3->avg = (std3->kor + std3->math) / 2;
//	strcpy(std3->name, "���ڿ�");
//
//	printf("�й� : 18114847, �̸� : �����\n");
//	printf("- ����ü ���� \n\n");
//
//	printf(" �� ��\t �� ��\t �� ��\t �� ��\n");
//	printf("%5s\t %3d\t %3d\t %3.2f\n", std1.name, std1.kor, std1.math, std1.avg);
//	printf("%5s\t %3d\t %3d\t %3.2f\n", std2.name, std2.kor, std2.math, std2.avg);
//	printf("%5s\t %3d\t %3d\t %3.2f\n\n", std3->name, std3->kor, std3->math, std3->avg);
//
//	printf("std1�� ũ�� = %d\n", sizeof(std1));
//	printf("std3�� ũ�� = %d\n", sizeof(std3));
//}