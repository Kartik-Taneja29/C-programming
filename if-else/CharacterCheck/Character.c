#include<stdio.h>
int main()
{   char ch;
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("character is alphabet ");
    }
    else
    {
        printf("Not a character");
    }
    return 0;
}