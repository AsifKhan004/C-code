#include <stdio.h>
#include <math.h>
int main()
{
    int num, count = 0, original, reminder, result = 0;
    printf("Enter a psitive number: ");
    scanf("%d", &num);
    original = num;
    while (original != 0)
    {
        original /= 10;
        count++;
    }
    original = num;
    while (original != 0)
    {
        reminder = original % 10;
        result = result + pow(reminder, count);
        original /= 10;
    }
    original = num;
    if (result == original)
    {
        printf("%d is a Armstrong number.", original);
    }
    else
    {
        printf("%d is not a Armstrong number.", original);
    }

    return 0;
}