#include<stdio.h>
void main()
{
    int n=5;int c;int row;
    int i;int temp=n;
    for(i=1;i<=n;i++)
    {
        for(c=1;c<temp;c++)
        {
            printf(" ");
        }
        temp--;
        for(c=1;c<=2*i-1;c++)
        {
            printf("*");
        }
        printf("\n");
    }
}
