#include<stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is greater than b and c");
    }
    else if(b>a && b>c)
    {
        printf("b is greater than a and c");
    }
    else if(a==b==c)
    {
        printf("a is equal to b equal to c");
    }
    else
    {
        printf("c is greater than a and b");
    }
        return 0;
}