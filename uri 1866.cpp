#include<iostream>

using namespace std;

int main()
{
    int n,i;
    int a;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>a;

        if(a%2==0)
            cout<<"0"<<endl;
        else
            cout<<"1"<<endl;
    }
    return 0;
}
