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
	PeoInfo* data;//�����ϵ����Ϣ 
	int i;//���ڱ�ʾ���� 
	int capacity;//��ǰͨѶ¼���� 
}Con;

//���ڳ�ʼ�� 
void Contact_Init(Con *p);

//����������ϵ��
void AddContact(Con *p); 

//������ʾͨѶ¼ 
void ShowContact(const Con *p);

//����ɾ����ϵ��
void DeleteContact(Con *p); 

//���ڲ�����ϵ�� 
int FindContact(char* goal,Con *p);

//���ڲ�����ϵ��
void CheckContact(Con *p);

//����������ϵ�� 
void SortContact(Con *p);

//�����޸���ϵ��
void ModifyContact(Con *p); 

//���ڷ�����ϵ��
void SortContact(Con *p); 

//�������ٿռ�
void DestroyContact(Con *p); 
