#include<stdio.h>
#include<stdlib.h>

long f[2] = { 0,1 };
int a, i;
long c;

int main(void)
{	
	printf("Enter n:");
	scanf_s("%d", &a);
	asd(a);

	system("pause");
	return 0;
}
int asd(int a)
{
	if (a > 1)
	{
		printf("0 1 ");
	}
	else if (a == 1)
	{
		printf("0 ");
	}
	for (i = 2; i < a; i++)
	{
		c = f[0] + f[1];
		printf("%d ", c);
		if (i % 2 == 1)
		{
			f[1] = c;
		}
		else
		{
			f[0] = c;
		}
	}
	printf("\n");
}