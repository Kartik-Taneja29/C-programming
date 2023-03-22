#include <stdio.h>
int main()
{
    int start;
    int end;
    int sum;
    int j;
    printf("Enter Start Value:");
    scanf("%d", &start);
    printf("Enter End Value:");
    scanf("%d", &end);
    for (int i = start; i <=end; i++)
    {
            sum=0;
        for (j = 1; j<i; j++)
        {   if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum==i)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}