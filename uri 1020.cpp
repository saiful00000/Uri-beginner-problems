#include<iostream>
using namespace std;
int main()
{
    int n, year, month, days;
    cin>>n;
    year = (n/365);
    month  = (n%365)/30;
    days = (n%365%30);
    cout<<year<<" ano(s)"<<endl;
    cout<<month<<" mes(es)"<<endl;
    cout<<days<<" dia(s)"<<endl;
    return 0;
}
