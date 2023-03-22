#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, root1, root2, D, imaginary;
    printf("Eqn ax^2+bx+c:");
    scanf("%f%f%f", &a, &b, &c);
    D = (b * b - 4 * a * c);
    if (D > 0)
    {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("Two Distinct roots are:%.2f and %.2f", root1, root2);
    }
    else if (D == 0)
    {
        root1 = -b / (2 * a);
        root2 = -b / (2 * a);
        printf("Two equal and identical roots are:%.2f and %.2f", root1, root2);
    }
    else if (D < 0)
    {
        root1 = root2 = (-b / (2 * a));
        imaginary = sqrt(-D) / (2 * a);
        printf("Two distinct complex roots exists: %.2f + i(%.2f) and %.2f - i(%.2f)", root1, imaginary, root2, imaginary);
        return 0;
    }
}