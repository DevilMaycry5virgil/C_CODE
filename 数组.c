                                                    //数组
//当需要用到多个数字时,需要命名多个函数储存多个数字，这太麻烦了。所以有了数组
#include <stdio.h>
int main()
{
	//int a = 10;
	//int b = 11;
	//int c = 12;     这里没用数组太麻烦了
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//这就是有10个空间的数组，并且每个数组内的数字都被编号了，0是0号，1是1号
	//当我想运用数组的第九个元素时可写为     arr[8],如下
	//printf("%d\n", arr[8]);
	//又比如我想打印下标不为0的元素，就可以用上节课学的循环
	int i = 0;//给i赋一个初始值为0值
	while (i < 10)
	{
		printf("%d", arr[i]);
		i = i + 1;
	}
	return 0;
}