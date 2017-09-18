#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,m,i,j,count=0;
    while(scanf("%d",&n) !=EOF){
            int number=1;
        count++;
        number += ((n*(n+1))/2);
        if(n==0)
            cout<<"Caso "<<count<<": "<<number<<" numero"<<endl;
        else
            cout<<"Caso "<<count<<": "<<number<<" numeros"<<endl;
        cout<<"0";
        for(i=1; i<=n; i++){
            for(j=1; j<=i; j++){
                cout<<" "<<i;
            }
        }
        cout<<endl;
        cout<<endl;
    }
    return 0;
}
