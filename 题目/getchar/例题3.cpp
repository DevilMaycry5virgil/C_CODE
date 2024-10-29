#include <stdio.h>

int main()
{
	printf("请输入密码：");
	int num[] = {0};
	scanf("%s",num);
    printf("请确认密码(Y/N)：");
    int c;
    while((c = getchar()) != '\n') //为了防止密码输入中有空格 
    {
    	;
	}
    int ret = getchar();
    if(ret == 'Y') //注意这里Y要在单引号内 
    {
    	printf("yes");
	}
	else
	{
	    printf("no");	
	}
	return 0;
}
