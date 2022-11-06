#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
char user_name[255] = { 0 };
char user_pass[255] = { 0 };
void input_info(void)
{
	printf("请输入用户名和密码，进行注册！\n");
	printf("账户：");
	// scanf输入
	scanf("%s", user_name);
	printf("密码：");
	scanf("%s", user_pass);
	printf("user_name = %s\n", user_name);
	printf("user_pass = %s\n", user_pass);
}
void save_user()
{
	// linux中要打开的文件的路径名
	int fd = open("./test.txt", O_WRONLY | O_CREAT);
	printf("fd = %d\n", fd);
	// 打开失败就不再读写，直接退出程序
	if (fd < 0)
	{
		return;
	}
	// 写入数据到文件中
	user_name[strlen(user_name)] = ' ';
	 //计算字符串的长度
	int len = strlen(user_name);
	printf("len = %d\n", len);

	// //将buffer写入到文件中
	ssize_t ret = write(fd, user_name, len);
	printf("ret = %ld\n", ret);
	close(fd);
}
void save_user1()
{
	// linux中要打开的文件的路径名
	int fp = open("./test1.txt", O_WRONLY | O_CREAT);
	printf("fp = %d\n", fp);
	// 打开失败就不再读写，直接退出程序
	if (fp < 0)
	{
		return;
	}
	// 写入数据到文件中
	user_pass[strlen(user_pass)] = ' ';
	////计算字符串的长度
	int len = strlen(user_pass);
	printf("len = %d\n", len);
	//将buffer写入到文件中
	ssize_t ret = write(fp, user_pass, len);
	printf("ret = %ld\n", ret);
	close(fp);
}
int denglu()
{
	int i = 0;
	int filesize = 0;
	char a[255] = { 0 };
	printf("请输入账号:");
	scanf("%s", a);
	char* a1 = a;
	int flag = 0;
	int count = 0;
	int sum_row = 0;
	FILE *fd;
	int x = strlen(a);
	printf("长度%d\n", x);
	fd = fopen("./test.txt", "r");
	fseek(fd, 0L, SEEK_END);
	filesize = ftell(fd);
	printf("filesize=%d\n", filesize);
	while (!feof(fd))   //读文件，直到文件末尾
	{
		flag = fgetc(fd);//将文件内容附给flag
		if (*(a1 + i) == flag)
		{
			printf("%c", flag);
			i++;
			continue;
		}
		else if (filesize-1 == strlen(a)) //如果为\n表示到行尾，便进行计数
		{
			printf("账号正确\n");
			return 1;
			break;
		}
		else
		{
			printf("账号错误\n");
			return 0;
			break;
		}
	}
}
int denglu1()
{
	int filesize = 0;
	int j = 0;
	char b[255] = { 0 };
	printf("请输入密码:");
	scanf("%s",b);
	char* b1 = b;
	int flag = 0;
	FILE *fp;
	fp = fopen("./test1.txt", "r");
	fseek(fp, 0L, SEEK_END);
	filesize = ftell(fp);
	printf("filesize=%d\n", filesize);
	while (!feof(fp))   //读文件，直到文件末尾
	{
		flag = fgetc(fp);//将文件内容附给flag
		if (*(b1 + j) == flag)
		{
			printf("%c", flag);
			j++;
			continue;
		}
		else if (filesize-1 == strlen(b)) //如果为\n表示到行尾，便进行计数
		{
			printf("密码正确\n");
			return 1;
			break;
		}
		else
		{
			printf("密码错误\n");
			return 0;
			break;
		}
	}

}
int main(int argc, char** argv)
{
	int a = 0;
again:	
	printf("请输入1/2\n");
	scanf("%d", &a);
	if (a == 1)
	{
		// 输入用户名和密码信息
		input_info();
		// 保存用户名和密码
		save_user();
		save_user1();
	}
	else if (a == 2)
	{
		if(denglu()+ denglu1() == 2 )
		{
			printf("登录成功\n");
		}
		else 
		{
			printf("登录失败\n");
		}	
	}
	else
	{
		printf("输入错误");
		goto again;
	}
	return 0;
}
