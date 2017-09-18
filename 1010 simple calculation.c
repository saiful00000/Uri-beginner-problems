#include<stdio.h>
int main()
{
    int prod1_code, prod1_number,prod2_code,prod2_number;
    float prod1_price, prod1_paid, prod2_price, prod2_paid, total_paid;
    scanf("%d%d%f",&prod1_code, &prod1_number, &prod1_price);
    scanf("%d%d%f",&prod2_code, &prod2_number, &prod2_price);
    total_paid = (prod1_number*prod1_price)+(prod2_number*prod2_price);
    printf("VALOR A PAGAR: R$ %.2f\n",total_paid);
    return 0;
}
