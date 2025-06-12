#include <stdio.h>

void main()
{
    char val = 'Z';

    if ((val >= 65 && val <= 90) || (val >= 97 && val <= 122))
    {
        printf("Alphabet \n");

        if (val == 90)
        {
            printf("%c", 65);
        }
        else if (val == 127)
        {
            printf("%c", 97);
        }
        else
        {
            printf("%c", val + 1);
        }
    }
    else
    {
        printf("Not");
    }
}
