#include <stdio.h>

int main()
{
	int i = 1;
    while(i < 100)
    {   
        /*方法一：将上面int i = 0                                                                               
		 i = i + 1;
    	 if (i % 2 == 1) //判断是否为奇数 
    	   printf("%d ",i);	 //可以在%d后面加空格，使得打印出来的数不会连在一起
		*/
		 printf("%d ",i);
		 i += 2;   
	}
     return 0;
}
