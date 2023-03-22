#include<stdio.h>
int main()
{
    int n,temp,end,rev=0;
    
    scanf("%d",&n);
    for(temp=n;n!=0;)
    {
        end=n%10;
        rev=rev*10+end;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("%d \nis a palindrome number.",temp);
    }
    else
    {
        printf("%d \nis not a palindrome number.",temp);
    }
}