#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//abcde左旋转2个单位变为cdeab
//void reverse(char *left, char *right)
//{
//	while(left<right)
//	{
//		int temp = *left;
//		*left = *right;
//		*right = temp;
//		right--;
//		left++;
//	}
//	
//}
//void string_rolate(char* arr, int k)
//{
//	int i = 0;
//	int sz = strlen(arr);
//	printf("%d\n", sz);
//	for (i = 0; i < k; i++)
//	{
//		char temp = *arr;
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			
//			*(arr+j) = *(arr + j+1);
//		}
//		*(arr + sz - 1) = temp;
//	}
//
//}
//int main()
//{
//	char arr[10] = "abcde";
//	int k = 2;
//	int sz = strlen(arr);
//	//scanf("%d", &k);
//	/*string_rolate(arr, k);*/
//	reverse(arr, arr+k-1);
//	reverse(arr+k,arr+sz-1);
//	reverse(arr, arr+sz - 1);
//	printf("%s\n", arr);
//	return 0;
//}
//判断一个字符串是否由另一个旋转而来
//int string_cmp(char* arr1, char* arr2)
//{
//	int i = 0;
//	int sz = strlen(arr1);
//
//	for (i = 0; i < sz; i++)
//	{
//		char temp = *arr1;
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//
//			*(arr1 + j) = *(arr1 + j + 1);
//		}
//		*(arr1 + sz - 1) = temp;
//		if (strcmp(arr1, arr2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int string_cmp1(char* arr1, char* arr2)
//{
//	int len = strlen(arr1);
//	int len1 = strlen(arr2);
//	if (len != len1)
//		return 0;
//	//在arr1后面加一个arr1 
//	strncat(arr1, arr1,len);
//	//判断str2是否是str1追加后的子串 
//	//strstr  用来找子串的
//	char* ret=strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[30] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = string_cmp1(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes");
//	}
//	else
//		printf("no");
//	return 0;
//}
//杨氏矩阵，编写程序看某个数字是否在矩阵中。
//int find_num(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x<row-1&&y>0)
//	{
//		if (arr[0][col - 1] < k)
//		{
//			y--;
//
//		}
//		else if (arr[0][col - 1] > k)
//		{
//			x++;
//		}
//		else
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int ret=find_num(arr, k, 3, 3);
//	if (ret = 1)
//	{
//		printf("找到了");
//	}
//	else
//		printf("找不到");
//	return 0;
//}
char* my_strncpy(char* arr1, char* arr2,int k)
{
	char* ret = arr1;
	while (k && (*arr1 = *arr2) )
	{
		arr1++;
		arr2++;
		k--;
		
	}
	if (k != 0)
	{
		while (--k)
		{
			*arr1++ = "\0";
		}

	}
	
	return ret;

}
int main()
{
	char arr1[20] = "abc";
	char arr2[] = "hellow nh";
	int k = 0;
	scanf("%d", &k);
	int ret=my_strncpy(arr1, arr2,k);
	printf("%s\n", ret);
	return 0;
}
 