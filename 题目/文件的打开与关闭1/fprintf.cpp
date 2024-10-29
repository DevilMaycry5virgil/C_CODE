#include <stdio.h>

struct S
{
	char name[100];
	int age;
	float score;
};




int main()
{
	struct S s = {"zhang",20,50.5f};
	FILE* pf = fopen("test.txt","w");
	if(pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	fprintf(pf,"%s %d %f",s.name,s.age,s.score);
	fclose(pf);
	pf = NULL;
	return 0;
}
