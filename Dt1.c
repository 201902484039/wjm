#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//动态内存分配 malloc开辟空间   free释放空间,两者要成对使用
//int main()
//{
//	//向内存申请10个整形的空间
//	int *p = malloc(10 * sizeof(int));
//	if(p==NULL)
//	{
//		//打印错误原因的一种方式
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		//当动态申请的空间不再使用的时候就应该还给操作系统
//	}
//	free(p);
//	p = NULL;//
//	return 0;
//}

//calloc 全部初始化为0
//int main()
//{
//		int *p = (int *)calloc(10,sizeof(int));
//	if(p==NULL)
//	{
//		//打印错误原因的一种方式
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		//free函数是释放空间的
//		free(p);
//		p = NULL;
//	}
//
//	return 0;
//}

//int main()
//{
//	int *p = (int *)malloc(20);
//	if (p == NULL)
//	{
//		//打印错误原因的一种方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i <5; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 5; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		//free函数是释放空间的
//		free(p);
//		p = NULL;
//		
//	}
//	printf("\n"); 
//	//如果10个字节内存不够，就要增加空间，用realloc
//	//realloc使用注意事项
//	//1.如果p指向的空间之后有足够的空间可以追加，则直接追加，后返回p
//	int *p1=realloc(p, 40);
//	if (p1 != NULL)
//	{
//		p = p1;
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	
//	return 0;
//}
//一道笔试题
//结果为运行崩溃
//char GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//void test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}
//一道笔试题
//结果为随机值
//char *GetMemory(void)
//{
//	char p[] = "hellow world";
//	return p;
//}
//void test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}
//一道笔试题
//结果为打印hello world，但会内存泄漏
//char GetMemory(char **p,int num)
//{
//	*p = (char *)malloc(num);
//}
//void test(void)
//{
//	char *str = NULL;
//	GetMemory(&str,100);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}
//一道笔试题
//结果为打印world，但非法访问内存
//void test(void)
//{
//	char *str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//
//}
//int main()
//{
//	test();
//	return 0;
//}

//柔性数组
//柔性数组
//struct S
//{
//	int n;
//	int arr[0];//未知大小的-柔性数组成员-数组大小可以调整
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = malloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL; 
//	return 0;
//}

struct S
{
	int n;
	char c;
	int arr[0];
};
int main()
{
	//printf("%d\n", sizeof(struct S));
	struct S*   p=malloc(sizeof(struct S) + 10 * sizeof(int));
	return 0;
}