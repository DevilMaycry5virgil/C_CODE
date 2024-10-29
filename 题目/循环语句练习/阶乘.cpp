#include <stdio.h>

int main()
{
	int n = 0;
	int sum = 1;
	int i = 1;
    scanf("%d",&n);
    for(i = 1;i <= n;i++)
    {
    	sum = sum * i ;
    
	}
	printf("%d",sum);
	return 0;
}
