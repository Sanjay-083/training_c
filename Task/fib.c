#include <stdio.h>
void main()
{
    int n = 7, a = 0, b = 1;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        int next = a + b;
        a = b;
        b=next;
    }
}