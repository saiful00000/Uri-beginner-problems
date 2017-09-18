#include<iostream>
using namespace std;
int main()
{
    int jh, np, ph, i, j, dif;
    int flag=0;
    cin>>jh>>np;
    int arr[np];
    int n=np;

    for(i=0; i<np; i++){
        cin>>arr[i];
    }
    for(i=1; i<np; i++){
            if(arr[i]>arr[i-1])
               dif=arr[i]-arr[i-1];
            else
                dif=arr[i-1]-arr[i];
            if(dif<=jh)
                flag++;
        }
    if(flag == np-1)
        cout<<"YOU WIN"<<endl;
    else
        cout<<"GAME OVER"<<endl;

    return 0;
}
