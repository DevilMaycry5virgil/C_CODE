#include <stdio.h>


int main()
{
	    int i = 0;
	    scanf("%d",&i);
		int k = 0;
		int arr[][10] = {0};
		for(k=0;k<i;k++)
		{
			int j = 0;
	      for(j=0;j<=k;j++)
	      {
	      	if(j==0||j==k)
	      	{
	          arr[k][j] = 1;
	        }
	        else
	        {
	           arr[k][j]=arr[k-1][j-1]+arr[k-1][j];	
			}
			printf("%d ",arr[k][j]);
		  }
		  printf("\n");
		}
}
