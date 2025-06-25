#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("Enter the size of matrices (r1 c1 r2 c2): ");
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    int mat1[r1][c1], mat2[r2][c2], res[r1][c2];
    if (c1 == r2)
    {
        printf("Enter Matrix1:\n");
        for (int i = 0; i < r1; i++)
            for (int j = 0; j < c1; j++)
                scanf("%d", &mat1[i][j]);
        printf("Enter Matrix2:\n");
        for (int i = 0; i < r2; i++)
            for (int j = 0; j < c2; j++)
                scanf("%d", &mat2[i][j]);
        for (int i = 0; i < r1; i++)
            for (int j = 0; j < c2; j++)
                res[i][j] = 0;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for (int r = 0; r < c1; r++)
                {
                    res[i][j] += mat1[i][r] * mat2[r][j];
                }
            }
        }
        printf("Resultant Matrix:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d\t", res[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Enter valid rows and columns for multiplication (c1 must equal r2).\n");
    }

    return 0;
}
