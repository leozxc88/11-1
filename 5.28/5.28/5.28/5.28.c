#include<stdio.h>
#include<stdlib.h>

int asd(int);
int main(void)
{
	char a;
	printf("Enter an alphabet:");
	scanf_s("%c", &a);
	asd(a);
	system("pause");
	return 0;
}

int asd(int a)
{
	printf("%c\n", a + 0X20);
}