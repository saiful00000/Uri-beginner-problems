#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main()
{
    double n , result1, result2;

    cin>>n;

    result1 = n/log(n);
    result2 = (1.25506) * (n/log(n));

    printf("%.1lf %.1lf\n",result1,result2);

    return 0;
}
