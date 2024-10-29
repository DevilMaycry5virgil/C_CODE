#include <stdio.h>


int main()
{
	FILE* pf = fopen("test.txt","r");
	if(pf == NULL)
	{
		perror("fopen");
		return 1;
	}
    char arr[10] = {0};
    fgets(arr,5,pf);
    printf("%s",arr);
	fclose(pf);
	pf = NULL;
	return 0;
}
