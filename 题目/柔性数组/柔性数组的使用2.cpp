#include <stdio.h>
#include <stdlib.h>

struct S
{
	int n;
	int* arr;
}; 

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = (int*)malloc(80);
	ps->n = 20;
	int i = 0;
	for(i=0;i<10;i++)
	{
		ps->arr[i]=i;
	}
	for(i=0;i<10;i++)
	{
	  printf("%d ",	ps->arr[i]);
	}
	int* ptr = (int*)realloc(ps->arr,80);//扩容 
	if(ptr == NULL)//异常 
	{
		return 1;
	}
	free(ps->arr);//ps->arr,数组名是首元素的地址 
	free(ps);
	ps = NULL;
	return 0;
}
