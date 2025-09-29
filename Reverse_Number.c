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
    original = num;
    printf("Reverse of %d is = %d", num, reverse);

    return 0;
}