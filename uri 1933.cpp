#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{    int value1,value2;
    while(scanf("%d%d",&value1,&value2) != EOF){
        if(value1 == value2)
            cout<<value1<<endl;
        else if(value1>value2)
            cout<<value1<<endl;
        else if(value1<value2)
            cout<<value2<<endl;
    }
    return 0;
}
