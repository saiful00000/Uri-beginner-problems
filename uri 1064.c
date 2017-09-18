#include<stdio.h>

int main()
{
    int i, total = 0;
    float y, average, sum = 0;
    for(i=1; i<=6; i++)
    {
        scanf("%f",&y);

        if(y>0){
            sum += y;
            total++;
        }
            average = sum / (float)total;
    }
    printf("%d valores positivos\n",total);
    printf("%.1f\n",average);

    return 0;
}

