#include <stdio.h>

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int i = 0;
	int m = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<m;i++)
	{
	  if(arr[i]==k)
	  {
	  	printf("�ҵ���,��arr[%d]",i);
	  	break;
	  }	
	  if(i == m)
	  {
	  	printf("�Ҳ���");
	  }
	}
	return 0;
}
