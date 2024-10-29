#include <stdio.h>

int main()
{
	int arr[10] = {0};//要定义数组大小，防止越级访问 
	int h = 0;
	for (h=0;h<10;h++)
	{
		scanf("%d",&arr[h]);//输入10个数的方法 
	}
	
	int max = arr[0];//设第一个就是最大
	
	int i = 0;//i为下标变量
	
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
