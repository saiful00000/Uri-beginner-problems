#include<stdio.h>

int main()
{
    int i, total = 0;
    float y;
    for(i=1; i<=6; i++)
    {
        scanf("%f",&y);

        if(y>0)
            total++;
    }
    printf("%d valores positivos\n",total);

    return 0;
}
