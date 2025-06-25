#include <stdio.h>
#include <string.h>
void main()
{
    char str[100] = "sanjay";
    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     printf("%c \n ", str[i]);
    // }
    // printf("%lu \n", strlen(str));

    // Search for a character in string
    int found = 0;
    char ch = 'a';
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ch)
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        printf("Found");
    }
    else
    {
        printf("Not Found");
    }
}