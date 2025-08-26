#include <stdio.h>
int main() {
    int X, Y, step, sum = 0;
printf("Input 'n'th number: "); 
scanf("%d", &X);
printf("Input Step Value: ");
scanf("%d", &step);

printf("Series: ");
for (Y = 1; Y <= X; Y = Y + step) {
printf(" %d",Y );
sum = sum + Y;
}
printf("\nSum: %d", sum);
return 0;
}