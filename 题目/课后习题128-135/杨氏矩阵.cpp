#include <stdio.h>

int main()
{
	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	printf("请输入需要查找的数字:\n");
	int k = 0;
	scanf("%d",&k);
	int i = 0;
   for(i = 0;i<3;i++)
	{
		int j = 3;
			if(k<arr[i][j])
			{
				while(j>=0)
				{
					if(k==arr[i][j])
					{
					printf("找到了,坐标是:%d %d",i,j); 
                    return 0;}	
                    j = j - 1;
				}
			    	printf("找不到");
				    return 0;
			}
			else if(k==arr[i][j])
			{
				printf("找到了,坐标是:%d %d",i,j); 
				return 0;
			}
				}
		printf("找不到");
		
		}
