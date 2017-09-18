#include<iostream>
using namespace std;
int main()
{
    int i,j,g,f,value,arr[4];

    for(i=0; i<4; i++){
        cin>>arr[i];
    }
    for(i=0;i<4; i++){
        for(j=i+1; j<4; j++){
            if(arr[i]>arr[j])
            {
                value = arr[i];
                arr[i]=arr[j];
                arr[j]=value;
            }
        }
    }
    g=arr[1]+arr[2];
    f=arr[0]+arr[1];
    if((arr[3]<g) || (arr[2]<f))
        cout<< "S" <<endl;
    else
        cout<<"N" <<endl;

    return 0;
}
