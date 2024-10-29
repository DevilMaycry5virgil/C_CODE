#include <stdio.h>
#include <assert.h>

char* my_strstr(const char*str1,const char*str2)
{
	assert(str1&&str2);
	char* start = (char*)str2;
    while(*str1 != '\0')
    {
	    str2 = (const char*)start;
	   if(*str2 == *str1)
	    {
	    const char* tag = str1;
		while(*str2==*str1)
		  {
		  	str1++;
		  	str2++;
		    if((*str2 == '\0' && *str1 != '\0') || (*str2 == '\0' && *str1 == '\0'))
		    return start;
		  }
		  str1 = tag + 1;//防止abbbcdef与 bbc比较 
	}
       	else
	   {
		str1++;
	   }
    }

}


int main()
{
	char a[] = "abbbcdef";
	char b[] = "def";
	char* ret = my_strstr(a,b);
	if(ret == NULL)
	{
		printf("找不到");
	}
	else
	{
		printf("%s\n",ret);
	}
	return 0;
}
