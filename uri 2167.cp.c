#include<iostream>
using namespace std;
int main()
{
    int n, i, flag=0;
    cin>>n;
    int arr[n];
    for(i=1; i<n; i++){
        cin>>arr[i];
    }
    for(i=1; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                flag = 1;
                break;
            }
        }
    }
    if(flag==1)
        cout<<i<<endl;
}
