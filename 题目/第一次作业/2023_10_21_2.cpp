#include<stdio.h>

int main()
{
    int a,b=0;//初始化，一定要有，不然会乱码 
	printf("请输入两个数字\n");
	scanf("%d %d",&a,&b);
	int c = a+b;
	printf("a+b=%d\n",c);
}
