#include <stdio.h>
void main()
{
    // int size = 8;
    // int arr[8] = {1, 2, 6, 4, 5, 6, 7, 8};
    // int num = 6;
    // for (int i = num; i < size - 1; i++)
    // {
    //     arr[i] = arr[i + 1];
    // }
    // for (int i =0; i < size - 1; i++)
    // {
    //    printf("%d",arr[i]);
    // }

    int size = 5;
    int arr[6] = {1, 2, 3, 4, 5};
    int val = 8;
    int pos = 3;
    for (int i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    size++;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
