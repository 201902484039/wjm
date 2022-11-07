#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include "game.h"
void Initchar(char arr[row][col], int ROW, int COL) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		
		for (j = 0; j < col; j++) {
			arr[i][j] =' ';
		}
		}
}
void display(char arr[row][col], int ROW, int COL) {
	int i = 0;
	for (i = 0; i < row; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			printf(" %c ", arr[i][j]);
			if (j < col - 1) {
				printf("|");
			}
			}
		printf("\n");
		if (i < row - 1) {
			printf("---|---|---");
		}
		printf("\n");
		}	
}
void playergo(char arr[row][col], int ROW, int COL) {
	int x = 0; 
	int y = 0;
	printf("玩家走：>\n");
	
	while (1) 
	{
		printf("请输入坐标：>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
			if (arr[x - 1][y - 1] == ' ') 
			{
				arr[x - 1][y - 1] = '*';
				break;
			}
		
			else 
			{
				printf("坐标被占用\n");
			}
		else 
		{
			printf("坐标不合法,请重新输入\n");
		}
				
	}
	
}
void computergo(char arr[row][col], int ROW, int COL)
{
	printf("电脑走：>\n");
	
	while (1)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}
		
	}
}
int isfull(char arr[row][col], int ROW, int COL)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ');
			{
				return 0;
				
			}


		}

	}
	return 1;
}
char iswin(char arr[row][col], int ROW, int COL)
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i < row; i++) 
	{
		if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] && arr[i][0] != ' ')
		{
			return arr[i][0];
			break;
		}
	}
	for (i = 0; i < row; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i] && arr[0][i] != ' ')
		{
			return arr[0][i];
			break;
		}
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != ' ')
	{
		return arr[0][0];

	}
	else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}
	/*for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ');
			{
				return 'c';
				break;
			}
			
			
		}
		
	}
	return '*';*/
	if (isfull(arr, row, col) == 1)
	{
		return 'p';
	}	
	return 'c';	
}
