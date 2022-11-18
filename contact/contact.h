#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#define MAX 1000
#define MAX_name 20
#define MAX_sex 5
#define MAX_tele 12
#define MAX_addr 30
enum Option
{
	exit,
	add,
	del,
	search,
	modify,
	show,
	sort
};
struct Peoinf
{
	char name[MAX_name];
	int age;
	char sex[MAX_sex];
	char tele[MAX_tele];
	char addr[MAX_addr];
};
struct Contact
{
	struct Peoinf data[MAX];//可存放1000个信息
	int size;//信息元素个数
};
void InitContact(struct Contact* ps);
//增加一个信息到通讯录
void addContact(struct Contact* ps);
//显示通讯录信息
void showContact(const struct Contact* ps);
void delContact(struct Contact* ps);
void searchContact(const struct Contact* ps);
void modifyContact(struct Contact* ps);
void sortContact(struct Contact* ps);