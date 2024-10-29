#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	FILE* pf = fopen("test.txt","w");
	if(pf==NULL)
	{
		printf("%s\n",strerror(errno));
		return 1;
	}
	char i = 0;
	for(i='a';i<='z';i++)
	{
		fputc(i,pf);
	
	}

}
