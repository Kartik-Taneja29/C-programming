#include<stdio.h>
int main()
{
    int i,first,last;
    scanf("%d",&i);
    last=i%10;
    printf("Last Digit:%d",last);
    for(first=i;first>=10;)
    {
        first=first/10;
    }
    printf("\nFirst Digit:%d",first);

}