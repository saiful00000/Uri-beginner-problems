#include<iostream>
using namespace std;

int main()
{
    int X,Y;

    while(1){
        cin>>X>>Y;

        if(X == Y)
            break;
        else
        {
            if(X<Y)
                cout<<"Crescente"<<endl;
            else if(X > Y)
                cout<<"Decrescente"<<endl;
        }
    }

    return 0;
}
