#include<iostream>
using namespace std;
int main()
{
    int n, lop;
    cin>>n;
    for(lop=1; lop<=n; lop++){
        if(n%lop==0)
            cout<<lop<<endl;
    }
    return 0;
}
