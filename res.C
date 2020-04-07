#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter the input to be reversed : \n");
    gets(a);
    strrev(a);
    printf(" Reversed Output :%s \n", a);
    return 0;
}