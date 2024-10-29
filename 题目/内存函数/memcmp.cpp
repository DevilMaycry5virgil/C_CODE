#include <stdio.h>
#include <string.h>

int main()
{
	int arr1[] = {1,2,1,4,5};
	int arr2[] = {1,2,2,4,5};
	int ret = memcmp(arr1,arr2,12);
	printf("%d",ret);
	return 0;
}
