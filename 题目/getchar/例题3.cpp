#include <stdio.h>

int main()
{
	printf("���������룺");
	int num[] = {0};
	scanf("%s",num);
    printf("��ȷ������(Y/N)��");
    int c;
    while((c = getchar()) != '\n') //Ϊ�˷�ֹ�����������пո� 
    {
    	;
	}
    int ret = getchar();
    if(ret == 'Y') //ע������YҪ�ڵ������� 
    {
    	printf("yes");
	}
	else
	{
	    printf("no");	
	}
	return 0;
}
