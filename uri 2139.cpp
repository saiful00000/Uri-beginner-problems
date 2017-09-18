#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int m, n, day_per_month[]= {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while(scanf("%d%d",&m,&n) != EOF)
    {
        int tot_days = 0;

        if(m==12 && n == 25){
            cout<<"E natal!"<<endl;
            continue;
        }
        else if(m == 12 && n >15){
            cout<<"Ja passou!"<<endl;
            continue;
        }



        else if(m == 12){
            if(n == 24){
                cout<<"E vespera de natal!"<<endl;
                continue;
            }
               tot_days = 25-n;
        }
        else if(m == 12 && n >15)
            cout<<"Ja passou!"<<endl;
        else
        {
            tot_days = 25-n;

            while(m!=12){
                tot_days += day_per_month[m++];
            }
        }
        cout << "Faltam " << tot_days << " dias para o natal!"<<endl;
    }
    return 0;
}
