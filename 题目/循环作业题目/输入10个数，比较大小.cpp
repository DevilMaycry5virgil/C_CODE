#include <stdio.h>

int main()
{
	int i = 0;
	int max = 0;
	int h = 0;
    int m = 0;
	scanf("%d ",&i);
	max = i;
	for(m=0;m<9;m++)
	{
	scanf("%d",&h);
	if(h > max)
	{
		max = h;
	}
}
	printf("%d",max);

	return 0;
}
