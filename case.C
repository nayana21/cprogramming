#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    int l;
    char str[100];
    printf("Enter the string : \n");
    gets(str);
    l = strlen(str);
    for (i = 0; i < l; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        else
            str[i] = str[i] - 32;
    }
    printf("Reversed String : %s \n", str);
    return 0;
}