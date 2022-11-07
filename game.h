#define _CRT_SECURE_NO_WARNINGS 1
#define row 3
#define col 3
#include <stdlib.h> 
#include <string.h>
#include <time.h>
void Initchar(char arr[row][col], int ROW, int COL);
void display(char arr[row][col], int ROW, int COL);
void playergo(char arr[row][col], int ROW, int COL);
void computergo(char arr[row][col], int ROW, int COL);
char iswin(char arr[row][col], int ROW, int COL);
int isfull(char arr[row][col], int ROW, int COL);
