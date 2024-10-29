#include <stdio.h>

int main()
{
	FILE* pf = fopen("test.txt","w");
	if(pf==NULL)
	{
		perror("error is:");
		return 1;
	}
	fputs("hello bit\n",pf);//Ð´Ò»ÐÐ 
	fputs("hello bit\n",pf);
	fclose(pf);
	pf=NULL;
	return 0;
}
