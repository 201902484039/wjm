#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int search(int* nums, int numsLen, int target) {
//	// write code here
//	int left = 0;
//	int right = numsLen - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (nums[mid] < target)
//		{
//			left = mid+1;
//
//		}
//		else if (nums[mid] > target)
//		{
//			right = mid-1;
//
//		}
//		else
//			return mid;
//
//	}
//	return 0;
//
//
//
//}
//int main()
//{
//	int nums[] = { 0 };
//	int a = 0;
//	int k = 0;
//	printf("请你输入数组的长度：\n");
//	scanf("%d", &a);
//	int i = 0;
//	printf("请输入数组内容：");
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &nums[i]);
//	}
//	printf("请输入查找的数：");
//	scanf("%d", &k);
//	int ret = sizeof(nums) / sizeof(nums[0]);
//	//printf("%d", ret);
//	int b = search(nums, ret, k);
//	printf("%d",b);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//指针数组
//	int* arr[10];
//	//数组指针
//	int* (*p)[10] = &arr;
//	//函数指针
//	int (*padd)(int, int) = add;//函数调用  也可以>int padd(1,2)
//	/*int sum = (*padd)(1, 2);
//	printf("%d\n", sum);*/
//	//函数指针的数组
//	int(*parr[5])(int, int) = add;
//	//指向函数指针数组的指针
//	int(*((*pparr)[5]))(int, int) = &parr;
//
//
//	return 0;
//}
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int tem = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j <sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
				
			}
		}
	}

}
struct stu
{
	char name[20];
	int age;
};
int com_int(const void *e1, const void *e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), com_int);
	//bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int com_float(const void *e1, const void *e2)
{
	return (int)(*(float*)e1 - *(float*)e2);
}
void test1()
{
	
	
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0, };
	int sz = sizeof(f)/ sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), com_float);
	//bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
	printf("\n");
}
int cmp_stu_age(const void *e1, const void *e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;

}
int cmp_stu_name(const void *e1, const void *e2)
{
	return strcmp(((struct stu*)e1)->name , ((struct stu*)e2)->name);

}
void test2()
{
	struct stu s[3] = { {"zhangsan",30},{"lisi",19},{"wangwu",20} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]),cmp_stu_name);
	
}
void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for(i=0;i<width;i++)
	{ 
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
	

}
void bubble_sort1(void* base, int sz, int width, int(*com)(void *e1, void *e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (com((char*)base + j * width,(char*)base + (j + 1)*width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1)*width,width);
			}
		}
	}

}
void test3()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort1(arr, sz, sizeof(arr[0]), com_int);
}
void test4()
{
	struct stu s[3] = { {"zhangsan",30},{"lisi",19},{"wangwu",20} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort1(s, sz, sizeof(s[0]),cmp_stu_age);
}
void test5()
{
	struct stu s[3] = { {"zhangsan",30},{"lisi",19},{"wangwu",20} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort1(s, sz, sizeof(s[0]), cmp_stu_name);
}

int main()
{/*
	test();
	test1();*/
	/*test2();
	test3();
	test4();*/
	test5();
	/*int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	struct stu s[3] = { {"zhangsan",18},{"lisi",19},{"wangwu",20} };
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0, };
	qsort(arr, sz, sizeof(arr[0]), com_int);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	} 
	return 0;*/
}