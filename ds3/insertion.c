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
    int key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && key < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
