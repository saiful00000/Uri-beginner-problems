#include<iostream>
using namespace std;
int main()
{
    int x,a,v;
    while(1){
        v=0;
        cin>>x;
        if(x==0)
            break;
        else if(x%2==0){
            for(a=x; a<=x+8; a+=2)
                v+=a;
        }
        else
        for(a=x+1; a<=x+9; a+=2){
            v+=a;
        }
        cout<<v<<endl;
    }
    return 0;
}
