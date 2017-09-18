#include<stdio.h>
int main()
{
    int hr, speed;
    double distance;
    scanf("%d%d",&hr,&speed);
    distance = speed*hr;

    double litter = (distance / 12);//here we divided distance by 12 because the car is go 12 km/L
    printf("%.3lf\n",litter);
    return 0;

}
