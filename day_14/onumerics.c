#include <stdio.h>
#include <string.h>
void main()
{
    char str[] = "12345/*-+";
    int val = str[0] - '0';
    for (int i = 2; i <= strlen(str) / 2; i++)
    {
        switch (str[(strlen(str) / 2) + i])
        {
        case '+':
        {
            val += str[0] - '0';
            break;
        }
        case '-':
        {
            val -= str[0] - '0';
            break;
        }
        case '/':
        {
            val /= str[0] - '0';
            break;
        }
        case '*':
        {
            val *= str[0] - '0';
            break;
        }
        case '%':
        {
            val %= str[0] - '0';
            break;
        }
        }
    }
    printf("%d",val);
}
