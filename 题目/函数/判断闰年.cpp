#include <stdio.h>
#include <math.h>

int whether_is_runyear(int y)
{
	if(((y%4==0) && (y%100!=0)) || (y%400==0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int main()
{

	int year = 0;
  for(year=1000;year<=2000;year++)
  {
	if(whether_is_runyear(year))
	{
		printf("% d",year);
	}
}
	return 0;
}
