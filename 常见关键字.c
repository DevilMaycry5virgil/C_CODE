                                                     //常见关键字(命名变量不能与函数冲突)
//关键字是C语言内置的，不能自己创建
//   auto  自动     break  跳出循环(通常与for/while/do while循环放在一起)   case(它是switch的一部分，一般与switch连用)     
//   char/short/int/long/float/double  都是数据类型      const    常属性(说白了就是不能被改的属性)      continue   用于循环
//   default(它是switch或do while的一部分，一般与switch/do while连用)  else  分支语句或反馈语句与if连用  enum/struct/union是一种自定义的数据
// 类型，从左向右依次是：枚举/结构体/联合体或者共用体      extern  用于声明外部符号   for 循环   goto  跳转   if   判断
// register  寄存器    return 返回     signed  有符号的   unsigned  无符号的   sizeof  计算内存大小(单位字节)   static  与寄存器类似决定储存在
// 哪里且是静态的储存     typedef  类型重命名    viod   无(函数的返回类型，函数参数)    volatile  暂时不讲    
#include <stdio.h>
int main()
{
    auto int a = 10;//如果这里只创建一个a,后面就return 0了那么它没发挥作用，系统会自动销毁，所以int前面其实还藏了auto,,只是省略了




    return 0;
}
//变量命名   1.有意义    2.名字必须是字母，数字，下划线的组合，不能用特殊符号，并且不能以数字开头    3.变量不能是关键字