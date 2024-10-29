#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 120");//shutdown为关机,-s设置关机，-t为设置关机时间
again:
	printf("请注意，你的电脑将在120s后关机，如果输入：不要关机,就取消关机\n");
	scanf("%s",input);
	if(strcmp(input,"不要关机") == 0 )//判断是否输入了不要关机指令，要是等于0就取消关机 
	{
		system("shutdown -a");//取消关机指令 
	}
	else
	{
		goto again;
	}
	return 0;
}
