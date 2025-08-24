#include<stdio.h>
int main() {
int a;

printf("Enter a number: ");
scanf("%d", &a);

if (a <= 0) {
if (a < 0) { printf("You entered a Negative number");
}
else { 
printf("You entered Zero"); }
}
else { 
printf("You entered a Positive number");
}
return 0;
}