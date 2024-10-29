                                               //选择语句与循环语句
#include <stdio.h>
//int main()
//{
//	int input = 0;//给input一个地址，这里赋了一个初始值为0
//	printf("加入比特\n");
//	printf("要好好学习吗(1/0)?");
//	scanf_s("%d", &input);//用一个变量储存1\0，这里选择input储存,新版visual studio微软提供了更安全的scanf_s替代了scanf
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}
int main()
{
    int line = 0;//给line一个地址，这里赋了一个初始值为0(line这了其实就是代指代码行数)
    printf("加入比特\n");

    while (line < 20000)//while为循环函数
    {
        printf("写代码：%d\n", line);//用line来储存代码行数这个变量
        line++;
    }
    if (line >= 20000)
    {
        printf("好offer");
    }
    else
    {
        printf("继续加油");
    }

    return 0;
}
//其实这里已经发现了这段代码无法跳出while循环，继续加油永远无法出现，请看下一节《函数》