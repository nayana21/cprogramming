#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[10][10];
    int even = 0, odd = 0;
    int i, j, m, n;
    printf("Enter the number of rows and columns of the matrix :\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of the matrix :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((arr[i][j] % 2 == 0))
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    printf("The frequency of occurence of odd numbers is %d.\n", odd);
    printf("The frequency of occurence of even numbers is %d.\n", even);
    return 0;
}