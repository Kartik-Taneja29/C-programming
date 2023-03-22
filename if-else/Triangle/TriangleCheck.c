#include <stdio.h>
int main()
{
    int a, b, c, sum;
    printf("Triangle check:");
    scanf("%d%d%d", & a, & b, & c);
    sum=a+b+c;
    if (sum==180 && a>0 && b>0 && c>0)
    {
        printf("Triangle");
    }
    else
    {
        printf("Not a triangle");
    }
}
