#include <stdio.h>


int main()
{
	FILE* pf = fopen("test.txt","a");
	if(pf == NULL)
	{
		perror("fopen");
		return 1;
	}
    char i = 'a';
    fputs("hello world",pf);
	fclose(pf);
	pf = NULL;
	return 0;
}
