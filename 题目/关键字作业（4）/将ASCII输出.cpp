#include <stdio.h>

int main()
{   
    int i = 0;
    int arr[] = {73,32,99,97,110,32,100,111,32,105,116,33};
    int a = sizeof(arr)/sizeof(arr[0]); //�������鳤�ȴ�С��sizeof(arr)�����������ܴ�С����λ���ֽڣ�sizeof(arr[0])�������������Ԫ�ش�С�� 
    while(i<a)//����ѭ����Ϊ�˽������������ȫ����� 
    {
    	printf("%c",arr[i]);//�����������������֣���ӡ��Ӧ��ascii��� 
    	i++;
	}
    
	return 0;
}
