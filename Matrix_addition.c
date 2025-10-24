#include <stdio.h>
int main()
{
    int r, c, matrix[100][100], mat1[100][100], mat2[100][100];
    printf("Enter rows in both 1st & 2nd matrix: ");
    scanf("%d", &r);
    printf("Enter columns in both 1st & 2nd matrix: ");
    scanf("%d", &c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter %d*%d th element of 1st matrix: ", i + 1, j + 1);
            scanf("%d", &mat1[r][c]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter %d*%d th element of 2nd matrix: ", r + 1, j + 1);
            scanf("%d", &mat2[r][c]);
        }
    }
    printf("\nAddition of 1st matrix & 2nd matrix: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matrix[r][c] = mat1[r][c] + mat2[r][c];

            printf("  %d", matrix[r][c]);
        }
        printf("\n");
    }

    return 0;

}
