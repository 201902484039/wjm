#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void menu()
{
	printf("***********************************\n");
	printf("*******1:add        2:del   *******\n");
	printf("*******3:shearch    4:modify*******\n");
	printf("*******5:show       6:sort  *******\n");
	printf("*******0:exit               *******\n");
	printf("***********************************\n");
}
int main()
{
	int size = 0;
	int input = 0;
	//创建通讯录
	struct Contact con;
	//初始化通讯录
	InitContact(&con);
	
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			addContact(&con);
			break;
		case del:
			delContact(&con);
			break;
		case search:
			searchContact(&con);
			break;
		case modify:
			modifyContact(&con);
			break;
		case show:
			showContact(&con);
			break;
		case sort:
			sortContact(&con);
			break;
		case exit:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;

		}

	} while (input);
	return 0;
}