#include<iostream>
using namespace std;
int main()
{
    int x,z, a,b,c=0;

    cin>>x;
    do{
        cin>>z;
    }
    while(z<=x);
    for(a=x,b=0; b<z; a++){
        b=b+a;
        c++;
    }
    cout<<c<<endl;
    return 0;
}
