#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void input1(int *);
int *input2(int);
void output(int,int *);
void rank(int,int *);
int main()
{
	int n;
	input1(&n);
	int *arr=input2(n);
	if (arr == NULL)
	{
		printf("调用堆区失败");
		return 1;
	}
	rank(n,arr);
	output(n,arr);
	free(arr);
	return 0;
}
void input1(int *n)
{
	printf("please enter n: ");
	scanf("%d", n);
}
int *input2(int n)
{
	 int *arr = (int*)malloc(n*sizeof(int));
	 if (arr == NULL)
	 {
		 return NULL;
	 }
	printf("please input each numbers: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	return arr;
}
void rank(int n, int *arr)
{
	int empty;
	for (int k = 0; k < n - 1; k++)
	{
		for (int i=k+1; i < n; i++)
		{
			if (arr[k] > arr[i])
			{
				empty = arr[k];
				arr[k] = arr[i];
				arr[i] = empty;
			}
		}
	}
}
void output(int n, int *arr)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
}//燃尽了，孩子们。。。。。。。

