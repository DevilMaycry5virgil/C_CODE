#include <stdio.h>
#include <windows.h>//ʹ��sleep������Ҫ���õ�ͷ�ļ� 
#include <stdlib.h> //����system������ͷ�ļ� 

int main()
{
	char arr1[] = "welcome to bit!!!";
	char arr2[] = "xxxxxxxxxxxxxxxxx";
	int sz = sizeof(arr1)/sizeof(arr1[0]);
	int left = 0;
	int right = sz - 2;//��2ԭ��������/0,�������0��ʼ 
	//int right = strlen (arr1)-1;//�󳤶���һ�ַ���,�����0��ʼ������Ҫ��1; 
	printf("%s\n",arr2);
	for(left = 0,right = sz -2; left <= right ; right--,left++)
	{
	    arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);//1000ms����Ҫ����windows��ͷ�ļ���������ʱ����Ϣ1s 
		system("cls");//�����Ļ 
	}
	
	return 0;
}
