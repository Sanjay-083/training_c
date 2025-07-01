#include <stdio.h>
//o(n)====>best complexity
//another way of calling array index[arr]
void change(int *arr)
{
   *arr+=1;
}
void main()
{
    int arr[4] = {1, 2, 3, 4}; 
    // arr[6] = 7;                
    // change(arr);
    int *p=arr;
    // printf("%d", arr[4]);
    printf("%d\n", p);
    printf("%p\n", ++arr[0]);
    printf("%p\n", ++p);
    printf("%p\n", ++p);
}
