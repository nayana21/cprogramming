#include <stdio.h>
int main()
{
    double num1;
    double num2;
    double num3;
    double interest;
    printf("Enter initial principal balance: ");
    scanf("%lf", &num1);
    printf("Enter annual interest rate: ");
    scanf("%lf", &num2);
    printf("Enter time : ");
    scanf("%lf", &num3);
    interest = (num1 * num2 * num3);
    printf("Simple Interest : %.2f", interest);
    return 0;
}
