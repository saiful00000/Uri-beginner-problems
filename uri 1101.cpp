#include<iostream>
using namespace std;

int main()
{
    int i, M, N, sum=0;
    while(1){
        cin>>M>>N;

        if(M<=0 || N<=0)
            break;
        else
        {
            if(M>N){
                for(i=M; i<=N; i++){
                    cout<<i ;
                    sum += i;
                }
                cout<<sum<<endl;
            }
            else if(M<N){
                for(i=N; i<=M; i++){
                    cout<<i ;
                    sum += i;
                }
                cout<<sum<<endl;
            }
        }
    }

    return 0;
}
