// input:AbCdE
// output:aBcDe
// so logic is difference is 32 between cases in ascii
// A-Z->65-90,a-z->97-122
// iterate using  a loop
#include <stdio.h>
#include <string.h>
void main()
{
    char ch[100];
    printf("Enter the String");
    scanf("%s", ch);
    int i = 0;
    int length;
    length = strlen(ch);
    while (i < length)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ch[i] = ch[i] + 32;
        }
        else if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = ch[i] - 32;
        }
        i++;
    }
    printf("%s", ch);
}