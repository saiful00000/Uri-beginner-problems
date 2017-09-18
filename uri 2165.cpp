#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{

    char tt[1000];

    gets(tt);

    printf((strlen(tt) > 140) ? "MUTE\n":"TWEET\n");

    return 0;
}
