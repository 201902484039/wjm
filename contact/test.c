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
	//����ͨѶ¼
	struct Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	
	do
	{
		menu();
		printf("��ѡ��:>");
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;

		}

	} while (input);
	return 0;
}