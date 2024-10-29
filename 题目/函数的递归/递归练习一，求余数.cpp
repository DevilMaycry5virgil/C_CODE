#include <stdio.h>

int print(int k)
{
	int h = 0;
	if(k>9)//添加限定条件，使递归可以停下来 
	{
		print(k/10);//进入递归，每次除以10，直到不满足k>9 
	}
	 h = k % 10;//从不满足k>9开始求余数，这时就能将每个位数一个个地求出 
	printf("%d ",h);//printf函数要放在print里面，因为如果放在外面就只会执行最后一次的结果 
}







int main()
{
	int i = 0;
	scanf("%d",&i);
	print(i);//创建print函数，将输入的每一位逐一打印 
	return 0;
}
