#include<iostream>
using namespace std;
int main()
{
    int i,T,sum=0,result;
    for(i=1; i<=4; i++){
        cin>>T;
        sum+=T;
    }
    result = (sum-3);
    cout<<result<<endl;

    return  0;
}
