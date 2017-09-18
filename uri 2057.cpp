#include<iostream>
using namespace std;
int main()
{
    int s,t,f,result;
    cin>>s>>t>>f;
    result = s+t+f;
    if(result<0)
        result = 24+result;
    cout<<result%24<<endl;

    return 0;
}
