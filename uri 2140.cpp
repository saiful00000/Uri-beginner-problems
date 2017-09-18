#include<iostream>
using namespace std;
int main()
{
    int i, j, n, net , m, flag, bill[]={7, 12, 22, 52, 102, 15, 25, 55, 105, 30, 60, 110, 70, 120, 150};
    while(1){
        cin>> n >> m;
        if(n==0 &&m==0)
            break;
        net = m - n;

        for(i=0, flag=0; i<15; i++){
            if(bill[i]==net){
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"possible"<<endl;
        else
            cout<<"impossible"<<endl;
    }
    return 0;
}
