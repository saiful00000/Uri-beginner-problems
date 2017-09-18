#include<iostream>
using namespace std;

int main()
{
    int value_1, value_2,swp;
    cin>>value_1>> value_2;

    if(value_1 < value_2){
        swp = value_1;
        value_1 = value_2;
        value_2 = swp;
    }
    if(value_1%value_2 == 0)
        cout<<"Sao Multiplos"<<endl;
    else
        cout<<"Nao sao Multiplos"<<endl;

    return 0;
}
