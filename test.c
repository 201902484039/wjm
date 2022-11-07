#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
void gameselect() {
	printf("********************\n");
	printf("*******1:play*******\n");
	printf("*****0:退出游戏*****\n");
}
void game() {
	int ret = 0;
	char arr[row][col] = { 0 };
	//初始化棋盘
	Initchar(arr, row, col);
	//打印棋盘
	display(arr, row, col);
	//下棋
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
		printf("玩家赢\n");
		
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
		
	}
	else 
	{
		printf("平局\n");
	
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
			printf("退出游戏\n");
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