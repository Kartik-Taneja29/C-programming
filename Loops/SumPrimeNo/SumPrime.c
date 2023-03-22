#include <stdio.h>
#include <math.h>
int main()
{
    int start, end;
    int isPrime;
    int i;
    int j;
    int sum = 0;
    printf("Enter Start value:");
    scanf("%d", &start);
    printf("Enter End value:");
    scanf("%d", &end);
    for (i = start; i <= end; i++)
    {
        isPrime = 1;
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime==1 && i>1)
        {
            sum=sum+i;
        }
    }
        printf("%d",sum);      
    return 0;
}