#include <stdio.h>


int main()
{
	FILE* pf = fopen("test.txt","w");
	if(pf == NULL)
	{
		perror("fopen");
		return 1;
	}
    char i = 'a';
    for(i='a';i<='z';i++)
    {
    	fputc(i,pf);
	}
	fclose(pf);
	pf = NULL;
	return 0;
}
