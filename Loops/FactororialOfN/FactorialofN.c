#include<stdio.h>
int main()
{
    int i,n;
    int fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
for(i=1;i<=n;i++)
{
    fact=fact*i;
}
printf("Factorial of no is:%d",fact);
return 0;
}