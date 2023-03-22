#include <stdio.h>
int main()
{
    int Phy, Chm, Bio, Math, Comp;
    float per;
    printf("Enter 5 subject marks:");
    scanf("%d%d%d%d%d", &Phy, &Chm, &Bio, &Math, &Comp);
    per = (Phy + Chm + Bio + Math + Comp)/500.0*100;
    printf("Percentage=%.2f\n", per);
    if (per >= 90)
    {
        printf("Grade A");
    }
    else if (per >= 80)
    {
        printf("Grade B");
    }
    else if (per >= 70)
    {
        printf("Grade C");
    }
    else if (per >= 60)
    {
        printf("Grade D");
    }
    else if (per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}