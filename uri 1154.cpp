#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int year, total=0;
    double average, c=0;

    while(1)
    {
        cin>>year;
        if(year < 0)
            break;
        else if(year > 0){
            total += year;
            c++;
        }
    }
    average = total/c;
    printf("%.2lf\n",average);

    return 0;
}
