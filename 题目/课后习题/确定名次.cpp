#include <stdio.h>


int main()
{
	char a[5]={0};
	if((a[1]=='b'||a[2]=='a')&&(a[1]=='b'||a[3]=='e')&&(a[0]=='c'||a[1]=='d')&&(a[4]=='c'||a[2]=='d')&&(a[3]=='e'||a[0]=='a')==1)
	{
		int i = 0;
		for(i=0;i<5;i++)
		{
			printf("%c ",a[i]);
		}
	}
	return 0;
}
