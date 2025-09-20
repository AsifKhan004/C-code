#include<stdio.h>
int main (){
int num, limit;
printf("Enter a integer number: ");
scanf("%d", &num);
printf("Enter limit: ");
scanf("%d", &limit);
printf("\nMultiplication chart: ");
for(int i=1; i<=limit; i++){
    printf("\n%d * %d = %d", num, i, num*i);
}
return 0;
}
