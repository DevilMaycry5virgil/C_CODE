#include <stdio.h>

int main()
{
	int a = 0;
	printf("������һ������x\n");
	scanf("%d",&a);
	if(a<0) //����ѡ���� if -> else if -> else 
	{
	    printf("y = 1\n");	
	}
	else if (a == 0) //ע�ⲻ��д�� a = 0,Ҫд�� a == 0 
	{
		printf("y = 0\n");
	}
	else
	{
		printf("y = -1\n");
	}
	return 0;
}
