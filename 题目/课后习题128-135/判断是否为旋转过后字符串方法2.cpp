#include <stdio.h>
#include <string.h>

int rotate_equal(char* arr1,char* arr2)
{
	int sz = strlen(arr1);
	char* start = arr1;
	while(*arr1 != '\0')
	{
		arr1 = arr1 +1;
	}
	strncat(arr1,start,6);
	int i = 0;
	int rt = strlen(start);
	for(i = 0;i<rt-1;i++)
	{
		if(strcmp(arr2,start+i))
		{
			return 1;
		}
	}
	return 0;
}


int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefae";
	int ret = rotate_equal(arr1,arr2);
	printf("%d",ret);
	return 0;
}
