#include <stdio.h>


int main()
{
	int i = 0;
	int sum = 1;
	int n = 0;
	int q = 0;
	for(i=1;i<=10;i++)
	{
    sum = 1;
	for(n=1;n<=i;n++)
	{
		sum = sum*n; 
	}
	q = q + sum;
} 
printf("%d",q);
return 0;

}
