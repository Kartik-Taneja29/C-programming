#include <stdio.h>
int main()
{
    int a = 0, b = 1, c = 0, start, last;
    printf("Enter Starting Term:");
    scanf("%d", &start);
    printf("Enter Last Term:");
    scanf("%d", &last);
    if (start == 0)
    {
        printf("%d ", a);
    }
    for (int i = 1; i <= last; i++)
    {
        a = b;
        b = c;
        c = a + b;
        if (c >= start && c <= last)
        {
            printf("%d ", c);
        }
    }
    return 0;
}