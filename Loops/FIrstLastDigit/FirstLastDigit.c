#include <stdio.h>
int main()
{
    int n, last, first;
    scanf("%d", &n);
    last = n % 10;
    printf("Last Digit = %d", last);
    first = n;
    while (first >= 10)
    {
        first = first / 10;
    }
printf("\nFirst digit = %d", first);
}
