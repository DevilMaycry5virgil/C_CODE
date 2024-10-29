#include <stdio.h>

int main()
{  
    float r = 0.0f;//初始化，否则是随机值 
    float pi = 3.1415926;
    scanf("%f",&r); //%f不用%0.0f
    float v = 4/3.0*pi*r*r*r;
	printf("%.3f",v);// %.3f表示保留小数点后三位
	return 0;
}
