#include<stdio.h>
#include<math.h>
int main()
{
    int start,end;
    int isPrime;
    int i;
    int j;
    printf("Enter Start value:");
    scanf("%d",&start);
    printf("Enter End value:");
    scanf("%d",&end);
    for(i=start;i<=end;i++)
    {
        isPrime=1;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                isPrime=0;
                break;
            }
        }
        if(i>1 && isPrime==1 )
        {
            printf("%d\n",i);
        }
    }
    return 0;
}