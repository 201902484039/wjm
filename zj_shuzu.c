#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int print(int* arr)
{
	int i = 0;
	for(i=0;i<9;i++)
	{
		printf("%d ", *arr+i);
	}
	printf("\n");
	
}
int print1(int arr[9])
{
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		printf("%d\n",arr[i] );
	}

}
int print2(int arr2[3][5])
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
}
int print3(int* p)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(p + i) + j);
		}
		printf("\n");
	}
}


int main()
{
	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
	int arr2[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7,} };
	print(arr);
	print1(arr);
	print2(arr2);
	print3(arr2);
	return 0;
}