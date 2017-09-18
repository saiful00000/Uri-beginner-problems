#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        if(n==0)
            cout<<"vai ter copa!"<<endl;
        else if(n>0 && n<101)
            cout<<"vai ter duas!"<<endl;
    }
    return 0;
}
