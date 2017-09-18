#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    double i , j;
    char ch = '%';
    cin>>i;

    if(i <= 400){
        j = (i * 15) / 100;
        i = i + j;
        printf("Novo salario: %.2lf\n",i);
        printf("Reajuste ganho: %.2lf\n",j);
        printf("Em percentual: 15 %c\n",ch);
    }
    else if(i > 400 && i <= 800){
        j = (i * 12) / 100;
        i = i + j;
        printf("Novo salario: %.2lf\n",i);
        printf("Reajuste ganho: %.2lf\n",j);
        printf("Em percentual: 12 %c\n",ch);
    }
    else if(i > 800 && i <= 1200){
        j = (i * 10) / 100;
        i = i + j;
        printf("Novo salario: %.2lf\n",i);
        printf("Reajuste ganho: %.2lf\n",j);
        printf("Em percentual: 10 %c\n",ch);
    }
    else if(i > 1200 && i <= 2000){
        j = (i * 7) / 100;
        i = i + j;
        printf("Novo salario: %.2lf\n",i);
        printf("Reajuste ganho: %.2lf\n",j);
        printf("Em percentual: 7 %c\n",ch);
    }
    else if(i > 2000){
        j = (i * 4) / 100;
        i = i + j;
        printf("Novo salario: %.2lf\n",i);
        printf("Reajuste ganho: %.2lf\n",j);
        printf("Em percentual: 4 %c\n",ch);
    }

    return 0;
}
