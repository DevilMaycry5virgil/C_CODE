#include <stdio.h>
#include <assert.h>

char* my_strcpy(char*p1,const char*p2) //使用const保护源头，防止在使用过程中p2指向的内容发生改变 
{
	assert(p1&&p2);//因为涉及到指针解引用操作，assert可以保证不为空指针 
	char *start = p1;
    while(*p1++ = *p2++)//等到*p2为'\0'时，此时在判断中已经把'\0'赋给p1了，所以就算不满足循环条件也没关系 
      {
   	   ;
	   }	
	return start;//这里只是为了模拟原函数才返回，实际没有起到任何作用 
 } 


int main()
{
	char arr1[20]="";
	char arr2[]="abcdefuhu";
     my_strcpy(arr1,arr2);
	printf("%s\n",arr2);
	return 0;
}
