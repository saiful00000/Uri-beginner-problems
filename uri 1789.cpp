#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int l,n,i,max=0;
    while(scanf("%d",&l) != EOF){
        for(i=1,max=0; i<=l; i++){
            cin>>n;
            if(n>max)
                max=n;
        }
        if(max<10)
            cout<<"1"<<endl;
        else if(max<20)
            cout<<"2"<<endl;
        else
            cout<<"3"<<endl;
    }

    return 0;

}
