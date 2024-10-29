#include <stdio.h>
#include <math.h>


int main()
{
	int i = 0;
	int m = 0;
	int h = 0;
	scanf("%d",&i);
	while(i)
	{
		int j = i%10;
		i = i / 10;
		if(j % 2 == 0)
		{
			j = 0;
		}
		else
		{
			j = 1;
		}
		h = h + j*pow(10,m);
		m = m +1;
	}
	printf("%d",h);
	return 0;
}
