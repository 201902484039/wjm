#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//类型拷贝
//struct s
//{
//	char name[20];
//    int age;
//
//};
//my_memcpy(void* dest, const void* src, size_t k)
//{
//	assert(dest != NULL && src != NULL);
//	while (k--)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)dest)++;
//		((char*)src)++;
//	}
//}
//my_memmove(void* dest, void* src, size_t k)
//{
//	int len1 = strlen((char*)dest);
//	int len2 = strlen((char*)src);
//	assert(dest != NULL && src != NULL);
//	
//	
//	if (dest<src)
//	{
//		while (k--)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)dest)++;
//			((char*)src)++;
//		}
//	}
//	else
//	{
//		while (k--)
//		{
//
//			*(((char*)dest)+k) = *(((char*)src)+k);
//			
//			
//		}
//	}
//}
////memcpy  处理不重叠的内存拷贝就可以
////memmove  处理重叠的内存拷贝。 
//int main()
//{
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10};
//	int arr4[8] = { 0 };
//	struct s arr1[] = { {"张三",20},{"李四",19} };
//	struct s arr2[8] = { 0 };
//	my_memcpy(arr2, arr1,sizeof(arr1));
//	my_memmove(arr3, arr3+5, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr3[i]);
//	}
//	
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret=memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}
//结构体
struct Stu
{
	char name[20];
	char tele[12];
	char sex[10];
	int age;
};
//匿名结构体
//struct 
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}sa;
//struct sa
//{
//	int data;
//	struct sa* new;
//};
//int main()
//{
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}
test(char* p[])
{
	p = "test";

}
int main()
{
	char *p[] = { "abc" };
	test(p);
	printf("%s\n", *p);

	return 0;


}