#include<stdio.h>
#include<stdlib.h>

int  a,b,c,d;
int asd(int, int);


int main(void)
{
	printf("Enter basee and exponent:");
	scanf_s("%d %d", &a, &b);

	asd(a, b);
	system("pause");
	return 0;
}
int asd(int a,int b)
{
	d = a;
	for (c = 1; c < b; c++)
	{
		a = a * d;
	}
	printf("%d", a);
}