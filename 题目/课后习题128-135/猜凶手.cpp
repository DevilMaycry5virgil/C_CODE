#include <stdio.h>


/*int main()
{
	int a,b,c,d = 0;
	for(a=0;a<=1;a++)
	{
		for(b=0;b<=1;b++)
		{
			for(c=0;c<=1;c++)
			{
				for(d=0;d<=1;d++)
				{
					if((a!=1)+(c==1)+(d==1)+(d!=1)==3)
					{
						  if(a+b+c+d == 1)
						  {
						    printf("a=%d b=%d c=%d d=%d ",a,b,c,d);
						
				    	  }
					}
				}
			}
		}
	}
}*/



int main()
{
	int killer = 0;
	for(killer='a';killer<='d';killer++)
	{
		if((killer!='a')+(killer=='c')+(killer=='d')+(killer!='d')==3)
		{
			printf("%c",killer);
		}
	}
 } 
