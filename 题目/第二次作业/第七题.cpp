#include <stdio.h>

/*int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("%d",a);
	}
	else
	{
		printf("%d",b);
	}
	return 0;
}*/

int max(int x, int y)
{    
    int z = 0;
	if(x>y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;//����z��Ȼ��ŵ�����r�С� 
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	int r = max(a,b);
	printf("%d",r);
	return 0;
}
