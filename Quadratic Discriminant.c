#include<stdio.h>
int main(){
double a, b, c, dis,real, imagine, root1, root2;
printf("Enter values of a, b, & c: ");
scanf("%lf %lf %lf", &a, &b, &c);

dis = b*b - 4*a*c;

if (dis < 0) {
    real = -b/(2*a);
    imagine = sqrt(-dis)/(2*a);
    printf("In this case Dis < 0. so \nreal part = %.2lf \nImagine part = %.2lf", real, imagine);
    printf("\n\nRoot 1 = %.2lf + %.2lfi\nRoot 2 = %.2lf - %.2lfi", real, imagine);
}
else if ( dis > 0) {
    root1 = (-b + sqrt(dis))/(2*a);
    root2 = (-b - sqrt(dis))/(2*a);
    printf("In this case Dis > 0 so/n/nRoot 1 = %.2lf /nRoot 2 = %.2lf", root1, root2);
}
else {
    root1 = root2 = -b/(2*a);
    printf("In this case Dis = 0 so root1 = root2 \n\nRoot 1 = Root 2 = %.2lf", root1);
}

return 0;
}
