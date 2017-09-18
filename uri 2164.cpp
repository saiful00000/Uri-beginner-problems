#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<cmath>

using namespace std;

int main()
{
    double n, a, b;
    double fibo;
    cin>>n;

    a = (1 + sqrt(5))/2.0;
    b = (1 - sqrt(5))/2.0;


    double ans = (pow(a,n) - pow(b,n)) / sqrt(5);

    printf("%.1lf\n",ans);

    return 0;
}
