#include<stdio.h>
int main()
{
    int marks[5],sum=0,avg;
    printf("Enter Array Elements:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("avg=%d",avg);
    
}