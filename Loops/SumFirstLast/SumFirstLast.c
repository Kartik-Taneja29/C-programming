#include <stdio.h>
int main()
{
    int i, first, last;
    int sum;
    scanf("%d", &i);
    last = i % 10;
    printf("Last Digit=%d\n",last);
    for (first = i; first>= 10;)
    {
        first =first/ 10;
    }
    printf("first Digit=%d\n",first);
    sum = first + last;
    printf("Sum=%d", sum);
}
