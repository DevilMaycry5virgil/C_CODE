#include <stdio.h>

int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;//标志位，实现+、-交替 
	for(i = 1;i<=100;i++)
	{
		sum = sum + flag*(1.0/i);
		flag = -flag;
	}
	printf("%lf\n",sum);
	
	return 0; 
}
