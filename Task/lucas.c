#include <stdio.h>
void main()
{
    int n = 6, a = 2, b = 1;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        int temp = a + b;
        a = b;
        b = temp;
    }
    
}

