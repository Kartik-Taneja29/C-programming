#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a==0)
    {
        printf("a is zero");
    }
    else if(a%2==0)
    {
        printf("a is even");
    }
    else
    {
        printf("a is odd");
    }

}