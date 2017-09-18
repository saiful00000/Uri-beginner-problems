#include<iostream>
using namespace std;

int main()
{
    int n,t,i,min=21,index;

    cin>>n;
    for(i=1; i<=n; i++){
        cin>>t;

        if(t<min){
            min=t;
            index=i;
        }
    }
    cout<<index<<endl;

    return 0;
}
