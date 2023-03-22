#include <stdio.h>
int main()
{
    int i=1, end;
    scanf("%d",&end);
    do
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
    i++;
    } while (i<= end);
    return 0;
}