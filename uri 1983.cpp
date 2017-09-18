#include<iostream>
using namespace std;
int main()
{
    int n, i, result;
    cin>>n;
    int std_num[n];
    double max=0.0, reg_num[n];
    for(i=0; i<n; i++)
        cin>>std_num[i]>>reg_num[i];
    for(i=0; i<n; i++){
        if(reg_num[i]>max){
            max=reg_num[i];
            result = i;
        }
    }
    if(max<8)
        cout<<"Minimum note not reached"<<endl;
    else
        cout<<std_num[result]<<endl;
    return 0;
}
