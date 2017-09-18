#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n, serv, block, attack, serv1, block1, attack1;
    double sum_serv=0.00, sum_block=0.00, sum_attack=0.00, sum_serv1=0.00, sum_block1=0.00, sum_attack1=0.00;
    double ans_serv, ans_block, ans_attack;
    char name[10000];
    cin>>n;
    while(n--)
    {
        cin>>name;
        cin>>serv>>block>>attack;
        cin>>serv1>>block1>>attack1;

        sum_serv += serv;
        sum_block += block;
        sum_attack +=attack;

        sum_serv1 += serv1;
        sum_block1 += block1;
        sum_attack1 += attack1;
    }
    ans_serv = (sum_serv1/sum_serv)*100.00;
    ans_block = (sum_block1/sum_block)*100.00;
    ans_attack = (sum_attack1/sum_attack)*100.00;

    printf("Pontos de Saque: %.2lf %%.\n",ans_serv);
    printf("Pontos de Bloqueio: %.2lf %%.\n",ans_block);
    printf("Pontos de Ataque: %.2lf %%.\n",ans_attack);

    return 0;
}




