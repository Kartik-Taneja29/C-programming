#include<stdio.h>
#include<math.h>
int main()
{
    int start,end,sum,lastdigit,num;
    int i,j;
    int c;
    printf("Enter Lower Limit:");
    scanf("%d",&start);
    printf("Enter Upper Limit:");
    scanf("%d",&end);
    for(i=start;i<=end;i++)
    {
        sum=0;
        num=i;
        c=(int)log10(num)+1;
        for(j=0;j<c;j++)
        {
            lastdigit=num%10;
            sum=sum+ceil(pow(lastdigit,c));
            num=num/10;
        }
        if(i==sum)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
