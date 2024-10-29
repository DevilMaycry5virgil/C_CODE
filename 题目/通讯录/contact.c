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
		printf("联系人已经达到上限，不能继续添加\n");
		return;//因为是void,所以不用写返回值 
	}
		printf("请输入姓名:<\n");
		scanf("%s",p->data[p->i].name); 
		printf("请输入年龄:<\n");
		scanf("%d",&(p->data[p->i].age)); //由于age不是数组，所以要取地址 
		printf("请输入性别:<\n");
		scanf("%s",p->data[p->i].sex); 
		printf("请输入号码:<\n");
		scanf("%s",p->data[p->i].num); 	
		printf("请输入地址:<\n");
		scanf("%s",p->data[p->i].add); 
		p->i++;
		printf("添加联系人信息成功\n");
	return;
}

void ShowContact(const Con *p)
{
	assert(p);
	int k = 0;
	printf("%11s\t%6s\t%9s\t%6s\t%20s\n","姓名","年龄","性别","号码","地址");//打印中文要写"" 
	for(k=0;k<p->i;k++)
	{
		printf("%8s\t%3d\t%7s\t%12s\t%20s\n",p->data[k].name,p->data[k].age,p->data[k].sex,p->data[k].num,p->data[k].add);//注意data[]括号里面的变量是k 
	}
	return;
}

void DeleteContact(Con *p)
{
	char name[10];
	int i = 0;
	assert(p);
	printf("请输入需要删除联系人的名字:<\n");
	scanf("%s",name);
	int ret = FindContact(name,p);
	if(ret==-1)
	{
		printf("没有找到需要删除的联系人\n");
	}
	else
	{
		for(i=ret;i<p->i-1;i++)
		{
			p->data[i] = p->data[i+1];
		}
		p->i--;//因为在向前替换的过程中，替换到最后一行会有重复，所以要--; 
	    printf("删除成功\n");
	}
	return;
}



void CheckContact(Con *p)
{
	int i = 0;
	char name[10]={0};
	printf("请输入需要查询的姓名:<\n");
	scanf("%s",name);
	int ret = FindContact(name,p);
	if(ret==-1)
	{
		printf("没有找到需要删除的联系人\n");
	}
	else
	{
		printf("%11s\t%6s\t%9s\t%6s\t%20s\n","姓名","年龄","性别","号码","地址");
		printf("%8s\t%3d\t%7s\t%12s\t%20s\n",p->data[ret].name,p->data[ret].age,p->data[ret].sex,p->data[ret].num,p->data[ret].add);	
	}
	return;
}

void ModifyContact(Con *p)
{
	int i = 0;
	char name[10]={0};
	printf("请输入需要修改联系人的姓名:<\n");
	scanf("%s",name);
	int ret = FindContact(name,p);
	if(ret==-1)
	{
		printf("没有找到需要修改的的联系人\n");
	}
	else
	{
		printf("请输入姓名:<\n");
		scanf("%s",p->data[ret].name); 
		printf("请输入年龄:<\n");
		scanf("%d",&(p->data[ret].age)); //由于age不是数组，所以要取地址 
		printf("请输入性别:<\n");
		scanf("%s",p->data[ret].sex); 
		printf("请输入号码:<\n");
		scanf("%s",p->data[ret].num); 	
		printf("请输入地址:<\n");
		scanf("%s",p->data[ret].add); 
		printf("修改联系人信息成功\n");	
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
	printf("%11s\t%6s\t%9s\t%6s\t%20s\n","姓名","年龄","性别","号码","地址");//打印中文要写"" 
	for(k=0;k<p->i;k++)
	{
		printf("%8s\t%3d\t%7s\t%12s\t%20s\n",p->data[k].name,p->data[k].age,p->data[k].sex,p->data[k].num,p->data[k].add);//注意data[]括号里面的变量是k 
	}
	return;
}
