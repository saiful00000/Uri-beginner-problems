#include<stdio.h>
int main()
{
    int a,b,c,great,greatest;
    scanf("%d%d%d",&a,&b,&c);
    great = (a+b+abs(a-b))/2;
    greatest = (great+c+abs(great-c))/2;
    printf("%d eh o maior\n",greatest);
    return 0;
}
