#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, root1, root2;
    printf("enter the values of a,b and c respectively\n");
    scanf("%f %f %f", &a, &b, &c);
    d = pow(b, 2.0) - 4 * a * c;
    if (d < 0)
        printf("the roots of the equation are imaginary\n");
    if (d == 0)
        printf("both roots of the given equation are equal\n");
    if (d > 0)
        printf("the equation has 2 different real roots\n");
    if (d >= 0)
    {
        root1 = (-1.0 * b + pow(d, 0.5)) / (2.0 * a);
        root2 = (-1.0 * b - pow(d, 0.5)) / (2.0 * a);
        printf("the roots of the given equation are %f,%f", root1, root2);
    }
}