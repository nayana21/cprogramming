#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char line[100], ch;
    int i, count = 0;
    printf("Enter the sentence: \n");
    gets(line);
    for (ch = 'a' && 'A'; ch <= 'z' && 'Z'; ch++)
    {
        count = 0;
        for (i = 0; i < strlen(line); i++)
        {
            if (ch == line[i])
            {
                count++;
            }
        }
        if (count > 0)
            printf("The frequency of %c is %d \n", ch, count);
    }
    getch();
}