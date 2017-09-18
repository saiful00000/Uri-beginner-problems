#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    double first_value,second_value,third_value;
    scanf("%lf%lf%lf",&first_value,&second_value,&third_value);

    if(first_value+second_value>third_value && first_value+third_value>second_value && second_value+third_value>first_value)
        printf("Perimetro = %.1lf\n", first_value+second_value+third_value);
    else
        printf("Area = %.1lf\n", ((first_value+second_value)*third_value)/2.0);

    return 0;
}
