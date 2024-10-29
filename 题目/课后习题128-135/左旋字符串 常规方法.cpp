#include <stdio.h>
#include <string.h>
void turn_left(char arr[],int k)
{
	int sz = strlen(arr);
	int i = 0;
	for(i = 0;i<k;i++)
	{
		char temp = arr[0];
		int j = 0;
		for(j=0;j<sz-1;j++)
		{
			arr[j] = arr[j+1];
		}
		arr[j] = temp;
	}
}


int main()
{
	char arr[] = "ABCD";
	int k = 0;
	printf("请输入需要向左旋转的位数\n");
	scanf("%d",&k);
    turn_left(arr,k);
	printf("%s\n",arr);
}
