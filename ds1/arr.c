#include <stdio.h>
//o(n)====>best complexi
// void change(int *arr)
// {
//    *arr+=1;
// }
void main()
{
    int arr[4] = {1, 2, 3, 4}; 
    arr[6] = 7;                
    // change(arr);
    printf("%d", arr[6]);
}
