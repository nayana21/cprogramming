#include <stdio.h>
int main()
{
    char name[20];
    double mark1;
    double mark2;
    double mark3;
    double mark4;
    double mark5;
    double avg;
    printf("Enter your name:");
    fgets(name, 20, stdin);
    printf("Enter your mark for English:");
    scanf("%lf", &mark1);
    printf("Enter your mark for Mathematics:");
    scanf("%lf", &mark2);
    printf("Enter your mark for Physics:");
    scanf("%lf", &mark3);
    printf("Enter your mark for Chemistry:");
    scanf("%lf", &mark4);
    printf("Enter your mark for Biology:");
    scanf("%lf", &mark5);
    avg = (mark1 + mark2 + mark3 + mark4 + mark5) / 5;
    printf("Your average mark is : %.2f", avg);
    return 0;
}
