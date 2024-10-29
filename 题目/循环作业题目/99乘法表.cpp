#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	for(i=1;i<10;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%2d ",i,j,i*j);//%2d打印多一位，个位前面用空格代替，%2d，两位右对齐，%-2d,两位左对齐 
		}
		printf("\n");
	}
	return 0;
}
