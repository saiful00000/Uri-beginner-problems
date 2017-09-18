#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int start_hr, finish_start;

    cin>>start_hr >> finish_start;

    if(start_hr >= finish_start)
        printf("O JOGO DUROU %d HORA(S)\n", (24 - start_hr) + finish_start);
    else
        printf("O JOGO DUROU %d HORA(S)\n", finish_start - start_hr);

    return 0;
}
