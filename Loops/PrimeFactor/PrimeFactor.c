#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int i, j;
    int isPrime;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 1;
            for (j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    isPrime =0;
                    break;
                }
            }
            if (isPrime == 1 && n > 1)
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
