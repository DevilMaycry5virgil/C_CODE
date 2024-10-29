#include <stdio.h>

struct S
{
	char name[10];
	int age;
	float score;
};


int main()
{
	FILE* pf = fopen("test.txt","r");
	if(pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	struct S s = {0};
	fscanf(pf,"%s %d %f",s.name,&(s.age),&(s.score));
	printf("%s %d %f",s.name,s.age,s.score);
	fclose(pf);
	pf = NULL;
	return 0;
}
