#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int v,i,j, A[1000];
    cin>>v;
    for(i=0, j=0; i<1000; i++){
        printf("N[%d] = %d\n",i,j);
        j++;
        if(j==v)
            j=0;
    }
    return 0;
}
