#include<stdio.h>
int main()
{
    int num,start,last,end,sum,fact;
    printf("Enter Lower Limit:");
    scanf("%d",&start);
    printf("Enter Upper Limit:");
    scanf("%d",&last);
    for(int i=start;i<=last;i++)
    {
        num=i;
        sum=0;
        while(num!=0)
        {
            fact=1;
            end=num%10;
            for(int j=1;j<=end;j++)
            {
                fact=fact*j;
            }
            sum=sum+fact;
            num=num/10;
        }
        if(sum==i)
        {
            printf("No is strongno=%d\n",i);
        }

    }
    return 0;
}