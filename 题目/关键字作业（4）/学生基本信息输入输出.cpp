#include <stdio.h> 

int main()
{   int number = 0;
    float chinese = 0.0f;
    float maths = 0.0f;
    float English = 0.0f;//初始化float函数要写成这种形式 
    printf("请输入个人信息:");
    scanf("%d;%f,%f,%f",&number,&chinese,&maths,&English);
    printf("The each subject of %d is\n",number);
    printf("%.2f,%.2f,%.2f",chinese,maths,English);
	return 0;
}
