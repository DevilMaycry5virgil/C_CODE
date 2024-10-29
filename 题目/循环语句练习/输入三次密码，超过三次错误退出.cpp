#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0;
	char input[20] = {};
	for(i = 0;i < 3;i++)                                       
	{
		printf("请输入密码\n"); 
		scanf("%s",input);//字符串输入不需要加地址符号 
		if(strcmp(input,"abcdef") == 0)//strcmp函数等于0说明两个字符串相等 
		{
			printf("登陆成功\n");
			break; 
		}
		else
		printf("密码错误\n"); 
	}
	if(i == 3)
	{
		printf("登陆失败\n"); 
	}
	return 0;
 } 
