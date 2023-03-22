#include<stdio.h>
int main()
{
    int SP,CP,amount;
    printf("Enter cost price");
    scanf("%d",&CP);
    printf("Selling Price");
    scanf("%d",&SP);
    if(SP>CP)
    {
        amount=SP-CP;
        printf("Profit=%d",amount);
    }
    else if(CP>SP)
    {
        amount=CP-SP;
        printf("Loss=%d",amount);
    }
    else
    {
        printf("No profit no loss");
    }
}