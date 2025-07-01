#include <stdio.h>
void main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int found = 3;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == found)
        {
            printf("Index %d", i);
            break;
        }
    }
}