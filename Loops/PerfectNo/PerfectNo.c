#include<stdio.h>
#include<math.h>
int main()
{
    
    int n;
    int i;
    int sum=0;
    printf("Enter number:\n");
    scanf("%d",&n);
    for(i=1;i<(n);i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
     if(sum==n)
     {
        printf("The number is perfect:%d", i);
     }
     else
     {
        printf("No is not perfect");
     }
}