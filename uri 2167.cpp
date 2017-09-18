#include<iostream>
using namespace std;
int main()
{
    int n, value, flag=0, count=0, cnt=1, result=0;
    cin>>n;
    while(n--){
        cin>>value;
        count++;
        if(value<flag && cnt==1){
            result = count;
            cnt=0;
        }
        flag = value;
    }
    cout<<result<<endl;
    return 0;
}

