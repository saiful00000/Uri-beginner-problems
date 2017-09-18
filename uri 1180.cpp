#include<iostream>
using namespace std;
int main()
{
    int i,j,v,n,min;
    cin>>n;
    int N[n];

    for(i=0; i<n; i++)
        cin>>N[i];

    min = N[0];

    for(i=0; i<n; i++){
        if(min>N[i]){
            min = N[i];
            v=i;
        }
    }
    cout<<"Menor valor: "<<min<<endl;
    cout<<"Posicao: "<<v<<endl;

    return 0;
}
