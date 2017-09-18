#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    while(cin>>n){
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(n%2 == 1 && i==n/2 && j==n/2){
                    cout<<4;
                }
                else if((i >= n / 3 && i < n - (n / 3)) && (j >= n / 3 && j < n - (n / 3))){
                        cout<<1;
                    }
                else if(i==j){
                    cout<<2;
                }
                else if(i+j == n-1){
                    cout<<3;
                }
                else {
                    cout<<0;
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
