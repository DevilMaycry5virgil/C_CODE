#include <stdio.h>

int main()
{
	int i = 0;
	int h = 0; //��0��ʼ��i��1��ʼ����֤һ��ʼ��arr��1���Ƚ� 
	int arr[10] = {1,2,3,4,5,21,7,8,9,10};
	for(i=1;i<=10;i++)
	{
		if(arr[h]<arr[i])
		h = h+1;//������������ǰ���h���ұ���һλ�����򲻱� 
	}
	printf("�������������Ϊ��%d",arr[h]);
	return 0;
}
