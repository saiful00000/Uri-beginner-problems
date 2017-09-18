#include<stdio.h>
int main()
{
    int N, X, Y, i,j, sum=0;
    scanf("%d",&N);

    for(j=1; j<=N; j++){
        scanf("%d%d",&X,&Y);
        if(X==Y){
            sum=0;
            printf("%d\n",sum);
        }
        else if(X<Y){
            for(i=X+1, sum=0; i<Y; i++){
            if(i%2==1 || i%2==-1)
                sum=sum+i;
        }
        printf("%d\n",sum);
        }
        else {
            for(i=Y+1, sum=0; i<X; i++){
                if(i%2 == 1 || i%2 == -1)
                    sum = sum+i;
            }
            printf("%d\n",sum);
        }
        }
    return 0;
}
