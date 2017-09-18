#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    if(A-B == 0)
    cout<<"S"<<endl;
    else if(A-C == 0)
    cout<<"S"<<endl;
    else if(B-C==0 )
    cout<<"S"<<endl;
    else if((A+B)-C == 0)
    cout<<"S"<<endl;
    else if((B+C)-A == 0)
    cout<<"S"<<endl;
    else if((A+C)-B == 0)
    cout<<"S"<<endl;
    else
        cout<<"N"<<endl;

    return 0;
}
