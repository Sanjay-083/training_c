#include <stdio.h>
#include <string.h>
void main()
{
    char str[] = "sanjay";
    int arr[26] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        arr[str[i] - 'a'] += 1;
    }
    for (int i = 0; i < strlen(str); i++)
        if (arr[str[i]-'a'])
        {
            printf("%c %d \n", str[i], arr[str[i]-'a']);
            arr[str[i]-'a']=0;
        }
    }

