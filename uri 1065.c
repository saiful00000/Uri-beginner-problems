#include <stdio.h>

int main() {

   int i,j, count=0;

   for(i=0; i<5; i++){
       scanf("%d",&j);

       if(j%2 == 0)
       {
         count = count +1;
       }

   }
    printf("%d valores pares\n",count);

    return 0;
}
