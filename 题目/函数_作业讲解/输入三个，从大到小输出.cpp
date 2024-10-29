#include <stdio.h>

int exchange_shunxu(int a,int b,int c)
{ 
   int d = 0
    if(a>b)
    {
     d = b;
	 b = a;
	 a = d;	
	}
	;
	if(b>c)
	 {
     d = c;
	 c = b;
	 c = d;	
	}
	;
	printf("%d %d %d",c,b,a);
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d",&a,&b,&c);
	exchange_shunxu(a,b,c);
	return 0;
}
