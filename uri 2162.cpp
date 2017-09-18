#include<iostream>
using namespace std;

int main()
{
    int n, i, j, flag=1;
    cin>>n;
    int arr[n];

    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    if(n==2 && arr[0]==arr[1])
        flag = 0;
    else
    {
        for(i=2; i<n; i++)
        {
            if(arr[i] >= arr[i-1] && arr[i-1] >= arr[i-2])
            {
                flag = 0;
                break;
            }
            else if(arr[i] <= arr[i-1] && arr[i-1] <= arr[i-2]){
                    flag = 0;
                    break;
            }
        }
    }
    if(flag == 1)
        cout<<"1"<<endl;
    else
        cout<<"0"<<endl;

    return 0;
}
