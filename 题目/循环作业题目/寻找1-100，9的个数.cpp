#include <stdio.h>

int main()
{
	int count = 0;
	int i = 0;
	for(i=1;i<=100;i++)
	{
	     if(i % 10 == 9)
	     count++;
	     if (i / 10 == 9)//在if前不要加else，否则会与前面的if产生联系，满足前面if条件了之后就不会执行下面的else语句，而99有两个9 
	     count++;
	}
	printf("%d",count);
	return 0;
}
