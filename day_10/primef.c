#include <stdio.h>
void  main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);      
    int mem = num;
    int div = 1;
    while (mem >= 10)
    {
        mem/=10;
        div*=10;
    }
    int d;
    while (div > 0)
    {
        d = num / div;
        num = num % div;
        div = div / 10;
        if (d == 2 || d == 3 || d == 5 || d == 7)
            printf("%d\t", d);
    }
}
