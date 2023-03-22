#include<stdio.h>
int main()
{
    int i,start,n;
    scanf("%d%d",&start,&n);
    for(i=start;i>=n;i--)
    {
        printf("%d\n",i);
    }
}