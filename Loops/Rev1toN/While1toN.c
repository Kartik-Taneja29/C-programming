#include <stdio.h>
int main()
{
    int i, end;
    scanf("%d%d", &i, &end);
    while (i >= end)
    {
        printf("%d\n", i);
        i--;
    }
}