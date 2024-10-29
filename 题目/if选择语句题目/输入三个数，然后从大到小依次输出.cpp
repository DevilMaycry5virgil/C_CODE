#include <stdio.h>

void swap(int* px,int* py)
{
	int temp = 0;
	temp = *px;
	*px = *py;
	*py = temp;
	
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d",&a,&b,&c);
	int temp = 0;
	if(a<b)
	{
	   swap(&a,&b);
	}
		if(a<c)
	{
	    swap(&a,&c);
	}
		if(b<c)
	{
		swap(&b,&c);
	}
	printf("%d %d %d",a,b,c);
	return 0;
}
