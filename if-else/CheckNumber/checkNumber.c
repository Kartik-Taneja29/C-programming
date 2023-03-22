#include<stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    {
        printf("a is postive");
    }
    else if(a<0)
    {
        printf("a is negative");
    }
    else
    {
        printf("a is zero");
    }
        return 0;
}