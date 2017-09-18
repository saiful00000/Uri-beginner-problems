#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
    char number[25], temp;
    cin>>number;
    int length = strlen(number);
    int i, j;
    j=length-1;
    i=0;
    while(i<j){
        temp = number[i];
        number[i] = number[j];
        number[j] = temp;
        i++;
        j--;
    }
    cout<<number<<endl;
    return 0;
}
