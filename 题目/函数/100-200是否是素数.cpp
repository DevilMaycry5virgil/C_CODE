#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	int count = 0;
	int j = 0;

	for(i = 101;i<= 200;i+=2)//�ж�100-200֮��,����ż������������������i��101��ʼ��ֻɸѡ���� 
	{
		int flag = 1;
	    for(j = 2;j < i;j++)//�ж��Ƿ�����������Ҫ�����ܷ񱻳�1���Լ�����������j<i��j =2,ȥ����1�ͱ��� 
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
	 printf("һ����%d������",count);
	 return 0;
}
