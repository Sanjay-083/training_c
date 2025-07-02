#include <stdio.h>

int isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int isValidDate(int d, int m, int y) {
    if (y < 1 || m < 1 || m > 12 || d < 1) return 0;

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 
                         31, 31, 30, 31, 30, 31};
    if (isLeapYear(y))
        daysInMonth[1] = 29;

    if (d > daysInMonth[m - 1])
        return 0;
    return 1;
}

int main() {
    int day, month, year;
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (isValidDate(day, month, year))
        printf("Valid Date\n");
    else
        printf("Invalid Date\n");

    return 0;
}
