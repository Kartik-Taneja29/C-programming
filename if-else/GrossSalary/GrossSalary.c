#include <stdio.h>
int main()
{
    int salary;
    float da, hra, gross;
    printf("Basic Salary of Employee:");
    scanf("%d", &salary);
    if (salary <= 10000)
    {
        hra = 0.2 * (salary);
        da = 0.8 * (salary);
    }
    else if (salary >= 10000 && salary < 20000)
    {
        hra = 0.25 * (salary);
        da = 0.9 * (salary);
    }
    else
    {
        hra = 0.3 * (salary);
        da = 0.95 * (salary);
    }
    (gross = salary + hra + da);
    printf("Gross Salary of Employee=%.2f",gross);
}