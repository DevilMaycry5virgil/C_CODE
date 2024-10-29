#include <stdio.h>

int main()
{
	FILE* pf = fopen("test.txt","r");
	if(pf == NULL)
	{
		perror("fopen");
		return 0;
	}
	
	char arr[100];
	fgets(arr,5,pf);
	int i = 0;
	while(*(arr+i)!='\0')
	{
		printf("%c",*(arr+i));
		i++;
	}
	return 0;
}
