#include <stdio.h>

int add(int k)
{
	return ++k;//������++k��Ҳ������k+1����������k++�� 
}

int main()
{
	int i = 0;
	scanf("%d",&i);
	int m = add(i);
	printf("%d",m);
	return 0; 
}
