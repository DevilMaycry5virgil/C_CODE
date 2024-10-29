#include <stdio.h>

int main()
{
	FILE* pf = fopen("test.txt","r");
	char ch = fgetc(pf);
	printf("%c\n",ch);//a
	printf("%ld",ftell(pf));//1
	fclose(pf);
	pf = NULL;
	return 0;
}
