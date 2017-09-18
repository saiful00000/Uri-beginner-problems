#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i=0;
    double N[100], x, j;
    scanf("%lf",&x);
    N[i] = x;
    for(i=0; i<100; i++){
            printf("N[%d] = %.4lf\n",i,N[i]);
            x/=2;
            N[i+1] = x;
    }
    return 0;
}
