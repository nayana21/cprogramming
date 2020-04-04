#include <stdio.h>
int main()
{
    int agePe;
    printf("Enter your age:");
    scanf("%d", &agePe);
    if (agePe >= 60)
    {
        printf("Your Pension is Rs10000");
    }
    else if (agePe >= 50)
    {
        printf("Your Pension is Rs50000 ");
    }
    else
    {
        printf("Your Pension is 0");
    }
    return 0;
}