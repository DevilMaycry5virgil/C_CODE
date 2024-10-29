#include <stdio.h>

int add(int k)
{
	return ++k;//可以是++k，也可以是k+1，但不能是k++， 
}

int main()
{
	int i = 0;
	scanf("%d",&i);
	int m = add(i);
	printf("%d",m);
	return 0; 
}
