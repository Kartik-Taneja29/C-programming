#include <stdio.h>
#include <math.h>
int main()
{
    int n, sum = 0, end, c, temp;
    printf("Enter a Number:");
    scanf("%d", &n);
    temp = n;
    c = log10(n) + 1;
    for (int i = 1; i <= c; i++)
    {
        end = n % 10;
        sum = sum + pow(end, c);
        n = n / 10;
    }
    if (sum == temp)
    {
        printf("The no is armstrong=%d", temp);
    }
    else
    {
        printf("Not Armstrong");
    }
    return 0;
}