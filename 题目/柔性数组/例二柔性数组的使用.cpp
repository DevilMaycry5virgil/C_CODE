#include <stdio.h>
#include <stdlib.h>


struct S
{
	int n;
	int arr[];//��������Ҫ��һ����ȷ����С�ı���,int arr[]����int arr[0]���ǲ�ȷ����С�ı��� 
};

int main()
{
    //���������ʹ�� 
	struct S* ps = (struct S*)malloc(sizeof(struct S)+40);//+40����Ϊ��������arr�������10��Ԫ��
	ps->n=10;
	int i = 0;
	for(i=0;i<ps->n;i++)
	{
	 ps->arr[i]=i;
	 } 
	for(i=0;i<ps->n;i++)
	{
	printf("%d ",ps->arr[i]);
	 } 
	struct S* ptr = (struct S*)realloc(ps,sizeof(struct S)+80);//�������������չ 
	if(ptr!= NULL)
	{
		ps = ptr;
		ptr = NULL;
	}
	 free(ps);//��ֹ�ڴ�й¶ 
	 ps = NULL;
	return 0;
}
