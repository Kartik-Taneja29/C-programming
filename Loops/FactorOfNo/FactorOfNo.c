#include<stdio.h>
int main()
{
    int factor;
    scanf("%d",&factor);
    printf("The factors of the no are:\n");
    for(int i=1;i<=factor;i++)
    {
        if(factor%i==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}