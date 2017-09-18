#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n, i=1;

    while(scanf("%d", &n) != EOF){
        cout<<(n-i)<<endl;
    }
    return 0;
}
