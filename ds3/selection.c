#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int small = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[small])
            {
                small = j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[small];
        arr[small]=temp;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
