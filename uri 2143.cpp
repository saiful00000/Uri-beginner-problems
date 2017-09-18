
#include<stdio.h>
using namespace std;
int main()
{
    int t, n, i;

    while(scanf("%d",&t)){

        if(t==0)
        break;

        for(i=0; i<=t; i++){
            cin>>n;

            if(n%2)
                printf("%d",n*2-1);
            else
                cout<<("%d",n*2-2);
        }
    }
    return 0;
}
