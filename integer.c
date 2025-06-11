#include <stdio.h>
void main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("The number is positive");
    }
    else if (num < 0)
    {
        printf("The number is negative");
    }
    else
    {
        printf("The number is zero.");
    }
}