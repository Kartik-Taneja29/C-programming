#include <stdio.h>
int main()
{
    int i,  end;
    scanf("%d", &end);
    for (i = 1; i<= end; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}