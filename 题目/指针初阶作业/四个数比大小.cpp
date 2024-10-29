#include <stdio.h>

int max(int f,int g)
{
	if(f>g)
    return f;
	else
	return g;
}

int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int e = max(a,b);
	int k = max(c,d);
	int m = max(e,k);
	printf("%d",m);
	return 0;
}
