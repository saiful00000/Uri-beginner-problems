#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    long long int n, first = 0, second=1, next, c;
    int i,j;
    cin>>j;
    for(i=1; i<=j; i++, first=0, second=1){
        scanf("%lld",&n);

        for(c=0; c<=n; c++){
            if(c<=1)
                next = c;
            else
            {
                next = first + second;
                first = second;
                second = next;
            }
        }
        printf("Fib(%lld) = %lld\n",n,next);
    }
    return 0;
}
