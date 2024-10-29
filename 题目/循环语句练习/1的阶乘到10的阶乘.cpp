#include <stdio.h>

int main()
{
	int i = 1;
	int sum = 1;
	int n = 0;
	int q = 0;
	for(i=1;i<=10;i++)
	{
		sum = sum * i;
		q = q + sum;
    }
	printf("%d",q);
	
	return 0; 
}
