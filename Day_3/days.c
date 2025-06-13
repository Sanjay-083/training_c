#include <stdio.h>
void main()
{
    int day;
    printf("Enter the number between 1-7:");
    scanf("%d", &day);
    if (day == 1)
    {
        printf("Sunday");
    }
    else if (day == 2)
    {
        printf("Monday");
    }
    else if (day == 3)
    {
        printf("Tuesday");
    }
    else if (day == 4)
    {
        printf("Wednesday");
    }
    else if (day == 5)
    {
        printf("Thurday");
    }
    else if (day == 6)
    {
        printf("Friady");
    }
    else if (day == 7)
    {
        printf("Saturday");
    }
    else
    {
        printf("Invalid");
    }
}
