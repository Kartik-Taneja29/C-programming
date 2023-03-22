 #include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    while(ch>='a' &&ch<='z')
    {
        printf("%c\n",ch);
        ch++;
    }
}

// Using ASCII VALUE
#include <stdio.h>
int main()
{
    int i, j;
    scanf("%d%d", &i, &j);
    while (i <= j)
    {
        printf("%c\n", i);
        i++;
    }
}