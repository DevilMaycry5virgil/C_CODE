#include <stdio.h>

//实现1/1-1/2+1/3...... 
 
int main()
{
	float i = 0;
	float j = 1;
	float m = 0;
	float d = 0;//有分数，所以不能用int 
	int h = 1;//记录次数 
	for(i=1;i<=100;i++)
	{
		if(h%2==1)
		{
		   m = j/i;
		}
		else
		{
			m = -j/i ;
		}
		h++; 
		d = d + m;
	}
	printf("%.6f",d);
	return 0;
}
