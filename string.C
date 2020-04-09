#include <stdio.h>
#include <string.h>
int main()
{
    int l;
    int i, dig, alpha, spch;
    dig = alpha = spch = i;
    int v = 0;
    char str[100];
    printf("Enter the string : \n");
    gets(str);
    l = strlen(str);
    for (i = 0; i < l; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            alpha++;
        else if (str[i] >= '0' && str[i] <= '9')
            dig++;
        else
            spch++;
    }
    printf("NUMBER OF ALPHABETS :%d \n", alpha);
    printf("NUMBER OF DIGITS :%d \n", dig);
    printf("NUMBER OF SPECIAL CHARACTER :%d \n", spch);
    return 0;
}