#include <stdio.h>
#include <string.h>

struct stu
{
	char name[20];
	char sex[5];
	int cla;
	int number;
};


int main()
{
	struct stu s = {"zhangsan","male",5,15875647695};
	printf("%s %s %d %d\n",s.name,s.sex,s.cla,s.number);
	return 0;
	

}

