#include <stdio.h>
#include <assert.h>
 
char* my_strcat(char* destination,char* source)
{
	assert(destination&&source);
	char* ret = destination;
	char* met = source;
	while(*destination != '\0')
	{
		destination++;
	}
	while(*ret!='\0')
	{
		*destination = *ret;
		ret++;
		source++;
	}
	return met;
}



int main()
{
	char arr1[]="hello ";
    my_strcat(arr1,arr1);
	printf("%s\n",arr1);
	return 0;
}
