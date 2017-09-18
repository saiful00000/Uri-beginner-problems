#include<stdio.h>
int main()
{
    int a=0, b=60;
    for(a=1, b=60; b<=60; a+=3, b-=5){
        printf("I=%d J=%d\n",a,b);
        if(b == 0)
            break;
    }
    return 0;
}
