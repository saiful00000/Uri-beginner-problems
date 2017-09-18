#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    double a, b, result;

    cin>>a>>b;

    result = ((b-a)*100.00)/a;

    printf("%.2lf",result);
    printf("%%\n");

    return 0;
}
