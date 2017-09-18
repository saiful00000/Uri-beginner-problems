#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int main()
{
    double n, result=0.0;
    cin>>n;
    while(n--){
        result += 2.0;
        result = 1.0/result;
    }
    result += 1.0;
    printf("%.10lf\n",result);

    return 0;
}
