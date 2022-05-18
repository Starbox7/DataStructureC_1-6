//#include <stdio.h>

//int main() {
//	int i, n, sum=0;
//
//	printf("학번 : 18114847, 이름 : 김범준, 5/12\n");
//	printf("스택의 응용 부프로그램 호출 예제\n\n");
//
//	printf("양의 정수를 입력하세요 : ");
//	scanf_s("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//		sum += i;
//	}
//
//	printf("1부터 %d 까지의 합은 = %d\n", n, sum);
//}


//int sum(int n) {    //재귀 호출 함수
//	if (n <= 1)
//		return 1;
//	else
//		return n + sum(n - 1);
//}
//
//
//int main() {
//	int i, n, total=0;
//	
//	printf("학번 : 18114847, 이름 : 김범준, 5/12\n");
//	printf("스택의 응용 부프로그램 호출 예제(재귀호출)\n\n");
//
//	printf("양의 정수를 입력하세요 : ");
//	scanf_s("%d", &n);
//
//	total = sum(n);
//
//	printf("1부터 %d 까지의 합은 = %d\n", n, total);
//}