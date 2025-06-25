#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the size of matrix 1 (n x n): ");
    scanf("%d", &n);
    printf("Enter the size of matrix 2 (m x m): ");
    scanf("%d", &m);
    if (n != m)
    {
        printf("Matrices are of different sizes, so they are not equal.\n");
        return 0;
    }
    int mat1[n][n], mat2[m][m];
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    int Equal = 1; 
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat1[i][j] != mat2[i][j])
            {
                Equal = 0;
                break;
            }
        }
    }
    if (Equal)
        printf("Both matrices are equal.\n");
    else
        printf("Matrices are not equal.\n");

}
