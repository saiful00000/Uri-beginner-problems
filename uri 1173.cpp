#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int v,X[10],i;
    cin>>v;
    for(i=0; i<10; i++){
        X[i]=v;
        printf("N[%d] = %d\n",i,v);
        v*=2;
    }
    return 0;
}
