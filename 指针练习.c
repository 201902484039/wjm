#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j <line-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");	 
//	}
//	//打印下半部分
//	for (i = 0; i < line + 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*(line-i)+1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		
//	}
//	return 0;
//}
//void sort(char *str)
//{
//	assert(str);
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	while (left<right)
//	{
//		int tep = *left;
//		*left =*right;
//		*right = tep;
//		left++;
//		right--;
//
//	}
//
//}
//int main()
//{
//	int a[256] = { 0 };
//	gets(a);
//	sort(a);
//	printf("逆序后：%s", a);
//	return 0;
//
//}
//喝汽水，一元一瓶，两空瓶换一瓶，20元能喝几瓶
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//买回来汽水
//	total = money;
//	empty = money;
//	//换回来汽水
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//
//	return 0;
//}
void print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("\n");
}
void move(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	int i = 0;
	while (left < right)
	{
		while (left<right&&arr[left] % 2 == 1)
		{
			left++;
		}
		while (left < right&&arr[right] % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			int tem = arr[left];
			arr[left] = arr[right];
			arr[right] = tem;
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr,sz);
	return 0;

}