#include<stdio.h>
int main()
{
    int i, n, a=0, b=0, c=0, total=0, amount;
    char ch;
    double x, y, z;

    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d %c",&amount,&ch);

        if(ch == 'C')
            a += amount;
        else if(ch == 'R')
            b += amount;
        else if(ch == 'S')
            c += amount;
            c += amount;
    }
    total = a+b+c;
    x = (a/(total*1.0))*100.00;
    y = (b/(total*1.0))*100.00;
    z = (c/(total*1.0))*100.00;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",a);
    printf("Total de ratos: %d\n",b);
    printf("Total de sapos: %d\n",c);
    printf("Percentual de coelhos: %.2lf %%\n",x);
    printf("Percentual de ratos: %.2lf %%\n",y);
    printf("Percentual de sapos: %.2lf %%\n",z);

    return 0;
}
