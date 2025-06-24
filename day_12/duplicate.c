#include <stdio.h>
void main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter value for element %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                count = 1;
                break;
            }
        }
        if (count)
        {
            continue;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d is a duplicate\n", arr[i]);
                break;
            }
        }
    }
}
