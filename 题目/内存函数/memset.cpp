#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "hello bit";
	memset(arr,'x',5);
	printf("%s\n",arr);
	return 0;
}
