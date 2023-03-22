#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d%d", &i, &n);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);
}