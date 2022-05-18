/*#include <stdio.h>
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MAX_DGREE 101

typedef struct {
	int degree;
	float coef[MAX_DGREE];
}polynomial;

polynomial poly_add1(polynomial A, polynomial B) {
	polynomial C;
	int Apos = 0, Bpos = 0, Cpos = 0;
	int degree_a = A.degree;
	int degree_b = B.degree;
	C.degree = MAX(A.degree, B.degree);

	while (Apos <= A.degree && Bpos <= B.degree) {
		if (degree_a > degree_b) {
			C.coef[Cpos++] = A.coef[Apos++];
			degree_a--;
		}
		else if (degree_a == degree_b) {
			C.coef[Cpos++] = A.coef[Apos++] + B.coef[Bpos++];
			degree_a--;
			degree_b--;
		}
		else
		{
			C.coef[Cpos++] = B.coef[Bpos++];
			degree_b--;
		}
	}
	return C;
}

void printPoly(polynomial P) {
	int i, degree;
	degree = P.degree;

	for (i = 0; i <= P.degree; i++) {
		printf("%3.0fx^%d", P.coef[i], degree--);
	}
	printf("\n");
}

void main() {
	polynomial a = { 5, {3, 0, -2, 0, 7, 0} };
	polynomial b = { 4, {1, 5, 0, -3, 1} };

	polynomial c;
	c = poly_add1(a, b);

	printf("ÇÐ¹ø : 18114847, ÀÌ¸§ : ±è¹üÁØ\n*´ÙÇ×½ÄÀÇ µ¡¼À\n");

	printf("\n A(x)="); printPoly(a);
	printf("\n B(x)="); printPoly(b);
	printf("\n C(x)="); printPoly(c);

	//getchar();
}
*/

	