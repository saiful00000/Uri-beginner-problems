
#include<stdio.h>
int main()
{
    int n,i,j;

    while(1){
            scanf("%d",&n);
            if(n==0)
                break;
            else
            {
                int a[n][n];
                for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if((i==0 || i==n-1) || (j==0 || j==n-1))
                    a[i][j]=1;
                    else if(i==2 && j== 2)
                        a[i][j]=3;
                else
                    a[i][j]=2;


                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
            }

}
return 0;
}
