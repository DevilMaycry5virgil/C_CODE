#include <stdio.h>

int find_num(int arr[3][4],int* px,int* py,int k)
{
	int i = 3;
	int j = 4;
	while(i>=0&&j>=0)
	{
	  if(k<arr[i][j])
	  {
	  	j--;
		  }	
	   else if(k==arr[i][j])
	   {
	   		*px = i;
	   		*py = j;
	   		return 1;
	   }
	   else
	   {
	   	 i--;
			   }		
	}
	return 0;
}


int main()
{
	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int k = 0;
	scanf("%d",&k);
	int a = 3;
	int b = 4;
	int ret = find_num(arr,&a,&b,k);
	if(ret == 1)
	{
	printf("找到了，坐标是：%d %d",a,b);
}
else
{
	printf("找不到");
}
}
