// MATRIX MULTIPLICATION.
#include <stdio.h>
int main()
{
    int r1, c1, r2, c2, mat1[100][100], mat2[100][100], multi[100][100];
    printf("Enter first matrix's row: ");
    scanf("%d", &r1);
    printf("Enter first matrix's column: ");
    scanf("%d", &c1);
    printf("Enter second matrix's row: ");
    scanf("%d", &r2);
    printf("Enter second matrix's column: ");
    scanf("%d", &c2);

    if (c1 != r2)
    {
        printf("\n\n---Error: These matrixes multiplication value could not be calculated---");
    }
    else
    {
        printf("\n");
        for (int r = 0; r < r1; r++)
        {
            for (int c = 0; c < c1; c++)
            {
                printf("Enter [%d][%d] th element of first matrix:   ", r + 1, c + 1);
                scanf("%d", &mat1[r][c]);
            }
        }
        printf("\n");
        for (int r = 0; r < r2; r++)
        {
            for (int c = 0; c < c2; c++)
            {
                printf("Enter [%d][%d] th element of second matrix:   ", r + 1, c + 1);
                scanf("%d", &mat2[r][c]);
            }
        }
        // OUTPUT PART
        printf("\nMultiplication of 1st & 2nd matrix:\n");
        for (int r = 0; r < r1; r++)
        {
            for (int c = 0; c < c2; c++)
            {
                multi[r][c] = 0;
                for (int m = 0; m < c1; m++)
                {
                    multi[r][c] += mat1[r][m] * mat2[m][c];
                }
                printf("   %d", multi[r][c]);
            }
            printf("\n\n");
        }
    }

    return 0;
}