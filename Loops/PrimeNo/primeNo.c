#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    int isPrime=1;
    printf("Enter a number:");
    scanf("%d", &n);
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            isPrime=0;
            break;
        }
    }
    if(isPrime==1 && n>1)
    {
        printf("The number is prime=%d",n);
    }
    else
    {
        printf("The number is not prime=%d",n);
    }
    return 0;
}