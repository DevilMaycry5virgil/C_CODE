#include <stdio.h>

int main()
{
	int weight = 0;
	int height = 0;
	scanf("%d %d",&weight,&height);
	float BMI = weight/(height/100.0)/(height/100.0);
	printf("%.2f",BMI);
	return 0;
}
