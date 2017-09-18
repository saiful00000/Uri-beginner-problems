#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a,b,c,d;
    while(n--){
        int x,y;
        cin>>a>>b>>c>>d;

        int B = b=="PAR",D=d=="PAR";

        cin>>x>>y;

        if((x+y)&1){
            if(B&1)
                cout<<c<<endl;
            else
                cout<<a<<endl;
        }
        else{
            if(B & 1)
            cout<<a<<endl;
            else
                cout<<c<<endl;

        }
    }
    return 0;
}
