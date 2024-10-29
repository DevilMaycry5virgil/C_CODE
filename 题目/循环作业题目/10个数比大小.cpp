#include <stdio.h>

int main()
{
	int i = 0;
	int h = 0; //从0开始，i从1开始，保证一开始与arr【1】比较 
	int arr[10] = {1,2,3,4,5,21,7,8,9,10};
	for(i=1;i<=10;i++)
	{
		if(arr[h]<arr[i])
		h = h+1;//如果后面的数比前面大，h往右边移一位，否则不变 
	}
	printf("这个数组的最大数为：%d",arr[h]);
	return 0;
}
