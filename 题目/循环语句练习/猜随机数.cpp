#include <stdio.h>
#include <stdlib.h> //������������ɺ�����Ҫ������ͷ�ļ� 
#include <time.h> //����time������Ҫ���õ��ļ� 

void menu()//��ʼ�˵�
{
	printf("***************************************\n");
	printf("**************    1.play    ***********\n");
	printf("**************    0.exit    ***********\n");
	printf("***************************************\n");	
}

void game()
{   
	int ret = rand()%100+1;//���������ģ��ģ100�൱�ڽ���Χ�޶���0-100 ������rand������Ҫʹ��srand������Ϊ�������������
    int i = 0;
    while(1)
    {
    printf("���������֣�");
	scanf("%d",&i);
    if(i > ret)
    {
    	printf("��������ִ���\n");
	}
	else if(i < ret)
	{
		printf("���������С��\n"); 
	}
	else
	{
		 printf("������\n"); break;
}
}
}


int main()
{   
    srand((unsigned int)time(NULL));//����srand�����������������Ҫʹ���޷������Σ�unsigned int)������Ϊ��ȷ��ÿ�ζ����ɲ�һ��������� �����Կ��������ʱ�����ȷ��ÿ�ζ��� ,����time��������time_tΪ��������Ҫǿ������ת�� 
	int n = 0;
    do
    {
	menu();
	scanf("%d",&n);
	switch(n)
	{
		case 0: printf("��Ϸ����\n");break;
		case 1: game();break;
		default:printf("ѡ���������ѡ��\n");break;//��������switchѭ�� 
	}
}while(n);//while�����������㼴�棬�������0��������֣��������ظ���ʾ�˵�ҳ�� 
	return 0;
}
