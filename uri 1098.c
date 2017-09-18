#include<stdio.h>
int main()
{
    int i, j, k=0, l;
    float f=0.2;
    for(i=1;i<=9;i+=f){
        for(l=1,j=k; l<=3;j--,l++)
            printf("I=%.1lf J=%.1lf\n",i,j);
        k+=f;
    }
    return 0;
}

