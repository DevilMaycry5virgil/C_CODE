#include <stdio.h>
#include <string.h>

int my_stlength(char* str)//字符串传参，传过去的是第一个字符的地址，即a的地址 
{
		if(*str != '\0')
		return 1+my_stlength(str+1);//str相当于地址，当第一个字符不是'\0'后，通过地址+1可以到下一个字母判断是否是'\0'，一开始就加一是因为如果第一个不是'\0' 就已经算一个 
		else
		return 0;
}



int main()
{
	char arr[]="abc";
	int m = my_stlength(arr);//将数组传到函数中实际上是传数组首字符的地址 
	printf("%d ",m);
	return 0;
}
