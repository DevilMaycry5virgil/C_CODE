#include <stdio.h>

//ʵ��1/1-1/2+1/3...... 
 
int main()
{
	float i = 0;
	float j = 1;
	float m = 0;
	float d = 0;//�з��������Բ�����int 
	int h = 1;//��¼���� 
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
