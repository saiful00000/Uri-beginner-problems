#include<iostream>
using namespace std;
int main()
{
    int test, h, m, o;
    cin>>test;

    while(test--){
        cin>>h>>m>>o;
        if(h<10)
            cout<<"0"<<h<<":";
        else
            cout<<h<<":";
        if(m<10)
            cout<<"0"<<m;
        else
            cout<<m;
        if(o==0)
            cout<<" - A porta fechou!"<<endl;
        else
            cout<<" - A porta abriu!"<<endl;
    }
    return 0;
}
