#include<iostream>
using namespace std;
int main()
{
    int p, j1, j2, r, a, winner, sum;

    cin>>p>>j1>>j2>>r>>a;

    sum = j1+j2;

    if((sum%2==0 && p==1) || (sum%2==1 && p==0))
        winner = 1;
    else
        winner = 2;
    if((r==1 && a==0) || (r==0 && a==1))
        winner = 1;
    else if(r==1 && a==1)
        winner = 2;

    cout<<"Jogador "<<winner<<" ganha!"<<endl;

    return 0;
}
