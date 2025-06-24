#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Size of the array:");
    scanf("%d", &n);
    int mat[n][n], trans[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            trans[j][i] = mat[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d \t ", trans[i][j]);
        }
        printf("\n");
    }
}
