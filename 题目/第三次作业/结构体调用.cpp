#include <stdio.h>

struct stu
{
  char name[20];
  char sex[5];
  int cla;
  char num[20];
  
};

print(struct stu *p)
{
	//printf("%s %s %d %s",(*p).name,(*p).sex,(*p).cla,(*p).num);//调用方法二，函数指针调用，*p一定要加括号
	 printf("%s %s %d %s",p->name,p->sex,p->cla,p->num);//调用方法三，指向型调用 
}

 
int main()
{
	struct stu s = {"shihao","male",5,"15875647695"};
	//printf("%s %s %d %s",s.name,s.sex,s.cla,s.num); //调用方法一：普通调用 
	print(&s);
	return 0;
}
