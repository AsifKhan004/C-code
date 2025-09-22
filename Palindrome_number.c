#include <stdio.h>
int main()
{
    int num, original, reminder, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0)
    {
        reminder = num % 10;
        reverse = reverse * 10 + reminder;
        num /= 10;
    }

    printf("Reverse result = %d", reverse);

    original = num;
    if (original = reverse)
    {
        printf("\n So %d is a Palindrome Number.", original);
    }
    else
    {
        printf("\nSo %d is not a Palindrome number.", original);
    }

    return 0;
}