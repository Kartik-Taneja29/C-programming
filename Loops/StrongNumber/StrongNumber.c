#include<stdio.h>
int main()
{
 int n,temp,i;
    int end;
    int sum=0;
    int fact;
    printf("Enter a Number:");
    scanf("%d",&n);
    temp=n;
for(;n!=0;)
{
    end=n%10;
    fact=1;
    for(i=1;i<=end;i++)
    {
        fact=fact*i;
    }
    sum=sum+fact;
    n=n/10;
}
if(sum==temp)
{
    printf("The number is armstrong:%d",temp);
}
else
{
    printf("The number is not armstrong:%d",sum);
}
return 0;
}
