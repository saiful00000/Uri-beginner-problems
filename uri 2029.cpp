#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    double v, d, r, area, hight, Pi=3.14;

    while(scanf("%lf%lf",&v,&d) != EOF){
        r = d/2;
        area = Pi*r*r;
        hight = v/area;
        printf("ALTURA = %.2lf\n",hight);
        printf("AREA = %.2lf\n",area);
    }
    return 0;
}
