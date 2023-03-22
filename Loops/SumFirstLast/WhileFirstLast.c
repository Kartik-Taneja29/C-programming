#include<stdio.h>
int main()
{
    int n,first,last,sum;
    scanf("%d",&n);
    last=n%10;
    printf("Last digit=%d",last);
    first=n;
    while(first>=10)
    {
        first=first/10;
    }
    printf("\nFirst Digit=%d",first);
    sum=first+last;
    printf("\nSum=%d",sum);
}