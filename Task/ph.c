#include <stdio.h>
void main()
{
    long long num = 9876543210; 
    printf("%03lld-%03lld-%04lld",num / 10000000,(num / 10000) % 1000, num % 10000);         
}
