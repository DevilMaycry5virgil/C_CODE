                                                         //函数
#include <stdio.h>
Add(int x, int y)//想象数学中有一个函数它可以带2个值计算(如只能带一个值计算的函数就有一次函数y=2x)，Add函数有x和y可以带人，n1代入x,n2带入y
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int n1 = 0;
	int n2 = 0;//命名2个变量n1和n2，并给一个初始值0
	scanf_s("%d %d", &n1, &n2);//接受2个变量，注意2个%d要用一个空格分开
	//int sum = n1 + n2;//sum是一个求和函数,这里故意注释掉自己造一个Add函数
	int sum = Add(n1, n2);//用到了Add函数就要在前面定义一个Add函数
	//这里表示n1,n2的值传递给Add然后通过Add函数的计算逻辑后得出结果保存到sum里面然后返回
	printf("%d\n", sum);
	return 0;
}