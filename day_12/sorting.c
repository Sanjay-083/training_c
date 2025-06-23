#include <stdio.h>
void main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    int i;
    for (int i = 0; i < n; i++)
    {
        printf("Enter value for element %d: ", i);
        scanf("%d", &arr[i]);
        printf("The value of %d is %d \n", i, arr[i]);
    }
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d\n", arr[i]);
    }
}
