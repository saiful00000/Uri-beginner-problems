#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int X[10], i,j;

    for(i=0; i<10; i++){
        cin>>X[i];
        if(X[i]<=0)
            X[i]=1;
    }
    for(j=0; j<10; j++){
        printf("X[%d] = %d\n",j,X[j]);
    }

    return 0;
}
