#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0,d,e,f,l=0,m=0,n,p,x=0,par[5],impar[5],arr[15],i,j;

    for(b=0; b<15; b++)
        scanf("%d",&arr[b]);
    for(a=0; a<15; a++){
        if(l==5)
        {
            for(n=0; n<5; n++){
                printf("impar[%d] = %d\n",n,impar[n]);
                l=0;
            }
        }
         if(m==5)
        {
            for(p=0; p<5; p++){
                printf("par[%d] = %d\n",p,par[p]);
                m=0;
            }
        }
        if(arr[a]%2 != 0){
            impar[c]=arr[a];
            c++;
            l++;
            if(c==5)
                c=0;

        }
        if(arr[a]%2 == 0){
            par[x]=arr[a];
            x++;
            m++;
            if(x==5)
                x=0;
        }

    }
    for(i=0; i<l; i++)
        printf("impar[%d] = %d\n",i,impar[i]);
    for(j=0; j<m; j++)
        printf("par[%d] = %d\n",j,par[j]);
    return 0;
}
