#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}

void addContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入名字:>\n");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:>\n");
		scanf("%d", &ps->data[ps->size].age);
		printf("请输入性别:>\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:>\n");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址:>\n");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功");
	}
}
static int findName(struct Contact* ps, char name[MAX_name])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name, name) == 0)
		{
			return i;
			break;
		}
	}
	return -1;
}
void showContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}
void delContact(struct Contact* ps)
{
	char name[MAX_name];
	printf("请输入你要删的人的名字\n");
	scanf("%s", name);
	
	int find = findName(ps, name);
	if (find == -1)
	{
		printf("你要删的人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = find; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps ->size--;
		printf("删除成功\n");
	}
}
void searchContact(const struct Contact* ps)
{
	char name[MAX_name];
	printf("请输入你要查的人的名字\n");
	scanf("%s", name);

	int find = findName(ps, name);
	if (-1 == find)
	{
		printf("你要查的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[find].name,
			ps->data[find].age,
			ps->data[find].sex,
			ps->data[find].tele,
			ps->data[find].addr);
		printf("查找成功\n");
	}
}
void modifyContact(struct Contact* ps)
{
	char name[MAX_name];
	printf("请输入你要修改的人的名字\n");
	scanf("%s", name);

	int find = findName(ps, name);
	if (-1 == find)
	{
		printf("你要修改的人不存在\n");
	}
	else
	{
		printf("请输入名字:>\n");
		scanf("%s", ps->data[find].name);
		printf("请输入年龄:>\n");
		scanf("%d", &ps->data[find].age);
		printf("请输入性别:>\n");
		scanf("%s", ps->data[find].sex);
		printf("请输入电话:>\n");
		scanf("%s", ps->data[find].tele);
		printf("请输入地址:>\n");
		scanf("%s", ps->data[find].addr);
		
		printf("修改成功");
	}
}
void cmp_name(const void* e1, const void* e2)
{
	return strcmp(((struct Contact*)e1)->data->name, ((struct Contact*)e2)->data->name);
}
void sortContact(struct Contact* ps)
{
	qsort(ps->data, ps->size, sizeof(ps->data[0]), cmp_name);
	printf("排序成功\n");

}