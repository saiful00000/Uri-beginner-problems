#include<stdio.h>

int main()
{
    long double number;
    char s[120];

    scanf("%LE", &number);
    sprintf(s,"%LE",number);
    if(s[0] != '-')
        printf("+");
    printf("%.4LE\n",number);

    return 0;
}
