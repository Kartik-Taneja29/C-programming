#include<stdio.h>
#include<math.h>
int main()
{
    int n,end,rev=0,digits;
    scanf("%d",&n);
    digits =(int)log10(n);
    for(;n!=0;n=n/10)
    {
        end=n%10;
        rev=rev*10+end;
    }
    digits=digits-(int)log10(rev);
    while(rev!=0)
    {
        switch(rev%10)
        {
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
        }
        rev=rev/10;

    }
    while(digits)
    {
        printf("zero ");
        digits--;
    }
    return 0;
}