#include <stdio.h>

int main()
{
	int a = 10;//a占四个字节，一个字节存放一个地址，a有四个地址 
	int *p = &a; //int*为变量类型，p为变量，这里的意思是将a的地址存放到p之中 （通常调用a的四个地址中的首地址） 
	*p = 20;// *p表示通过p的地址找到p的对象，也就是a，*p = 20相对与int a = 20； 
	printf("%d\n",*p);
	
}
