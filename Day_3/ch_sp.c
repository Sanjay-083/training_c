#include <stdio.h>

void main()
{
    char val = '#';
    ((val >= 65 && val <= 90) || (val >= 97 && val <= 122)) ?  printf("alphabet") :  (val >= '0' && val <= '9') ?   printf("number") :    printf("special character");
}
