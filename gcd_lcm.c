#include <stdio.h>

int main()
{
    int n1, n2, gcd, i, lcm;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);

    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    lcm = (n1 * n2) / gcd;

    printf("\nHere GCD of %d & %d : %d", n1, n2, gcd);
    printf("\nHere LCM of %d & %d : %d", n1, n2, lcm);
    return 0;
}