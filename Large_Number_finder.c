#include <stdio.h>
void large(int x, int y, int z);
void large(int x, int y, int z)
{
    if (x >= y && x >= z)
    {
        printf("\n%d is the largest number among %d, %d, %d", x, x, y, z);
    }
    else if (y >= x && y >= z)
    {
        printf("\n%d is the largest number among %d, %d, %d", y, x, y, z);
    }
    else
    {
        printf("\n%d is the largest number among %d, %d, %d", z, x, y, z);
    }

    return 0;
}
int main()
{
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);

    large(a, b, c);

    return 0;
}