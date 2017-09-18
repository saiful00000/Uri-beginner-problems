#include<iostream>
using namespace std;
int main()
{
    int n, hr, mini, sec;
    cin>>n;

    hr = (n/3600);
    mini  = (n%3600)/60;
    sec = n%60;

    cout<<hr<<":"<<mini<<":"<<sec<<endl;
    return 0;
}
