#include<stdio.h>
#include<stdlib.h>

int e;
int main(void)
{
	int a, b;
	printf("块ㄢ,т程そ计:");
	scanf_s("%d %d", &a, &b);
	asd(a, b);
	printf("%d琌ㄢ计程そ计!\n", e);
	system("pause");
	return 0;
}
int asd(int a,int b)
{
	int  c, i;
	if (a > b)
	{
		for (i = 1; i <= b; i++)
		{
			if (a%i == 0 && b%i == 0)
			{
				c = i;
			}
		}
		e = a * b / c;
	}
	else
	{
		for (i = 1; i <= a; i++)
		{
			if (a%i == 0 && b%i == 0)
			{
				c = i;
			}
		}
		e = a * b / c;
	}
}