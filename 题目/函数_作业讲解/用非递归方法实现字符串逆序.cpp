#include <stdio.h>

void reverse_string(char string[],int sz)
{
	int left = 0;
	char temp = 'a';
	int right = sz-2;
	while(left<right)
	{
		temp = string[left];
		string[left] = string[right];
		string[right] = temp;
		left++;
		right--;
	}
		printf("%s",string);
	
}


int main()
{
	char arr[]="abcdef";
    int sz = sizeof(arr)/sizeof(arr[0]);
	reverse_string(arr,sz);
	return 0;
}
