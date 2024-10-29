#include <stdio.h>
#include <assert.h>
#include <string.h>

int compare(char* pp1,char* pp2)
{
	assert(pp1&&pp2);
	while(*pp1 != '\0')
	{
		if(*pp1==*pp2)
		{			
		    pp1++;
			pp2++;
		}
		else
		{
			break;
		}
	}
	if(*pp1 == '\0')
	{
		return 1;
	}
    else
    {
    	return 0;
	}
	
}

int judge_str(char* p1,char* p2)
{
	assert(p1&&p2);
	int sz = strlen(p1);
	int sz_2 = strlen(p2);
	if(sz!=sz_2)
	{
		return 0;
	}
	int i = 0;
	for(i=0;i<sz;i++)
	{
		char temp = *p1;
		int j = 0;
		while(*(p1+j)!='\0')
		{
			*(p1+j)=*(p1+j+1);
			j++;
	    }
	    *(p1+sz-1)=temp;
		if(compare(p1,p2))
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	char arr1[]="abcdef";
	char arr2[]="abcdefg";
	int ret = judge_str(arr1,arr2);
	printf("%d",ret);
	return 0;
}
