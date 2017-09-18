#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int m[70][70]={},n;
    int i,j;

    while(scanf("%d",&n) != EOF){
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(i==j)
                    m[i][j] = 1;
                else
                    m[i][j]=3;
                if(i+j == n-1)
                    m[i][j]=2;

                printf("%d",m[i][j]);

                if(j==n-1)
                    cout<<endl;
            }
        }
    }
    return 0;
}
