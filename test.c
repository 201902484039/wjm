#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
void gameselect() {
	printf("********************\n");
	printf("*******1:play*******\n");
	printf("*****0:�˳���Ϸ*****\n");
}
void game() {
	int ret = 0;
	char arr[row][col] = { 0 };
	//��ʼ������
	Initchar(arr, row, col);
	//��ӡ����
	display(arr, row, col);
	//����
	while (1) {
		playergo(arr, row, col);
		display(arr, row, col);
		ret=iswin(arr, row, col);
		
		if (ret != 'c')
		{
			break;
		}
		computergo(arr, row, col);
		display(arr, row, col);
		iswin(arr, row, col);
		
		
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
		
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
		
	}
	else 
	{
		printf("ƽ��\n");
	
	}
	
	
	   
}
void test() {
	
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		gameselect();
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:

			break;
		}

	} while (input);
	return 0;
}
int main() {
	test();
	return 0;
}