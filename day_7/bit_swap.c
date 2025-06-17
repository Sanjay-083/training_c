#include <stdio.h>
int a = 5, b = 7;
void main()
{
    a = a ^ b;
    printf("%d  ", a);
    printf("%d  ", b);
    b = a ^ b;
    printf("%d  ", a);
    printf("%d  ", b);
    a = a ^ b;
    printf("%d  ", a);
    printf("%d  ", b);
}