void main()
{
	int x, * p;
	p = &x;
	x = 1;
	*p = 2;
	printf("%d\n", x);
}