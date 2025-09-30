#include <stdio.h>
int main()
{
    int matrix[100][100], row, column;
    printf("Enter total row of the matrix: ");
    scanf("%d", &row);
    printf("Enter total column of the matrix: ");
    scanf("%d", &column);
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < column; c++)
        {
            printf("Elements %d*%d :  ", r, c);
            scanf("%d", &matrix[r][c]);
        }
    }
    printf("\nHere the matrix: \n");
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < column; c++)
        {
            printf("  %d", matrix[r][c]);
            if (c == column - 1)
            {
                printf("\n");
            }
        }
    }

    return 0;
}