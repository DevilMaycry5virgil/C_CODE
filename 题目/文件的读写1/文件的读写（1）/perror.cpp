#include <stdio.h>

int main()
{
	FILE* pf = fopen("test.txt","r");
	if(pf == NULL)
	{
		perror("fopen");
		return 1;//�ļ��쳣����1 
	}
	fclose(pf);
	pf = NULL;
	return 0;
}
