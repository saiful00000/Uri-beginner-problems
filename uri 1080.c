#include<stdio.h>
int  main()
{
    int in, i, pos, max=0;
    for(i=1; i<=100; i++){
        scanf("%d",&in);
        if(max<in){
            max = in;
            pos = i;
        }
    }
    printf("%d\n%d\n",max,pos);
    return 0;
}
