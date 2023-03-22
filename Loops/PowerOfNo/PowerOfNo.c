#include<stdio.h>
int main()
{
    int base,expo;
    long long pow=1;
    int i;
    printf("Enter Base:\n");
    scanf("%d",&base);
    printf("Enter Exponent:\n");
    scanf("%d",&expo);
    for(i=1;i<=expo;i++)
    {
        pow=pow*base;
    }
    printf("%d^%d=%lld",base,expo,pow);
    return 0;
}