#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : \n");
    scanf("%d", &n);
    do
    {
        printf("%d \n", n);
        --n;
    } while (n >= 0);
    return 0;
}