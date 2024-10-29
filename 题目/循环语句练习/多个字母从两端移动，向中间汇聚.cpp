#include <stdio.h>
#include <windows.h>//使用sleep函数需要调用的头文件 
#include <stdlib.h> //调用system函数的头文件 

int main()
{
	char arr1[] = "welcome to bit!!!";
	char arr2[] = "xxxxxxxxxxxxxxxxx";
	int sz = sizeof(arr1)/sizeof(arr1[0]);
	int left = 0;
	int right = sz - 2;//减2原因：算上了/0,且数组从0开始 
	//int right = strlen (arr1)-1;//求长度另一种方法,数组从0开始，所以要减1; 
	printf("%s\n",arr2);
	for(left = 0,right = sz -2; left <= right ; right--,left++)
	{
	    arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);//1000ms，需要调用windows的头文件，用于延时，休息1s 
		system("cls");//清空屏幕 
	}
	
	return 0;
}
