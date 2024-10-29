#include <stdio.h>

int main()
{
	FILE* pf = fopen("test.txt","r");
	if(pf == NULL)
	{
		perror("fopen");
		return 1;//文件异常返回1 
	}
	char ch = '0';
	ch = fgetc(pf);
	printf("%c\n",ch);
	ch = fgetc(pf);
	printf("%c",ch);
	fclose(pf);
	pf = NULL;
	return 0;
}
