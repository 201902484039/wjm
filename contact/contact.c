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
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("����������:>\n");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:>\n");
		scanf("%d", &ps->data[ps->size].age);
		printf("�������Ա�:>\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:>\n");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ:>\n");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�");
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
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("��������Ҫɾ���˵�����\n");
	scanf("%s", name);
	
	int find = findName(ps, name);
	if (find == -1)
	{
		printf("��Ҫɾ���˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = find; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps ->size--;
		printf("ɾ���ɹ�\n");
	}
}
void searchContact(const struct Contact* ps)
{
	char name[MAX_name];
	printf("��������Ҫ����˵�����\n");
	scanf("%s", name);

	int find = findName(ps, name);
	if (-1 == find)
	{
		printf("��Ҫ����˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[find].name,
			ps->data[find].age,
			ps->data[find].sex,
			ps->data[find].tele,
			ps->data[find].addr);
		printf("���ҳɹ�\n");
	}
}
void modifyContact(struct Contact* ps)
{
	char name[MAX_name];
	printf("��������Ҫ�޸ĵ��˵�����\n");
	scanf("%s", name);

	int find = findName(ps, name);
	if (-1 == find)
	{
		printf("��Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("����������:>\n");
		scanf("%s", ps->data[find].name);
		printf("����������:>\n");
		scanf("%d", &ps->data[find].age);
		printf("�������Ա�:>\n");
		scanf("%s", ps->data[find].sex);
		printf("������绰:>\n");
		scanf("%s", ps->data[find].tele);
		printf("�������ַ:>\n");
		scanf("%s", ps->data[find].addr);
		
		printf("�޸ĳɹ�");
	}
}
void cmp_name(const void* e1, const void* e2)
{
	return strcmp(((struct Contact*)e1)->data->name, ((struct Contact*)e2)->data->name);
}
void sortContact(struct Contact* ps)
{
	qsort(ps->data, ps->size, sizeof(ps->data[0]), cmp_name);
	printf("����ɹ�\n");

}