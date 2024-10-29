#include <stdio.h>

void jiecheng(int i)
{
   int m = 1;
   while(i>=1)
   {
   	m = m*i;
   	i = i -1;
   }
   printf("%d",m);
}




int main()
{
	int i = 0;
	scanf("%d",&i);
	jiecheng(i);
	return 0;
}

