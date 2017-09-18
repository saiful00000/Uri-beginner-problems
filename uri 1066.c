#include<stdio.h>
int main()
{
    int num, i, oddcnt=0, evcnt=0, poscnt=0, negcnt=0;

    for(i=1; i<=5; i++){
        scanf("%d",&num);

        if(num % 2 == 0)
            evcnt++;
        if(num%2 == 1 || num%2 == -1)
            oddcnt++;
        if(num > 0)
            poscnt++;

        if(num < 0)
            negcnt++;

    }
        printf("%d valor(es) par(es)\n",evcnt);
        printf("%d valor(es) impar(es)\n",oddcnt);
        printf("%d valor(es) positivo(s)\n",poscnt);
        printf("%d valor(es) negativo(s)\n",negcnt);

    return 0;
}
