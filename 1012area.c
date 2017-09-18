#include<stdio.h>
int main()
{
    double A,B,C,pi=3.14159,triangle,circle,trapezium,square,rectangle;
    scanf("%lf%lf%lf",&A,&B,&C);
    triangle = (A*C)/2;
    circle = pi*C*C;
    trapezium = .5*(A+B)*C;
    square = (B*B);
    rectangle = A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triangle,circle,trapezium,square,rectangle);
    return 0;
}
