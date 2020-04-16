#include <stdio.h>
int main()
{
    int a[10][10];
    int i, j, r, c;
    int flag = 0;
    printf("Enter the number of rows and columns of the matrix :\n");
    scanf("%d%d", &r, &c);
    printf("Enter th elements of the matrix : \n");
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
            if (a[j][i] != 0 && a[i][j] != 1)
                flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("The matrix is an Identity Matrix.\n");
    }
    else
    {
        printf("The matrix is not an Identity Matrix.\n");
    }
    return 0;
}