#include<stdio.h>
int factorial(int);
int main()
{
	int num;
	printf("Please enter first number: ");
	scanf_s("%d", &num);//会溢位；
	printf("Its factorial is:%d", factorial(num));
}
int factorial(int num)
{
	if (num == 0)
	{
		return 1;
	}
	else
	{
		return num * factorial(num - 1);
	}
}
