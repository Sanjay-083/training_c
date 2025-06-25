#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    int result = strcmp(str1, str2);

    if (result == 0)
        printf("Both strings are equal\n");
    else if (result < 0)
        printf("%s is less than %s\n", str1, str2);
    else
        printf("%s is greater than %s\n", str1, str2);

    return 0;
}
