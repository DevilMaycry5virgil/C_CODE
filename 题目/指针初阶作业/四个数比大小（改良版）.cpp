#include <stdio.h>

int main()
{
	int i = 0;
	int arr[4] = {0};//将四个数大小放入数组中 
	while(i<4)//利用while循环把四个数输入 
	{
		scanf("%d",&arr[i]);
		i++;
	}
	int max = arr[0];//假设输入第一个数为最大 
	i = 1;
	while(i<4)//利用while循环与第一个数逐一比较 
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
		i++;
	}
	printf("%d\n",max);
	return 0;
}
