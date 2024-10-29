#include <stdio.h>

int main()
{
	int i =0;
	int j = 0;
	for(i=100;i<=200;i++)
	{
	int flag = 1;//flag标志位要放在里面，防止因为满足了for循环不能重置flag的问题 
	for(j=2;j<i;j++)
	 {
	 	if(i % j == 0)
	 	{
	 		flag = 0;
		 }
	 }
	 if(flag == 1)
	 {
	 	printf("%d ",i);
	 }
 }
	return 0;
}
