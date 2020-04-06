#include <stdio.h>
int main()
{
    double num;
    printf("Enter the number : \n");
    scanf("%lf", &num);
    if (num > 0)
        printf("POSITIVE");
    else if (num < 0)
        printf("NEGATIVE");
    else
        printf("ZERO");
    return 0;
}