#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
    double x1, x2, y1, y2, v, r1, r2, x, y, distance, range;
    while(scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2) != EOF){
        scanf("%lf%lf%lf",&v,&r1,&r2);

        x = (x2-x1) * (x2-x1);
        y = (y2-y1) * (y2-y1);

        distance = sqrt(x+y);
        distance += v*1.50;
        range = r1+r2;

        if(distance > range)
            cout<<"N"<<endl;
        else
            cout<<"Y"<<endl;
    }

    return 0;
}
