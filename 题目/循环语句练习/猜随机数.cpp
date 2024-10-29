#include <stdio.h>
#include <stdlib.h> //调用随机数生成函数需要包括的头文件 
#include <time.h> //调用time函数需要调用的文件 

void menu()//开始菜单
{
	printf("***************************************\n");
	printf("**************    1.play    ***********\n");
	printf("**************    0.exit    ***********\n");
	printf("***************************************\n");	
}

void game()
{   
	int ret = rand()%100+1;//对随机数求模，模100相当于将范围限定在0-100 ，调用rand函数需要使用srand函数作为随机数字生成器
    int i = 0;
    while(1)
    {
    printf("请输入数字：");
	scanf("%d",&i);
    if(i > ret)
    {
    	printf("输入的数字大了\n");
	}
	else if(i < ret)
	{
		printf("输入的数字小了\n"); 
	}
	else
	{
		 printf("猜中了\n"); break;
}
}
}


int main()
{   
    srand((unsigned int)time(NULL));//运用srand生成随机数，括号内要使用无符号整形（unsigned int)，而且为了确保每次都生成不一样的随机数 ，所以可以在添加时间戳，确保每次都变 ,由于time函数返回time_t为整数，需要强制类型转换 
	int n = 0;
    do
    {
	menu();
	scanf("%d",&n);
	switch(n)
	{
		case 0: printf("游戏结束\n");break;
		case 1: game();break;
		default:printf("选择错误，重新选择\n");break;//仅仅跳出switch循环 
	}
}while(n);//while里面条件非零即真，如果输入0以外的数字，都可以重复显示菜单页面 
	return 0;
}
