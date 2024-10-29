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
	char arr[100];
	sprintf(arr,"%s %d %f",s.name,s.age,s.score);
	printf("%s",arr);
	return 0;
}
