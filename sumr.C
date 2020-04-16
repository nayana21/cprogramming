#include <stdio.h>
int main()
{
    int sum;
    int a[10][10], i, j, r, c;
    printf("Enter the number of rows & columns in the matrix : \n");
    scanf("%d%d", &r, &c);
    printf("Enter the matrix elements :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum = sum + a[i][j];
        }
        printf("Sum of the %d row is =%d\n", i, sum);
        sum = 0;
    }
    sum = 0;
    {
        for (j = 0; j < c; j++)
        {
            for (i = 0; i < r; i++)
            {
                sum = sum + a[i][j];
            }
            printf("Sum of the %d column is =%d \n", j, sum);
            sum = 0;
        }
    }
    return 0;
}