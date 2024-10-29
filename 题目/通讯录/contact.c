#include "contact.h"

int FindContact(char* goal,Con *p)
{
	int i = 0;
	for(i=0;i<p->i;i++)
	{
		if(strcmp(goal,p->data[i].name)==0)
		return i;
	}
	return -1;
}

void Contact_Init(Con *P)
{
	P->i=0;
	memset(P->data,0,sizeof(P->data));
}

void AddContact(Con *p)
{
	assert(p);
	if(p->i==100)
	{
		printf("��ϵ���Ѿ��ﵽ���ޣ����ܼ������\n");
		return;//��Ϊ��void,���Բ���д����ֵ 
	}
		printf("����������:<\n");
		scanf("%s",p->data[p->i].name); 
		printf("����������:<\n");
		scanf("%d",&(p->data[p->i].age)); //����age�������飬����Ҫȡ��ַ 
		printf("�������Ա�:<\n");
		scanf("%s",p->data[p->i].sex); 
		printf("���������:<\n");
		scanf("%s",p->data[p->i].num); 	
		printf("�������ַ:<\n");
		scanf("%s",p->data[p->i].add); 
		p->i++;
		printf("�����ϵ����Ϣ�ɹ�\n");
	return;
}

void ShowContact(const Con *p)
{
	assert(p);
	int k = 0;
	printf("%11s\t%6s\t%9s\t%6s\t%20s\n","����","����","�Ա�","����","��ַ");//��ӡ����Ҫд"" 
	for(k=0;k<p->i;k++)
	{
		printf("%8s\t%3d\t%7s\t%12s\t%20s\n",p->data[k].name,p->data[k].age,p->data[k].sex,p->data[k].num,p->data[k].add);//ע��data[]��������ı�����k 
	}
	return;
}

void DeleteContact(Con *p)
{
	char name[10];
	int i = 0;
	assert(p);
	printf("��������Ҫɾ����ϵ�˵�����:<\n");
	scanf("%s",name);
	int ret = FindContact(name,p);
	if(ret==-1)
	{
		printf("û���ҵ���Ҫɾ������ϵ��\n");
	}
	else
	{
		for(i=ret;i<p->i-1;i++)
		{
			p->data[i] = p->data[i+1];
		}
		p->i--;//��Ϊ����ǰ�滻�Ĺ����У��滻�����һ�л����ظ�������Ҫ--; 
	    printf("ɾ���ɹ�\n");
	}
	return;
}



void CheckContact(Con *p)
{
	int i = 0;
	char name[10]={0};
	printf("��������Ҫ��ѯ������:<\n");
	scanf("%s",name);
	int ret = FindContact(name,p);
	if(ret==-1)
	{
		printf("û���ҵ���Ҫɾ������ϵ��\n");
	}
	else
	{
		printf("%11s\t%6s\t%9s\t%6s\t%20s\n","����","����","�Ա�","����","��ַ");
		printf("%8s\t%3d\t%7s\t%12s\t%20s\n",p->data[ret].name,p->data[ret].age,p->data[ret].sex,p->data[ret].num,p->data[ret].add);	
	}
	return;
}

void ModifyContact(Con *p)
{
	int i = 0;
	char name[10]={0};
	printf("��������Ҫ�޸���ϵ�˵�����:<\n");
	scanf("%s",name);
	int ret = FindContact(name,p);
	if(ret==-1)
	{
		printf("û���ҵ���Ҫ�޸ĵĵ���ϵ��\n");
	}
	else
	{
		printf("����������:<\n");
		scanf("%s",p->data[ret].name); 
		printf("����������:<\n");
		scanf("%d",&(p->data[ret].age)); //����age�������飬����Ҫȡ��ַ 
		printf("�������Ա�:<\n");
		scanf("%s",p->data[ret].sex); 
		printf("���������:<\n");
		scanf("%s",p->data[ret].num); 	
		printf("�������ַ:<\n");
		scanf("%s",p->data[ret].add); 
		printf("�޸���ϵ����Ϣ�ɹ�\n");	
	}
	return;

}

int compare(const void* e1,const void* e2)
{
	return strcmp(((PeoInfo *)e1)->name,((PeoInfo *)e2)->name);
}

void SortContact(Con *p)
{
	int i = 0;
	qsort(p->data,p->i,sizeof(PeoInfo),compare);
	int k = 0;
	printf("%11s\t%6s\t%9s\t%6s\t%20s\n","����","����","�Ա�","����","��ַ");//��ӡ����Ҫд"" 
	for(k=0;k<p->i;k++)
	{
		printf("%8s\t%3d\t%7s\t%12s\t%20s\n",p->data[k].name,p->data[k].age,p->data[k].sex,p->data[k].num,p->data[k].add);//ע��data[]��������ı�����k 
	}
	return;
}
