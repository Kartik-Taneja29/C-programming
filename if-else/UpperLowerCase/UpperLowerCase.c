#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("Character is uppercase");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("Character is lowercase");
    }
    else
    {
        printf("Character is not alphabet");
    }
    return 0;
}