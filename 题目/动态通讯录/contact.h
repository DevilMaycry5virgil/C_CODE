#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>

enum option
{
	Exit,
	Add,
	Delete,
	Check,
	Modify,
	Show,
	Sort
};

typedef struct PeoInfo
{
	char name[8];
	int age;
	char sex[7];
	char num[12];
	char add[20];
}PeoInfo;

typedef struct Con
{
	PeoInfo* data;//存放联系人信息 
	int i;//用于表示次数 
	int capacity;//当前通讯录容量 
}Con;

//用于初始化 
void Contact_Init(Con *p);

//用于增加联系人
void AddContact(Con *p); 

//用于显示通讯录 
void ShowContact(const Con *p);

//用于删除联系人
void DeleteContact(Con *p); 

//用于查找联系人 
int FindContact(char* goal,Con *p);

//用于查找联系人
void CheckContact(Con *p);

//用于排序联系人 
void SortContact(Con *p);

//用于修改联系人
void ModifyContact(Con *p); 

//用于分类联系人
void SortContact(Con *p); 

//用于销毁空间
void DestroyContact(Con *p); 
