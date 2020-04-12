#include <stdio.h>
int main()
{
    int n, r, c, temp;
    int sum = 0;
    printf("Enter the number:");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        c = r * r * r;
        sum = sum + c;
        n = n / 10;
    }
    n = temp;
    if (n == sum)
        printf("It is an armstrng number.");
    else
        printf("It is not an armstrng number.");
    return 0;
}