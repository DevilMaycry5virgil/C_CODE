#include <stdio.h>

int main()
{
	int arr[10] = {0};//Ҫ���������С����ֹԽ������ 
	int h = 0;
	for (h=0;h<10;h++)
	{
		scanf("%d",&arr[h]);//����10�����ķ��� 
	}
	
	int max = arr[0];//���һ���������
	
	int i = 0;//iΪ�±����
	
	for(i=i;i<=10;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	 } 
	 printf("%d",max);
	 return 0;
}
