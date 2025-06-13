#include <stdio.h>
void main()
{
    char ch[] = "AbCdE#";
    int i = 0;
    while(1)
    {
        if (ch[i] == '#')
        {
            printf("#");
            break;
        }
        else
        {
            printf("%c", ch[i] + 1);
        }
        i++;
    }
}
