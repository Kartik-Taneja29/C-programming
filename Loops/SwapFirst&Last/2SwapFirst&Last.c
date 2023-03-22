
#include <stdio.h>
#include <math.h>
int main()
{
    long int n; // 5024//
    int first, end, swap, digit;
    scanf("%ld", &n);
    end = n % 10;
    digit = log10(n);
    first = n;
    while (first >= 10)
    {
        first = first / 10;
    }

    swap = end;                              // swap=4
    swap = swap * (int)pow(10, digit);       // swap=4000
    swap = swap + n % ((int)pow(10, digit)); // swap=4024
    swap = swap - end;                       // swap=4020//
    swap = swap + first;                     // swap=4025//
    printf("Number after swapping first and last digit: %d", swap);

    return 0;
}
