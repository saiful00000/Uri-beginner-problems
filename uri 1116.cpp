#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,x,y,i;
    double reg;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>x>>y;
        if(y==0)
            cout<<"divisao impossivel"<<endl;
        else{
            reg = x/(y*1.0);
            printf("%.1lf\n",reg);
        }
    }
    return 0;
}
