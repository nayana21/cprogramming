#include <stdio.h>
int main()
{
    int i[10][10], m, n, c, d;
    printf("Enter the number of rows & columns of the matrix : \n");
    scanf("%d%d", &m, &n);
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            if (c == d)
            {
                i[c][d] = 1;
            }
            else
            {
                i[c][d] = 0;
            }
        }
    }
    printf("Identity matrix:\n");
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            printf("%d\t", i[c][d]);
        }
        printf("\n");
    }
    return 0;
}