#include <stdio.h>

int print(int i)
{
	if(i>1)
{
  print(i/10);
}
  printf("%d ",i%10);	
   
}

int main()
{
	int i =0;
	scanf("%d",&i);
	print(i);
	return 0;
 } 
