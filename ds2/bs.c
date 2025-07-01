#include <stdio.h>
void main()
{
    int n;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elememts : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ele;
    printf("Enter the Element to be search ");
    scanf("%d", &ele);
    int l = 0, r = n - 1;
    int flag = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ele == arr[mid])
        {
            printf("The index of Element %d ", mid);
            flag = 1;
            break;
        }
        else if (ele > arr[mid])
        {
            l = mid + 1;
        }
        else if (ele < arr[mid])
        {
            r = mid - 1;
        }
    }
    if (flag == 0)
    {
        printf("Inavalid");
    }
}
