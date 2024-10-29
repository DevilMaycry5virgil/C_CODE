#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	int count = 0;
	int j = 0;

	for(i = 101;i<= 200;i+=2)//判断100-200之间,而且偶数不能是素数，所以i从101开始，只筛选奇数 
	{
		int flag = 1;
	    for(j = 2;j < i;j++)//判断是否是素数，就要看他能否被除1和自己的数整除，j<i且j =2,去除了1和本身 
	      {
	      	if(i % j ==0)
	      	{
	      		flag = 0;
	      		break;
			  }
		  }
		  
		  if(flag == 1)
		  {
		  	count ++;
		  	printf("%d ",i);
		   } 
	 }
	 printf("\n");
	 printf("一共有%d个素数",count);
	 return 0;
}
