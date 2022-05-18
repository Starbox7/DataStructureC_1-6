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
//	student std1 = { "홍길동", 80, 70 }; //최소 32바이트
//	std1.avg = (std1.kor + std1.math) / 2;
//
//	student std2; //최소 32바이트
//	std2.kor = 100;
//	std2.math = 99;
//	//std2, name = "김범준";   //문자열 필드에는 배정 연산자(=) 사용이 불가하다.
//	strcpy(std2.name, "김범준");
//	std2.avg = (std2.kor + std2.math) / 2;
//
//	student *std3; //포인터 타입은 4바이트
//	std3 = (student*)malloc(sizeof(student)); //malloc() 함수 : stdlib에서 호출
//	std3->kor = 50;
//	std3->math = 70;
//	std3->avg = (std3->kor + std3->math) / 2;
//	strcpy(std3->name, "구자욱");
//
//	printf("학번 : 18114847, 이름 : 김범준\n");
//	printf("- 구조체 선언 \n\n");
//
//	printf(" 이 름\t 국 어\t 수 학\t 평 균\n");
//	printf("%5s\t %3d\t %3d\t %3.2f\n", std1.name, std1.kor, std1.math, std1.avg);
//	printf("%5s\t %3d\t %3d\t %3.2f\n", std2.name, std2.kor, std2.math, std2.avg);
//	printf("%5s\t %3d\t %3d\t %3.2f\n\n", std3->name, std3->kor, std3->math, std3->avg);
//
//	printf("std1의 크기 = %d\n", sizeof(std1));
//	printf("std3의 크기 = %d\n", sizeof(std3));
//}