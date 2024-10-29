#include <stdio.h>

int main()
{
	FILE* pf = fopen("test.txt","r");
	if(pf == NULL)
	{
		perror("fopen");
		return 1;//�ļ��쳣����1 
	}
	char ch = '0';
	while(( ch = fgetc(pf))!=EOF)
	{
		printf("%c ",ch);
	}
	fclose(pf);
	pf = NULL;
	return 0;
}
