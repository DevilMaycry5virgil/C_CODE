#include <stdio.h>


struct S
{
	int n;
	int arr[];//��������Ҫ��һ����ȷ����С�ı���,int arr[]����int arr[0]���ǲ�ȷ����С�ı��� 
};

int main()
{
	int sz = sizeof(struct S);
	printf("%d",sz);
	return 0;
}
