#include<iostream>
using namespace std;
int main()
{
    int number, value, result=0;
    while(1){
        cin>>number>>value;
        if(number == 0 && value == 0)
            break;

        result = number*value;
        cout<<result<<endl;
    }
    return 0;
}
