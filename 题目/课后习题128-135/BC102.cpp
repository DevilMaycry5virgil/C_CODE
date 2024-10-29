#include <stdio.h>

int main() 
{
    int i = 0;
    int  m = 0;
    while((scanf("%d",&i))!=EOF)
    {
    for(m=0;m<i;m++)
    {
        int j = 0;
        for(j = 0;j<i;j++)
        {
            if(m+j<i-1)
            printf("  ");
            else
             printf("* ");
        }
        printf("\n");
    }}
    return 0;
}
