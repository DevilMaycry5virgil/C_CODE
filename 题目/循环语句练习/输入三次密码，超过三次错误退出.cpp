#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0;
	char input[20] = {};
	for(i = 0;i < 3;i++)                                       
	{
		printf("����������\n"); 
		scanf("%s",input);//�ַ������벻��Ҫ�ӵ�ַ���� 
		if(strcmp(input,"abcdef") == 0)//strcmp��������0˵�������ַ������ 
		{
			printf("��½�ɹ�\n");
			break; 
		}
		else
		printf("�������\n"); 
	}
	if(i == 3)
	{
		printf("��½ʧ��\n"); 
	}
	return 0;
 } 
