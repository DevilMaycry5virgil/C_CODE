#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	for(i=1;i<10;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%2d ",i,j,i*j);//%2d��ӡ��һλ����λǰ���ÿո���棬%2d����λ�Ҷ��룬%-2d,��λ����� 
		}
		printf("\n");
	}
	return 0;
}
