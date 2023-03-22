#include <stdio.h>
int main()
{
    int i, sum = 0, end;
    scanf("%d", &end);
    for (i = 1; i <= end; i++)
    {
        sum = sum + i;
    }
    printf("%d\n",sum);
    return 0;
}