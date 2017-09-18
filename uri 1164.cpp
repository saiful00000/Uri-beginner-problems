#include<iostream>
using namespace std;
int main()
{
    int n,x,sum=0,i,j,c;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>x;
        c=x/2;
        sum=0;
        for(j=1; j<=c; j++){
            if(x%j==0)
                sum=sum+j;
        }
        if(sum==x)
            cout<<x<<" "<<"eh perfeito"<<endl;
        else
            cout<<x<<" "<<"nao eh perfeito"<<endl;
    }
    return 0;
}
