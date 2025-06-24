#include <stdio.h>
void main()
{
    int n,i,j,b=0;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter value for element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int isUpper = 1, isLower = 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i > j && arr[i][j] != 0)
                isUpper = 0;
            if (j > i && arr[i][j] != 0)
                isLower = 0;
        }
    }

    if (isUpper)
        printf("The matrix is an upper triangular matrix.\n");
    else if (isLower)
        printf("The matrix is a lower triangular matrix.\n");
    else
        printf("The matrix is neither upper nor lower triangular.\n");

    printf("Upper triangular matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j >= i)
                printf("%d ", arr[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }

    printf("Lower triangular matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j <= i)
                printf("%d ", arr[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}
