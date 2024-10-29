#include <stdio.h>

int main()
{
	int m = 0;
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	if(b<a)
	{
		int c = 0;
		c = a;
		a = b;
		b = c;
	}
	int i = a;
	while(a)
    {
    	if(b % a == 0&&i % a == 0)
    	{
    	m = a;break;
        }
    	else
    	--a;
		}	
	
	printf("这两个数的最大公约数是：%d",m);
	return 0;
}
