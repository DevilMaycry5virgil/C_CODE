#include <stdio.h>

int binary_search(int arr[],int k,int sz)//arr[]在函数中实际上是一个指针变量 
{
    int left = 0;
    int right = sz -1;
    while(left <= right)
    {
    int mid = (left + right)/2; //中位数计算要放里面，因为中位数要随left和right不断调制 
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
    
    return -1;//找不到该数组的结束标志，不用return 0 是因为arr下标有0，会导致冲突 
}


int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k = 5;
	int sz = sizeof(arr)/sizeof(arr[0]);//计算数组元素数量不可以放在函数内计算，因为函数内arr[]是一个指针变量，指针变量大小为4或者8，实际的40并不相同 
	int ret = binary_search(arr,k,sz);//将数组，要找元素，数组大小传入函数中 
	if(ret == -1)
	{
		printf("在数组中找不到该数字");
	}
	else
	{
		printf("该数字在arr[%d]中",ret);
	}
	return 0;
}
