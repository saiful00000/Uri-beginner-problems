#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int l,i,j;
    char t;
    double n[12][12];
    double soma=00.00;

    cin>>l;
    cin>>t;

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            cin>>n[i][j];

            if(i == l)
                soma = soma+n[i][j];
        }
    }
    if(t=='S')
        printf("%.1lf\n",soma);
    else
        printf("%.1lf\n",soma/12.0);

    return 0;
}
