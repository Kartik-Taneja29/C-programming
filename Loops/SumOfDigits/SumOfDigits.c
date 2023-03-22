#include<stdio.h>
int main()
{
    int n,sum=0,m;
    scanf("%d",&n);
    for(;n!=0;)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    printf("SUM=%d",sum);
}