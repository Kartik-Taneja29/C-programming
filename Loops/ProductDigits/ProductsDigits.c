#include<stdio.h>
int main()
{
    int n,pro=1,end;
    scanf("%d",&n);
    for(;n>0;)
    {
        end=n%10;
        pro=pro*end;
        n=n/10;
    }
    printf("Product=%d",pro);
    return 0;
}