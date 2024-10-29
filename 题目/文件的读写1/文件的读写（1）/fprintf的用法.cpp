#include <stdio.h>

struct S
{
	char name[10];
	int age;
	float score;
};


int main()
{
	FILE* pf = fopen("test.txt","w");
	if(pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	struct S s = {"zhangsan",20,50.5};
	fprintf(pf,"%s %d %f",s.name,s.age,s.score);
	fclose(pf);
	pf = NULL;
	return 0;
}
