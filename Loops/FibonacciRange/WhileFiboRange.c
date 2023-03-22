#include<stdio.h>
int main()
{
    int a = 0, b = 1, c, start, last;
    printf("Enter Starting Term:");
    scanf("%d", &start);
    printf("Enter Last Term:");
    scanf("%d", &last);
    c=start;
    while(c<=last)
    {
        if(c>=start)
        {
            printf("%d ",c);
            a=b;
            b=c;
            c=a+b;
        }
    }
    return 0;
}