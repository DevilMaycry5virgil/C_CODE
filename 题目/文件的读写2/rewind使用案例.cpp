#include <stdio.h>


int main()
{
	FILE* pf = fopen("test.txt","r");
	char ch = fgetc(pf);//��fgetcִ����֮��ָ��������һ��λ�� 
	printf("%c\n",ch);//a
	ch = fgetc(pf);
	printf("%c\n",ch);//b
	fseek(pf,2,SEEK_CUR);
	ch = fgetc(pf);
	printf("%c\n",ch);//e
	fseek(pf,-1,SEEK_END);
	ch = fgetc(pf);
	printf("%c\n",ch);//f
	fseek(pf,1,SEEK_SET);
	ch = fgetc(pf);
	printf("%c\n",ch);//b
	rewind(pf);
	ch = fgetc(pf);
	printf("%c\n",ch);//a
	fclose(pf);
	pf = NULL;
	return 0;
} 
