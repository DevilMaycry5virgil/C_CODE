#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 120");//shutdownΪ�ػ�,-s���ùػ���-tΪ���ùػ�ʱ��
again:
	printf("��ע�⣬��ĵ��Խ���120s��ػ���������룺��Ҫ�ػ�,��ȡ���ػ�\n");
	scanf("%s",input);
	if(strcmp(input,"��Ҫ�ػ�") == 0 )//�ж��Ƿ������˲�Ҫ�ػ�ָ�Ҫ�ǵ���0��ȡ���ػ� 
	{
		system("shutdown -a");//ȡ���ػ�ָ�� 
	}
	else
	{
		goto again;
	}
	return 0;
}
