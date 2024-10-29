                                                                //二，字符串
//空格也算字符
// char 字符类型
//'a'字符、
// "abcdef" 字符串
//C语言中没有字符串类型
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] ="abcdef";
	char arr2[] = { 'a','b','c','d','e','f'};

	printf("%s\n", arr1);
	printf("%s\n", arr2);

	
//按Ctrl+Fn+F10后在打开调试 窗口 选择监视 输入arr1就能看到arr1这个空间内存储的字符串了，arr1[10]表示一个空间为10的列阵，[]内不输入则更据后面的字符串大小改变空间大小
//通过监视可看到abcdef占了7个位置是因为abcdef\它的结尾有一杠被省略了，字符串都是这样的（但字符不是）,/0是他的结束标志
//如char这种a,b,c用逗号分看的字符，监视后发现只占了6个位置，没有\杠
//运行代码打印arr1和arr2发现arr1正常打印为abcdef，而arr2打印为abcdef烫烫烫烫烫烫烫烫？ arr1:a b c d e f \0 arr2:a b c d e f
//内存是一个连续的空间打印arr1时遇到\0则停止打印，但是打印arr2时分开的这种没有结束标志则一直打印直到偶然遇到后面内存出现的'\0'停止
//如果主动在分开的这种字符后加一个'\0'则与arr1完全一样
//strlen是一个求字符串长度的函数,并且运行还需要一个string的头部文件,输入abc后返回3说明strlen也是遇到一个隐藏的'\0'后停止数数，如果()内输入arr1则返回6
//输入arr2则返回22（因为没有结束符号)
int len = strlen("abc");
printf("%d\n", len);

return 0;
}