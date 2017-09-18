#include<iostream>
using namespace std;
int main()
{
    int n,dif,year;
    cin>>n;
    while(n--){
        cin>>dif;

        if(dif<2015){
            year = 2015 - dif;
            cout<<year<<" D.C."<<endl;
        }
        else
        {
            year = dif - 2014;
            cout<<year<<" A.C."<<endl;
        }
    }
    return 0;
}
