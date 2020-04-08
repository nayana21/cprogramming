#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    int l;
    int v = 0;
    char str[100];
    printf("Enter the string\n");
    gets(str);
    l = strlen(str);
    for (i = 0; i < l; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            v = v + 1;
    }
    printf("vowels :%d", v);
    return 0;
}