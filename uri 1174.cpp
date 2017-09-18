#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    double A[100];

    for(i=0; i<100; i++){
        cin>>A[i];

        if(A[i]<=10)
            printf("A[%d] = %.1lf\n",i,A[i]);
    }
    return 0;
}
