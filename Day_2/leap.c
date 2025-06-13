#include <stdio.h>
void main(){
    int year = 1908;
    ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))  ? (printf(" Leap Year")) : (printf(" Not Leap Year"));}
// If we added a leap year every 4 years, we get an average year length of 365.25 days — a little too long.
// That small difference would cause the calendar to slowly drift over centuries