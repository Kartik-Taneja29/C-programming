#include<stdio.h>
#define MAX 50
int main()
{
    int a[MAX];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Negative elements of aaray are:");
    for(int i=0;i<5;i++)
    {
        if(a[i]<0)
        {
            printf("%d\t",a[i]);
        }
    }
}