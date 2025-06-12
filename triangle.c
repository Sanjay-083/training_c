#include <stdio.h>
void main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    (a == b && b == c) ? (printf("Equilateral")) : ((a + b )> c) ? (printf("Triangle 1 is possible "))
                                                               : printf("No triangle possible");
}
