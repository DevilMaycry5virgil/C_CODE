#include <stdio.h>
#include <assert.h>

size_t my_strlen(const char *p)
{
	assert(p);
	int i = 0;
	while(*p!='\0')
    {
    	i++;
		p++;
		}	
	return i;	
}

int main()
{
	char arr[]="ilovegze";
	size_t a = my_strlen(arr);
	printf("%d",a);
	return 0;
}
