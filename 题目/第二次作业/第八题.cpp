#include <stdio.h>

int main()
{
	int a = 0;
	printf("请输入一个整数x\n");
	scanf("%d",&a);
	if(a<0) //三个选择用 if -> else if -> else 
	{
	    printf("y = 1\n");	
	}
	else if (a == 0) //注意不能写成 a = 0,要写成 a == 0 
	{
		printf("y = 0\n");
	}
	else
	{
		printf("y = -1\n");
	}
	return 0;
}
