#include<stdio.h>
int main()
{
    char a1[10],a2[10],a3[10];

    scanf("%s",a1);
    scanf("%s",a2);
    scanf("%s",a3);

    if(strcmp(a1,"vertebrado")==0){
        if(strcmp(a2,"ave")==0){
            if(strcmp(a3,"carnivoro")==0){
                printf("aguia");
            }
            else if(strcmp(a3,"onivoro")==0){
              printf("pomba");
            }
        }
    }
    return 0;
}
