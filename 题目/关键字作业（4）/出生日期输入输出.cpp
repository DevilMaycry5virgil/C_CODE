#include <stdio.h>
#include<math.h>
int main()
{
	int year,month,day;
	
	printf("请输入出生日期:"); 
	scanf("%4d%2d%2d",&year,&month,&day);//识别前四位为年，前四位紧接着的两位为月，最后两位为日，输入生日做到没有分隔符 
	if(year >= 1990 && year <= 2005) //&&前后都有year 
	{
		printf("year=%d\n",year);
	}
	
	if(month >= 1 && month <= 12)
	{
		printf("month=%02d\n",month);//%0xd,x制定输出有多少位，0为格式控制符，输出数值时指定前面有0 
	}
	
	if(day >= 1 && day <= 30)
	{
		printf("day=%02d\n",day);
	}
	return 0;
}
