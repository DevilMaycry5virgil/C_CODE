#include <stdio.h>

int Fib(int i)
{  
  
   int a = 1;
   int b = 1;
   int c =0;
   if(i<3)
   return 1;
   else
   {
   	while(i >= 3)
   	   {
		 c = a + b;
	     a = b;
		 b = c;
		i--;
	   }
	   return c;
}
   }



int main()
{
	int i = 0;
	scanf("%d",&i);
	int m = Fib(i);
	printf("%d",m);
	return 0;
}
