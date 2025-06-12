#include <stdio.h>

void main()
{
    int hour, minute;
    printf("Enter time (HH:MM): ");
    scanf("%d %d", &hour, &minute);

    if (hour >= 0 && hour <= 23 && minute >= 0 && minute <= 59)
    {
        printf("Valid Time");
    }

    else
    {
        printf("Invalid Time");
    }
}
