#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("Sides of triangle:");
    if(a==0 || b==0 || c==0)
    {
        printf("Enter sides again");
    }
    else if(a==b && b==c)
    {
        printf("Triangle is Equilateral");
    }
    else if(a==b || a==c || b==c)
    {
        printf("Triangle is Isosceles");
    }
    else
    {
        printf("Triangle is scalene");
    }
}