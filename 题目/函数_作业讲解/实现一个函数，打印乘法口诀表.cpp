#include <stdio.h>

int chengfa(int i)
{
	int k = 0;
	int m = 0;
	for(k=1;k<=i;k++)
	{
	for(m=1;m<=k;m++)                                                                                                                     
	{
		printf("%d*%d=%-3d ",k,m,k*m);
		}	
		printf("\n");
	}
}


int main()
{
	int i = 0;
	scanf("%d",&i);
    chengfa(i);
    return 0;
 } 
