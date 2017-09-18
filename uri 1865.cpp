#include<iostream>
using namespace std;
int main()
{
    int n;
    string name;
    int i,s;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>name>>s;
        if(name=="Thor"){
            cout<<"Y"<<endl;
        }
        else
            cout<<"N"<<endl;
    }
    return 0;
}
