#include <stdio.h>
#include <string.h>

int my_stlength(char* str)//�ַ������Σ�����ȥ���ǵ�һ���ַ��ĵ�ַ����a�ĵ�ַ 
{
		if(*str != '\0')
		return 1+my_stlength(str+1);//str�൱�ڵ�ַ������һ���ַ�����'\0'��ͨ����ַ+1���Ե���һ����ĸ�ж��Ƿ���'\0'��һ��ʼ�ͼ�һ����Ϊ�����һ������'\0' ���Ѿ���һ�� 
		else
		return 0;
}



int main()
{
	char arr[]="abc";
	int m = my_stlength(arr);//�����鴫��������ʵ�����Ǵ��������ַ��ĵ�ַ 
	printf("%d ",m);
	return 0;
}
