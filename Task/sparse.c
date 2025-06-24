#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d", &n);
    int mat[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] == 0)
                count++;
        }
    }
    int total = n * n;

    if (count > total / 2)
        printf(" The matrix is a Sparse Matrix.\n");
    else
        printf("The matrix is NOT a Sparse Matrix.\n");

    return 0;
}
