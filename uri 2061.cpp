#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int N,M;
    char tab[10];
    cin>>N>>M;
    int cont = N;
    while(M--){
        cin>>tab;

        if(tab[0] == 'f')
            cont++;
        else
            cont--;
    }
    cout<<cont<<endl;
    return 0;
}
