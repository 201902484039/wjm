#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int main()
//{
//	FILE* pf=fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//	 }
//int main()
//{
//	FILE*  pfwrite = fopen("test.txt", "w");
//	if (pfwrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('b', pfwrite);
//	fputc('b', pfwrite);
//	fclose(pfwrite);
//	pfwrite = NULL;
//	return 0;
//}

//int main()
//{
//	FILE*  pfread = fopen("test.txt", "r");
//	if (pfread == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	printf("%c\n", fgetc(pfread));
//	fclose(pfread);
//	pfread = NULL;
//	return 0;
//}
//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}
//int main() {
//	unsigned char i = 7;
//	int j = 0;
//	for (; i > 0; i -= 3) {
//		++j;
//		printf("%d\n", i);
//	}
//	printf("%d\n", j);
//	return 0;
//}
//
//int main()
//{
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	;
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	char puf[1024] = { 0 };
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fgets(puf, 1024, pf);
//	/*printf("%s", puf);*/
//	puts(puf);//打印行
//	fclose(pf);
//
//	return 0;
//
//}


//int main()
//{
//	char puf[1024] = { 0 };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fputs("hellow\n", pf);
//	fputs("world\n", pf);
//	/*printf("%s", puf);*/
//
//	fclose(pf);
//  pf=NULL;
//	return 0;
//
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	/*fgets(buf, 1024, stdin);
//	fputs(buf, stdout);*/
//	gets(buf);
//	puts(buf);
//	return 0;
//}

//typedef struct S
//{
//	int a;
//	float b;
//	char arr[10];
//}ad;
//
//int main()
//{
//	ad ty = { 4,3.14f,"ascf" };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fprintf(pf, "%d %f %s", ty.a, ty.b, ty.arr);
//	
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

typedef struct S
{
	int a;
	float b;
	char arr[10];
}ad;

int main()
{
	ad ty = { 0 };
	FILE* pf  = fopen("text.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	fscanf(pf, "%d %f %s", &(ty.a),&(ty.b),ty.arr);
	printf("%d %f %s", ty.a, ty.b, ty.arr);

	fclose(pf);
	pf = NULL;
	return 0;
}