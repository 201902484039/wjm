#define _CRT_SECURE_NO_WARNINGS 1
//冒泡排序
#include <stdio.h>


#include <string.h>
//int main(void)
//{
//	int a[1001];
//	int n, i, j, t;
//	scanf("%d", &n);//n为要排序的数的个数
//	//输入要排序的数
//	for (i = 0; i < n; ++i)
//		scanf("%d", a+i);//a为首元素地址
//
//	//接下来进行排序
//	for (i = 0; i < n - 1; ++i)//n个数,总共需要进行n-1次
//	{                 //n-1个数排完,第一个数一定已经归位
//		//每次会将最大(升序)或最小(降序)放到最后面
//		for (j = 0; j < n - i - 1; ++j)
//		{
//			if (a[j] > a[j + 1])//每次冒泡,进行交换
//			{
//				t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//		for (j = 0; j < n; ++j)
//			printf("%-5d ", a[j]);
//		printf("\n\n");
//	}
//
//	return 0;
//}
//table(int a)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//void int main() {
//	int a = 0;
//	int tem = 0;
//	scanf("%d", &a);
//	tem = table(a);
//	
//	return 0;
//}
//int get_int(unsigned int a)
//{
//	if (a / 10 == 0)
//		return a;
//	else {
//		
//		return a%10+get_int(a / 10);
//	}
//		
//	
//	
//
//}
//int main() 
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d",get_int(a));
//	return 0;
//}
//int main()
//{
//	char user_name[] = { "qwer" };
//	char user_pass[] = { "qwer" };
//	printf("%d", strlen(user_name));
//	
//	return 0;
//}
//int main() {
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d", 10-i);
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe");
//		arr[i] = 0;
//
//	}
//	return 0;
//}

int find(int a)
{
	int ret = 1;
	int i = 0;
	for (i = 1; i <= a-1; i++)
	{
		if (i % 2 != 0)
		{
			ret += 1;
		}
		else
		{
			ret *= 2;
		}
	}
	return ret;
}
int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int print(char*str)
{
	printf("%s\n", str);
}
int sub(int x, int y)
{
	int z = 0; 
	z = x - y;
	return z;
}
int mul(int x, int y)
{
	int z = 0;
	z = x * y;
	return z;
}
int div(int x, int y)
{
	int z = 0;
	z = x / y;
	return z;
}
void menu()
{
	printf("######################\n");
	printf("####1:add    2:sub####\n");
	printf("####3:mul    4:div####\n");
	printf("########0:exit########\n"); 
}
int main()
{
	int a = 0;
	printf("请输入一个正数：\n");
	scanf("%d", &a);
	printf("%d\n", find(a));
	int(*p)(int, int) = add;
	int(*p1)(char*) = print;
	printf("%d\n", p(2, 3));
	printf("%d\n", (*p)(2, 4));
	(*p1)("hello bit");
	int(*parr[])(int, int) = {0,add,sub,mul,div };
	int i = 0;
	int input = 0;
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("请输入一个数：");
		scanf("%d", &input);
		printf("请输入两个数:");
		if (input >= 1 && input <= 4)
		{
			scanf("%d %d", &x, &y);
			printf("%d\n", parr[input](x, y));
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else
			printf("输入错误\n");


	} while (input);
	/*for (i = 0; i < 4; i++)
	{
		printf("%d\n", parr[i](2,3));
	}
	do
	{
		menu();
		switch(input)
		{
			case 1:
				printf("请输入两个数：");
				scanf("%d %d", &x, &y);
				printf("%d\n", add(x, y));
				break;
			case 2:
				printf("请输入两个数：");
				scanf("%d %d", &x, &y);
				printf("%d\n", sub(x, y));
				break;
			case 3:
				printf("请输入两个数：");
				scanf("%d %d", &x, &y);
				printf("%d\n", mul(x, y));
				break;
			case 4:
				printf("请输入两个数：");
				scanf("%d %d", &x, &y);
				printf("%d\n", div(x, y));
				break;
			case 0:
				printf("退出");
				break;
			default:
				printf("选择错误");
				break;
		}

	} while (input);*/
	return 0;
}