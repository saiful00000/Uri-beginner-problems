#include<stdio.h>
int main()
{
    int n,i;
    float a1, a2, a3, total, average;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%f%f%f",&a1,&a2,&a3);
        total = a1*2.0 + a2*3.0 + a3*5.0;
        average = total/10.0;
        printf("%.1lf\n",average);
    }
    return 0;
}
