#define _CRT__SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int *insertnum(int *, int);
void insertarr(int *);
int main()
{
	int arr[5] = { 4,5,6,7,8 };
	int n;
	printf("The original arr is: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\nPlease enter a number to insert: ");
	scanf_s("%d",&n);
	int *new=insertnum(arr, n);
	insertarr(new);
	free(new);
	return 0;
}
int *insertnum(int *arr, int n)
{
	int empty;
	int *new= (int *)malloc(6 * sizeof(int));
	if (new == NULL)
	{
		printf("调用堆区失败");
		return NULL;
	}
	for (int i = 0; i < 5; i++)
	{
		new[i] = arr[i];
	}
	new[5] = n;
	for (int k = 0; k < 6; k++)
	{
		for (int i = k+1; i < 6;i++)
		{
			if (new[k] > new[i])
			{
				empty = new[k];
				new[k] = new[i];
				new[i] = empty;
			}
		}
	}
	return new;
}
void insertarr(int *arr)
{
	for (int i = 0; i < 6; i++)
	{
		printf("%d\t", arr[i]);
	}
}