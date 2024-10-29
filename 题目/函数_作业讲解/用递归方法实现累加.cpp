#include <stdio.h>

int DigitalSum(int n)
{   
	if(n>=1)
	{
	int k = n % 10;
	return k+DigitalSum(n/10);
    }
    else
    return 0;
}



int main()
{
	int n = 0;
	int m = 0;
	scanf("%d",&n);
	m = DigitalSum(n);
	printf("%d",m);
	return 0;
}
