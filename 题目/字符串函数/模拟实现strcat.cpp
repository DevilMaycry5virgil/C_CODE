#include <stdio.h>
#include <assert.h>

char* my_strcat(char*destination,const char*source) //Ŀ�����ݿ��޸ģ�Դ���Ͳ����޸� 
{
	assert(destination&&source);
	char* start = destination;
	while(*destination != '\0')//Ϊʲô���ﲻ��д��*destination++ 
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
