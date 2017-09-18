#include<stdio.h>
int main()
{
    int x,y, sum=0;
    scanf("%d%d",&x,&y);

    if(x == y)
        printf("%d\n",sum);
    else if(x<y){
        for(x+=1; x<y; x++){
            if(x%2 != 0)
            sum += x;
        }
        printf("%d\n",sum);
    }
    else if(x>y){
        for(y+=1; y<x; y++){
            if(y%2 != 0)
            sum += y;
        }
        printf("%d\n",sum);
    }
    return 0;
}
