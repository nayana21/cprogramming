#include <stdio.h>
int main()
{
    double mark;
    printf("Enter your mark :\n");
    scanf("%lf", &mark);
    if (mark >= 90 && mark <= 100)
        printf("GRADE A\n");
    else if (mark >= 80)
        printf("GRADE B\n");
    else if (mark >= 70)
        printf("GRADE C\n");
    else if (mark >= 60)
        printf("GRADE D\n");
    else if (mark >= 50)
        printf("GRADE E\n");
    else if (mark >= 40)
        printf("GRADE P\n");
    else
        printf("FAIL\n");
    return 0;
}