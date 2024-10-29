#include <stdio.h>

double cifang_function(int n,int k)
{
	if(k>0)
	{
	 return n*cifang_function(n,k-1);
    }
    else if(k==0)
    {
    	return 1;
	}
    else
    {
    	return 1.0/cifang_function(n,-k);//要用分数，整型打不出来小数 
	}
}



int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d",&n,&k);
	double m = cifang_function(n,k);
	printf("%lf",m);
	return 0;
}
