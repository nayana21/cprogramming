#include <stdio.h>
int main()
{
    int m, n, c, d, p, q, k, sum;
    int matrix1[10][10], matrix2[10][10], product[10][10];
    printf("Enter the number of rows and columns\n");
    scanf("%d%d", &m, &n);
    printf("Enter the matrix elements of first matrix\n");
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &matrix1[c][d]);
    printf("Enter the number of rows and columns of second matrix\n");
    scanf("%d%d", &p, &q);
    if (n != p)
        printf("The multiplication is not possible\n");
    else
    {
        printf("Enter the matrix elements\n");
        for (c = 0; c < p; c++)
            for (d = 0; d < q; d++)
                scanf("%d", &matrix2[c][d]);
        for (c = 0; c < m; c++)
        {
            for (d = 0; d < n; d++)
            {
                for (k = 0; k < p; k++)
                {
                    sum = sum + matrix1[c][k] * matrix2[k][d];
                }
                product[c][d] = sum;
                sum = 0;
            }
        }
        printf("Product of the matrices :\n");
        for (c = 0; c < m; c++)
        {
            for (d = 0; d < q; d++)
                printf("%d\t", product[c][d]);
            printf("\n");
        }
    }
    return 0;
}