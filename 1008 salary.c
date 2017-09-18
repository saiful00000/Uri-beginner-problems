#include<stdio.h>
int main()
{
    int a,hr;
    double rate;

    scanf("%d%d%lf",&a,&hr,&rate);
    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %.2lf\n",(hr*rate));
    return 0;
}
