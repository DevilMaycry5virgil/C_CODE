#include <stdio.h>

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	
	int sz = sizeof(arr)/sizeof(arr[0]);//�������鳤�� 
	
	int k = 7;
	int left = 0;//�����ʼ��������±�Ϊ0 
	int right = sz -1;//�����ʼ�ұ������±�Ϊsz - 1
	
	while(left <= right)//ʹ�ö��ַ� ��ǰ��������Ϊ�������飩������ߴ����ұ�ʱ������ѭ����һ��ҪдС�ڵ��� 
	{
		//int mid = (left+right) / 2;//���ַ�������ߺ����ұ���ӳ��Զ����������ҵ����ֱȽϣ�������4.5����ô��4
		int mid = left + (right - left)/2;//�����淽���ĸĽ��������棨left + right)�����������ֵ�����淽�����ܻ���������������ֲ��� 
		if(arr[mid]<k)
		{
			left = mid +1;
		}
		else if(arr[mid]>k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���%d",mid);
			break; //����ѭ������Ϊ�ҵ��ˣ�û��Ҫ������ 
		}
	 } 
	if(left > right)
	{
		printf("�Ҳ�����\n");
	}
	return 0;
 } 
