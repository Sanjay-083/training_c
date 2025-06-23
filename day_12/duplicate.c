#include <stdio.h>
// very very important questions...
void main()
{
    int n, val;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        arr1[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter value for element %d: ", i);
        scanf("%d", &arr[i]);
    }
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        if (arr1[i])
        {
            continue;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr1[j] = 1;
            }
            if (count)
            {
                printf("%d is a duplicate\n", arr[i]);
                break;
            }
        }
    }
}
