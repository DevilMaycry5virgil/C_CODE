#include <stdio.h>

int main()
{   
    int i = 0;
    int arr[] = {73,32,99,97,110,32,100,111,32,105,116,33};
    int a = sizeof(arr)/sizeof(arr[0]); //计算数组长度大小，sizeof(arr)，计算数组总大小，单位是字节，sizeof(arr[0])，计算的是数组元素大小。 
    while(i<a)//进入循环，为了将数组里的数字全部打出 
    {
    	printf("%c",arr[i]);//后面如果输入的是数字，打印对应的ascii码表 
    	i++;
	}
    
	return 0;
}
