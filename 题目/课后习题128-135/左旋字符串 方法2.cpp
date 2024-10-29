#include <stdio.h>
#include <string.h>
#include <assert.h>

void reverse(char* p1,char* p2)
{
	assert(p1&&p2);
	while(p1<p2)
	{
		char temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		p1++;
		p2++;
	}
}

void rotate_left(char* arr,int k)
{
	int sz = strlen(arr);
	reverse(arr,arr+k-1);
	reverse(arr+k,arr+sz-1);
	reverse(arr,arr+sz-1);
}

int main()
{
	char arr[]="ojlj";
	int k = 0;
	scanf("%d",&k);
	rotate_left(arr,k);
	printf("%s\n",arr);
}
