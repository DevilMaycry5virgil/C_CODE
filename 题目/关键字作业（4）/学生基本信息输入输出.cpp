#include <stdio.h> 

int main()
{   int number = 0;
    float chinese = 0.0f;
    float maths = 0.0f;
    float English = 0.0f;//��ʼ��float����Ҫд��������ʽ 
    printf("�����������Ϣ:");
    scanf("%d;%f,%f,%f",&number,&chinese,&maths,&English);
    printf("The each subject of %d is\n",number);
    printf("%.2f,%.2f,%.2f",chinese,maths,English);
	return 0;
}
