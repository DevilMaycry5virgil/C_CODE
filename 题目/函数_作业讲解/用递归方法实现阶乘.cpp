#include <stdio.h>

int jiecheng(int i)
{
	if(i>1)
	{
		jiecheng(i -1);
	}                                                                                                                                   
	return m*jiecheng(i);
}




int main()
{
	int k =0;
	int i =0;
	scanf("%d",&i);
	k= jiecheng(i);
	printf("%d",k);
	return 0;
 } 
