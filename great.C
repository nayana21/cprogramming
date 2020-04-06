#include <stdio.h>
int main()
{
    double a;
    double b;
    double c;
    printf("Enter first number,second,third numbers : \n");
    scanf("%lf,%lf,%lf", &a, &b, &c);
    if (a >= b && a >= c)
        printf("%lf is the largest number.", a);
    else if (b >= a && b >= c)
        printf("%lf is the largest number", b);
    else
        printf("%lf is the largest number", c);
    return 0;
}