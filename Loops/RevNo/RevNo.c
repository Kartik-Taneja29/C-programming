#include<stdio.h>
int main()
{
    int n,rev=0,end;
    scanf("%d",&n);
    for(;n!=0;)
    {
        end=n%10;
        rev=rev*10+end;
        n=n/10;
    }
    printf("Reverse No=%d",rev);
}