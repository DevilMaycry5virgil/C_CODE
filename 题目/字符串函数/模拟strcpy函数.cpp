#include <stdio.h>
#include <assert.h>

char* my_strcpy(char*p1,const char*p2) //ʹ��const����Դͷ����ֹ��ʹ�ù�����p2ָ������ݷ����ı� 
{
	assert(p1&&p2);//��Ϊ�漰��ָ������ò�����assert���Ա�֤��Ϊ��ָ�� 
	char *start = p1;
    while(*p1++ = *p2++)//�ȵ�*p2Ϊ'\0'ʱ����ʱ���ж����Ѿ���'\0'����p1�ˣ����Ծ��㲻����ѭ������Ҳû��ϵ 
      {
   	   ;
	   }	
	return start;//����ֻ��Ϊ��ģ��ԭ�����ŷ��أ�ʵ��û�����κ����� 
 } 


int main()
{
	char arr1[20]="";
	char arr2[]="abcdefuhu";
     my_strcpy(arr1,arr2);
	printf("%s\n",arr2);
	return 0;
}
