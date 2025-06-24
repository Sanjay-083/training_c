#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("Enter the size of matrices (r1 c1 r2 c2): ");
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    if (r1 != r2 || c1 != c2)
    {
        printf("Enter valid rows and columns \n");
        return 0 ;
    }
    int mat1[r1][c1], mat2[r2][c2], res[r1][c1];
    printf("Enter Matrix1:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter Matrix2:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("Resultant Matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            res[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }
}