#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int n, length;
    char str[10100];
    cin>>n;
    while(n--){
        cin>>str;

        length = strlen(str);

        printf("%.2lf\n",(length*.01));
    }

    return 0;
}
