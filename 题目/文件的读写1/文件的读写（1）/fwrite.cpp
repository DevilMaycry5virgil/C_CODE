#include <stdio.h>

struct S
{
	char name[10];
	int age;
	float score;
};


int main()
{
	FILE* pf = fopen("test.txt","wb");
	if(pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	struct S s = {"zhangsan",20,50.5};
	fwrite (&s, sizeof(struct S), 1, pf);
	fclose(pf);
	pf = NULL;
	return 0;
}
