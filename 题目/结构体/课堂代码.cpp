#include <stdio.h>

/*struct peo
{
	char name[20];
	char sex[5];
	char num[20];
	int height;
}p1;//p1Ϊȫ�ֱ��� 


int main()
{
	peo p1 = {"shihao","male","15875647695",180};  
	struct peo p = {"zhangsan","male","13422099800",180};//PΪ�ֲ����� 
	printf("%s %s %s %d\n",p.sex,p.num,p.name,p.height);
	printf("%s %s %s %d\n",p1.sex,p1.num,p1.name,p1.height);
	return 0;
}*/

/*struct peo
{
	char name[20];
	char sex[5];
	char num[20];
	int height;
}p;

struct full
{
	struct peo p;
	char address[20];
	char state[5];
};

int main()
{
	peo p = {"zhangsan","male","13422099800",180};
	full m = {{"zhangsan","male","13422099800",180},"zhuhai","yes"};//�ṹ��Ƕ�׵ĳ�ʼ�� 
	printf("%s %s %s %d\n",p.sex,p.num,p.name,p.height);
	printf("%s %s %s %d %s %s\n",m.p.name,m.p.sex,m.p.num,m.p.height,m.address,m.state);//�ṹ��Ƕ�׵ĵ��� 
	return 0;
}*/ //�ṹ��Ƕ�׵ĳ�ʼ���Լ����� 



/*struct peo
{
	char name[20];
	char sex[5];
	char num[20];
	int height;
}p;

void print(struct peo m) //sturct peo��һ�����ͣ�������struct������ 
{
	printf("%s %s %s %d\n",m.sex,m.num,m.name,m.height);
}

int main()
{
	peo p = {"zhangsan","male","13422099800",180};
	print(p); 
	return 0;
}*/  //�����ⲿ������ֵ��ӡ 

/*struct peo
{
	char name[20];
	char sex[5];
	char num[20];
	int height;
}p;

void print(struct peo *m) //sturct peo��һ�����ͣ�������struct������ 
{
	printf("%s %s %s %d\n",m->sex,m->num,m->name,m->height);
}

int main()
{
	peo p = {"zhangsan","male","13422099800",180};
	print(&p); 
	return 0;
}*/ //�����ⲿ������ַ��ӡ 










