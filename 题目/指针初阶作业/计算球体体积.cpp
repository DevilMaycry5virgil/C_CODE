#include <stdio.h>

int main()
{  
    float r = 0.0f;//��ʼ�������������ֵ 
    float pi = 3.1415926;
    scanf("%f",&r); //%f����%0.0f
    float v = 4/3.0*pi*r*r*r;
	printf("%.3f",v);// %.3f��ʾ����С�������λ
	return 0;
}
