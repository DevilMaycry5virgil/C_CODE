#include <stdio.h>

int main()
{
	int count = 0;
	int i = 0;
	for(i=1;i<=100;i++)
	{
	     if(i % 10 == 9)
	     count++;
	     if (i / 10 == 9)//��ifǰ��Ҫ��else���������ǰ���if������ϵ������ǰ��if������֮��Ͳ���ִ�������else��䣬��99������9 
	     count++;
	}
	printf("%d",count);
	return 0;
}
