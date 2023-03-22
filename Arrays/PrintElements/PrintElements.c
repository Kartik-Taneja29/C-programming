#include<stdio.h>
int main()
{
    int a[5];
    printf("The enter array elements:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("\n Array element at index %d is:%d",i,a[i]);
    }
}