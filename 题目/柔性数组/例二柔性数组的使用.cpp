#include <stdio.h>
#include <stdlib.h>


struct S
{
	int n;
	int arr[];//柔性数组要有一个不确定大小的变量,int arr[]或者int arr[0]都是不确定大小的变量 
};

int main()
{
    //柔性数组的使用 
	struct S* ps = (struct S*)malloc(sizeof(struct S)+40);//+40是因为我们想让arr里面包含10个元素
	ps->n=10;
	int i = 0;
	for(i=0;i<ps->n;i++)
	{
	 ps->arr[i]=i;
	 } 
	for(i=0;i<ps->n;i++)
	{
	printf("%d ",ps->arr[i]);
	 } 
	struct S* ptr = (struct S*)realloc(ps,sizeof(struct S)+80);//对柔性数组的扩展 
	if(ptr!= NULL)
	{
		ps = ptr;
		ptr = NULL;
	}
	 free(ps);//防止内存泄露 
	 ps = NULL;
	return 0;
}
