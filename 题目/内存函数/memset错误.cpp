#include <stdio.h>
#include <string.h>

int main()
{
	int arr[10] = {0};
	memset(arr,1,40);
	int i = 0;
	for(i = 0;i<10;i++)
	{
	  printf("%d\n",arr[i]);
	}
	return 0;
}
