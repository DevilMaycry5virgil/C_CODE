#include <stdio.h>


struct S
{
	int n;
	int arr[];//柔性数组要有一个不确定大小的变量,int arr[]或者int arr[0]都是不确定大小的变量 
};

int main()
{
	int sz = sizeof(struct S);
	printf("%d",sz);
	return 0;
}
