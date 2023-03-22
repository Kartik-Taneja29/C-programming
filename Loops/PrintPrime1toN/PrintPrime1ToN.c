#include<stdio.h>
#include<math.h>
int main()
{
    int end;
    int j;
    int i;
   int isPrime;
   printf("Enter Prime no:");
    scanf("%d",&end);
    for(i=2;i<=end;i++)
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
       
        if(isPrime==1)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}
