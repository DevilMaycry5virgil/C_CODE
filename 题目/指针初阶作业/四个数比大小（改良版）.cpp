#include <stdio.h>

int main()
{
	int i = 0;
	int arr[4] = {0};//���ĸ�����С���������� 
	while(i<4)//����whileѭ�����ĸ������� 
	{
		scanf("%d",&arr[i]);
		i++;
	}
	int max = arr[0];//���������һ����Ϊ��� 
	i = 1;
	while(i<4)//����whileѭ�����һ������һ�Ƚ� 
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
