#include<stdio.h>
int main()
{
    char employee;
    double salary, sold, total;
    scanf("%s%lf%lf",&employee,&salary,&sold);
    total = salary+(sold*15)/100;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
