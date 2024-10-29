#include <stdio.h>

struct S
{
	char name[10];
	int age;
	float score;
};

int main()
{
	struct S s = {"zhangsan",20,70.5f};
	struct S tmp = {0};
	char arr[100];
	sprintf(arr,"%s %d %f\n",s.name,s.age,s.score);
	printf("%s",arr);
	sscanf(arr,"%s %d %f",tmp.name,&(tmp.age),&(tmp.score));
	printf("%s %d %f",tmp.name,tmp.age,tmp.score);
	return 0;
}
