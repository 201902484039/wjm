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
	struct Peoinf data[MAX];//�ɴ��1000����Ϣ
	int size;//��ϢԪ�ظ���
};
void InitContact(struct Contact* ps);
//����һ����Ϣ��ͨѶ¼
void addContact(struct Contact* ps);
//��ʾͨѶ¼��Ϣ
void showContact(const struct Contact* ps);
void delContact(struct Contact* ps);
void searchContact(const struct Contact* ps);
void modifyContact(struct Contact* ps);
void sortContact(struct Contact* ps);