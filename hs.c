#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
//int main() {
//	char arr1[] = "ndfhsihfh";
//	char arr2[20] = "$$$$$$";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}
//int swap(int* x, int* y) {
//	int tep = 0;
//	tep = *x;
//	*x = *y;
//	*y = tep;
//}
//int main(){ 
//	int a = 13;
//	int b = 4;
//	printf("a=%d b=%d", a, b);
//	swap(&a, &b);
//	printf("a=%d b=%d", a, b);
//
//	return 0;
//}

//判断是否为素数
//int is_prime(int x) 
//{
//	int i = 0;
//	printf("%d\n", x);
//	for (i = 2; i <=sqrt(x); i++)
//	{
//		if (x%i == 0)
//			return 0; 
//	}
//	return 1;
//}
//	
//int main() {
//	int a = 3;
//	scanf("%p", &a);
//	/*scanf("请输入一个数：",&a);*/
//	/*int b=is_prime(a);
//	printf("%d", b);*/
//	if (is_prime(a) == 1)
//		printf("%d是素数",a);
//	else
//		printf("%d不是素数",a);
//
//	return 0;
//}

//判断1000-2000的闰年
//int is_runnian(int n) {
//
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main() {
//	int count = 0;
//	int i = 0;
//	for (i = 1000; i <= 2000; i++) {
//		if (is_runnian(i) == 1) {
//			printf("%d\n", i);
//			count++;
//		}
//		
//	}
//	printf("%d\n", count);
//	return 0;
//}
//二分查找数组某个元素{1,2,3,4,5,6,7,8,9}
//int is_erfen(int arr[] , int k,int ch ) {
//	int left = 0;
//	int right = ch - 1;
//	
//	while (left<=right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//			return mid;
//
//
//	}
//	return 0;
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int left = 0;
//	int ch = sizeof(arr) / sizeof(arr[0]);
//	int ret = is_erfen(arr, k, ch);
//	if (ret == 0)
//		printf("找不到下标");
//	else
//		printf("下标为%d", ret);
//
//
//}
//i

//排了很久之后，他们开始反思为什么自己需要等这么久。肯德基的网红产品炸鸡需要油锅进行生产，这
//个厨房内，每个锅可以花费x的时间产出一份炸鸡，之后花费 的时间洗锅换油并可以重新投入生产。每
//个炸鸡产出之后可以放置至多 的时间否则必须扔掉。
//一共会有 个时刻。在第 个时刻厨房会得到一个订单，要求 份炸鸡，给出所有的 ，请问厨房最少
//需要多少个锅才可以满足所有的订单。
//你可以在 时刻以前就开始准备煎饼
//同时保证 ，即每份炸鸡可保存时间不超过制作时间
//输入第一行四个数 ，之后每行两个数
//样例输入：
//6 100 40 70
//10 1
//100 2
//210 3
//320 4
//440 5
//560 6
//样例输出：
//int main() {
//	int n = 0, i = 0;
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	int t = 0;
//	int a = 0;
//	scanf("%d%d%d%d", &n, &x, &y, &z);
//	for (i = 0; i < n; i++) {
//		scanf("%d%d", &t, &a);
//		
//	}
//
//
//	return 0;
//}
//int main() {
//	
//	int n = 1;
//	
//	while ( n < 100)
//	{
//		double a = sqrt(n);
//		if (a == int(a)) {
//			n+=2;
//		}
//		else
//			n++;
//	printf("%d\n", n);
//	}
//
//	return 0;
//}
//使用返回指针的函数查找最大值

*FindMax(int *p, int n)
{
	int i, *max;
	max = p;
	for (i = 0; i < n; i++) {
		if (*(p + i) > *max)
		{
			max = p + i;
		}
	}
	return max;
}


int main()
{
	int a[10], *max, i;
	printf("请输入10个整型数字:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	max = FindMax(a, 10);
	printf("最大值：%d\n", *max);
	getch;
	return 0;
}


