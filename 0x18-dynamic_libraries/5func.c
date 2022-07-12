#include <stdio.h>

int sum(int a, int b)
{
	return a+b;
}
int div(int a, int b)
{
        return a/b;
}
int mul(int a, int b)
{
        return a*b;
}
int sub(int a, int b)
{
        return a-b;
}
int mod(int a, int b)
{
        return a%b;
}

void main()
{
	int a = 5, b = 5;
	int c,d,e,f,g;
	f = sum(a, b);
	g = div(a, b);
	c = mul(a, b);
	d = sub(a, b);
	e = mod(a, b);

	printf("Sum = %d\n", f);
	printf("Division = %d\n", g);
	printf("Multiplication = %d\n", c);
	printf("Subtraction = %d\n", d);
	printf("Mod = %d\n", e);
}
