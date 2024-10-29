#include <stdio.h>

int binary_search(int arr[],int k,int sz)//arr[]�ں�����ʵ������һ��ָ����� 
{
    int left = 0;
    int right = sz -1;
    while(left <= right)
    {
    int mid = (left + right)/2; //��λ������Ҫ�����棬��Ϊ��λ��Ҫ��left��right���ϵ��� 
    if(arr[mid]<k)
    {
    	left = mid +1;
	}
	else if(arr[mid]>k)
	{
		right = mid -1;
	}
	else
		return mid;
    }
    
    return -1;//�Ҳ���������Ľ�����־������return 0 ����Ϊarr�±���0���ᵼ�³�ͻ 
}


int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k = 5;
	int sz = sizeof(arr)/sizeof(arr[0]);//��������Ԫ�����������Է��ں����ڼ��㣬��Ϊ������arr[]��һ��ָ�������ָ�������СΪ4����8��ʵ�ʵ�40������ͬ 
	int ret = binary_search(arr,k,sz);//�����飬Ҫ��Ԫ�أ������С���뺯���� 
	if(ret == -1)
	{
		printf("���������Ҳ���������");
	}
	else
	{
		printf("��������arr[%d]��",ret);
	}
	return 0;
}
