#include<iostream>
using namespace std;
int main()
{
    int teaType, tea, i, count=0;
    cin>>teaType;
    for(i=1; i<=5; i++){
        cin>>tea;

        if(tea == teaType)
            count++;
    }
    cout<<count<<endl;

    return 0;
}
