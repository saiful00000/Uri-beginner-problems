#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
        unsigned long int number;
    char hx[9];

    scanf("%lu",&number);

    sprintf(hx,"%lX",number);

    printf("%s\n",hx);

    return 0;
}
