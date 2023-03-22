#include <stdio.h>
void main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("a is greater than b");
    }
    else if (a == b)
    {
        printf("both are equal");
    }
    else
    {
        printf("b is greater than a");
    }
}