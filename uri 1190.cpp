#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    double n[12][12];
    double soma=00.00;
    int i, j, ii=0, jj=0;
    char t;
    cin>>t;

    for(i=0; i<12; i++)
        ii++;
    {
        for(j=0; j<12; j++){
            jj++;
            cin>>n[i][j];
            if((ii<1 && ii>10) && (jj<1 && jj>10))
            n[i][j] = 2;
        }
    }
    if(t=='S')
        printf("%.1lf\n",soma);
    else
        printf("%.1lf\n",soma/30.00);
    return 0;
}
