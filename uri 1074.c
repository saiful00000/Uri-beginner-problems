#include<stdio.h>
int main()
{
    int N, i, j;
    scanf("%d",&N);
    for(i=1; i<=N; i++){
        scanf("%d",&j);

        if(j%2 != 0 && j>0)
            printf("ODD POSITIVE\n");
        else if(j%2 != 0 && j<0)
            printf("ODD NEGATIVE\n");
        else if(j%2 == 0 && j>0)
            printf("EVEN POSITIVE\n");
        else if(j%2 == 0 && j<0)
            printf("EVEN NEGATIVE\n");
        else if(j == 0)
            printf("NULL\n");
    }
    return 0;
}
