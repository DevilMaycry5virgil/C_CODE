#include <stdio.h>
#include<math.h>
int main()
{
	int year,month,day;
	
	printf("�������������:"); 
	scanf("%4d%2d%2d",&year,&month,&day);//ʶ��ǰ��λΪ�꣬ǰ��λ�����ŵ���λΪ�£������λΪ�գ�������������û�зָ��� 
	if(year >= 1990 && year <= 2005) //&&ǰ����year 
	{
		printf("year=%d\n",year);
	}
	
	if(month >= 1 && month <= 12)
	{
		printf("month=%02d\n",month);//%0xd,x�ƶ�����ж���λ��0Ϊ��ʽ���Ʒ��������ֵʱָ��ǰ����0 
	}
	
	if(day >= 1 && day <= 30)
	{
		printf("day=%02d\n",day);
	}
	return 0;
}
