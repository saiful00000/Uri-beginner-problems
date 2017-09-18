#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int N[20], i, j, temp;

    for(i=0; i<20; i++){
        cin>>N[i];
    }
    j=i-1;
    i=0;
    while(i<j){
        temp = N[i];
        N[i] = N[j];
        N[j] = temp;
        i++;
        j--;
    }
    for(i=0; i<20; i++){
        printf("N[%d] = %d\n",i,N[i]);
    }
    return 0;
}
