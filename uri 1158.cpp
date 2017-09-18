#include<iostream>
using namespace std;
int main()
{
        int n, x, y, c, a, i;
    cin>>n;
    for(a=1; a<=n; a++){
        cin>>x>>y;
        if(x%2==1){
                c=0;
            for(i=1; i<=y; i++){
                c=c+x;
                x+=2;
            }
            cout<<c<<endl;
        }
        else
        {
            x++;
            c=0;
            for(i=1; i<=y; i++){
                c=c+x;
                x+=2;
            }
            cout<<c<<endl;
        }
    }
    return 0;

}
