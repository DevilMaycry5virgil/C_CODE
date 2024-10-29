                                                             //一，常量
//小贴士：  %d：打印整型    %c：打印字符    %s：打印字符串     %f：打印float类型的数据（float浮点数）   %lf:打印double类型的数据（double双精度）   
//          %zu：打印sizeof的返回值
// printf("%s\n","abcdef"  前面是指定格式，后面是打印内容，只有字符串能如下这样简写   printf("abcdef")



#include <stdio.h>

//#define MAX 100
//int main()
//{
//	printf("%d\n",MAX);

//	return 0;
//}
//1.字面常量 a=20
//2.const修饰的常变量 const int a=20  这时a被const锁定了变成了常变量，如果再把a=10 吧a改为10会报错
//3.define定义的标识符常量
//4.枚举常量（它本质也是整数型，如RED的取值可能是012等等）
//其实枚举常量就是列举，如三原色的列举，enum就是一个列举函数
enum Color
{
	//主符号类一般大写
	RED,
	GREEN,
	BLUE	
};
int main()
{
	//为以上的枚举常量创建一个整型对象
	int num = 10;
	//把RED赋值给c，其实就是向系统申请了一块内存，c是一个变量只有变量才申请内存，常量只是一个符号（名字）系统没有运用它，它就不会占用内存
    enum Color c = RED;
	return 0;
}