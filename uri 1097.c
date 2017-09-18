#include<stdio.h>
int main()
{
    int i, j, k=7, l;
    for(i=1;i<=9;i+=2){
        for(l=1,j=k; l<=3;j--,l++)
            printf("I=%d J=%d\n",i,j);
        k+=2;
    }
    return 0;
}
