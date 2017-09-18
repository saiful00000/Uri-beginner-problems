#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    double i, b=1, s=0, c;

    for(i=1; i<=39; i+=2){
        c=i/b;
        s+=c;
        b*=2;
    }
    printf("%.2lf\n",s);

    return 0;
}
