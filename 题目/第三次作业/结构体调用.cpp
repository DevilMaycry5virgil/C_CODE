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
	//printf("%s %s %d %s",(*p).name,(*p).sex,(*p).cla,(*p).num);//���÷�����������ָ����ã�*pһ��Ҫ������
	 printf("%s %s %d %s",p->name,p->sex,p->cla,p->num);//���÷�������ָ���͵��� 
}

 
int main()
{
	struct stu s = {"shihao","male",5,"15875647695"};
	//printf("%s %s %d %s",s.name,s.sex,s.cla,s.num); //���÷���һ����ͨ���� 
	print(&s);
	return 0;
}
