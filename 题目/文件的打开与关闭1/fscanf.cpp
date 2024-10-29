#include <stdio.h>

struct S
{
	char name[100];
	int age;
	float score;
};




int main()
{
	struct S s = {0};
	FILE* pf = fopen("test.txt","r");
	if(pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	fscanf(pf,"%s %d %f",s.name,&(s.age),&(s.score));
	fprintf(stdout,"%s %d %f",s.name,s.age,s.score);
	fclose(pf);
	pf = NULL;
	return 0;
}
