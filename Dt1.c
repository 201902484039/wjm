#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//��̬�ڴ���� malloc���ٿռ�   free�ͷſռ�,����Ҫ�ɶ�ʹ��
//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int *p = malloc(10 * sizeof(int));
//	if(p==NULL)
//	{
//		//��ӡ����ԭ���һ�ַ�ʽ
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		//����̬����Ŀռ䲻��ʹ�õ�ʱ���Ӧ�û�������ϵͳ
//	}
//	free(p);
//	p = NULL;//
//	return 0;
//}

//calloc ȫ����ʼ��Ϊ0
//int main()
//{
//		int *p = (int *)calloc(10,sizeof(int));
//	if(p==NULL)
//	{
//		//��ӡ����ԭ���һ�ַ�ʽ
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		//free�������ͷſռ��
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
//		//��ӡ����ԭ���һ�ַ�ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i <5; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 5; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		//free�������ͷſռ��
//		free(p);
//		p = NULL;
//		
//	}
//	printf("\n"); 
//	//���10���ֽ��ڴ治������Ҫ���ӿռ䣬��realloc
//	//reallocʹ��ע������
//	//1.���pָ��Ŀռ�֮�����㹻�Ŀռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
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
//һ��������
//���Ϊ���б���
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
//һ��������
//���Ϊ���ֵ
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
//һ��������
//���Ϊ��ӡhello world�������ڴ�й©
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
//һ��������
//���Ϊ��ӡworld�����Ƿ������ڴ�
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

//��������
//��������
//struct S
//{
//	int n;
//	int arr[0];//δ֪��С��-���������Ա-�����С���Ե���
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