#include <stdio.h>
#include <assert.h>

char* my_strcat(char*destination,const char*source) //目标数据可修改，源类型不可修改 
{
	assert(destination&&source);
	char* start = destination;
	while(*destination != '\0')//为什么这里不能写成*destination++ 
	{
		destination++;
	}
	while(*destination++ = *source++)
	{
		;
	}
	return start;
}

int main()
{
	char arr1[] = "hello ";
	char arr2[] = "compare";
	my_strcat(arr1,arr2);
	printf("%s\n",arr1);
}
