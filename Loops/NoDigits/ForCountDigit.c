#include <stdio.h>
int main()
{
    int i, count = 0;

    scanf("%d", &i);

    for (count = 0; i != 0; count++)
    {
        i = i / 10;
    }

    printf("%d\n", count);

    return 0;
}