#include <stdio.h>
int main()
{
    int n, rev = 0;
    int remainder;
    printf("Enter the number : \n");
    scanf("%d", &n);
    while (n != 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10;
    }
    printf("%d", rev);
    return 0;
}