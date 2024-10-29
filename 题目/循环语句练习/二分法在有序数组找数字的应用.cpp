#include <stdio.h>

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	
	int sz = sizeof(arr)/sizeof(arr[0]);//计算数组长度 
	
	int k = 7;
	int left = 0;//定义最开始左边数组下标为0 
	int right = sz -1;//定义最开始右边数组下标为sz - 1
	
	while(left <= right)//使用二分法 （前提是数组为有序数组），但左边大于右边时，跳出循环，一定要写小于等于 
	{
		//int mid = (left+right) / 2;//二分法，最左边和最右边相加除以二，再与所找的数字比较，如果算出4.5，那么算4
		int mid = left + (right - left)/2;//是上面方法的改进，当上面（left + right)超出整型最大值，上面方法可能会遇到溢出，但这种不会 
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
			printf("找到了，下标是%d",mid);
			break; //跳出循环，因为找到了，没必要再找了 
		}
	 } 
	if(left > right)
	{
		printf("找不到了\n");
	}
	return 0;
 } 
