#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i;
    char full[40]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    cin>>n;
    for(i=0; i<n; i++){
        cout<<full[i];
    }
    cout<<endl;

    return 0;
}
