#include <stdio.h>
#include <string.h>
/*int main()
{
	int arr[10] = {0};
	printf("%d",&arr[9]-&arr[0]);
	return 0;
}*/ //�����׵�ַ��ĩ��ַ��� 

/*int main()
{
	int arr[10] = {0};
	printf("%d",&arr[0]-&arr[9]);
	return 0;
}*/ //��������ȣ�����������Ǹ���


/*int main()
{
	int arr[10] = {0};
	char ch[0]={'k'};
	printf("%d",&arr[9]-&ch[1]);
	return 0;
} */ //���������Ϊֻ��ͬһ��������ĵ�ַ�������

/*int main()
{
	int len = strlen("abcdef");
	printf("%d\n",len);
	
	
	return 0;
 }*/
 
 /*int my_strlen(char *str)
 {
 	int count = 0;
 	while(*str != '\0')
 	{
 	   count++;
	   str++;	
	 }
 	return count;
 }
 
 int main()
 {
 	char arr[] = {"abcdef"};
 	int k = my_strlen(arr);
 	printf("%d\n",k);//ע������ֱ��дK������ȡ��ַ 
 }*/ //���ú�������strlen
 
/*int my_strlen(char *str)
{
	char* start = str;//str�ں������ǵ�ַ��Ҫ��ָ��������� 
	while(*str != '\0')
	{
		str++;
	 } 
    return (str - start);
}

int main()
{
	char arr[] = {"abcdef"};
	int k = my_strlen(arr);
	printf("%d\n",k);
}*/ //��ָ��-ָ�뷽��������鳤�� 


/*int my_strlen(char *str)
{
	if(*str != '\0')
	return 1 + my_strlen(str+1);
	else 
	return 0;
}

int main()
{
	char arr[] = {"abcdef"};
	int k = my_strlen(arr);
	printf("%d\n",k);
 } */ //�õݹ鷽��ʵ�֣��ݹ飻�ں����е��ú�����
 
 
 #define N_VALUES 5

/*int main()
{
	float values[N_VALUES];
	float *vp;
	int i = 0;
	for(vp = &values[N_VALUES];vp>&values[0];);
	{
		*(--vp)= 0;
	}
	for(i = 0;i<5;i++)
	{
		printf("%lf ",values[i]);
	}
	return 0;
}*/
  
  
int main()
{
	int arr[10] = {0};
	
	int* p = arr;
	
	int sz = sizeof(arr)/sizeof(arr[0]);
	int i = 0;
	for(i = 0 ; i<sz ;i++)
	{
		//printf("%d ",*(p + i));
		//printf("%d ",arr[i]);
		printf("%d ",*(arr+i));
	}
	return 0;
	
}




 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
