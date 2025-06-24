#include <stdio.h>
void main()
{
    int n = 3;
    int matrix[3][3] = {
        {1, 2, 0},
        {3, 0, 0},
        {0, 0, 0}};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}