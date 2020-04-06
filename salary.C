#include <stdio.h>
int main()
{
    double a;
    double ta;
    double da;
    double net;
    printf("Enter your Basic Salary : \n");
    scanf("%lf", &a);
    ta = (0.1 * a);
    da = (0.12 * a);
    net = (a + ta + da);
    printf("Your NET SALARY = %.2f", net);
    return 0;
}