#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	FILE* pf = fopen("test.txt","r");
	if(pf==NULL)
	{
		printf("%s\n",strerror(errno));
		return 1;
	}
	
	int ch = 0;
	while((ch = fgetc(pf))!=EOF)
	{
		printf("%c ",ch);
	}
	fclose(pf);
	pf = NULL;
	return 0;

}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

