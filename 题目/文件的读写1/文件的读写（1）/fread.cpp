#include <stdio.h>

struct S
{
	char name[10];
	int age;
	float score;
};


int main()
{
	FILE* pf = fopen("test.txt","rb");
	if(pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	struct S s = {0};
	fread (&s, sizeof(struct S), 1, pf);
	printf("%s %d %f",s.name,s.age,s.score);
	fclose(pf);
	pf = NULL;
	return 0;
}
