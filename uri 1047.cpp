#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,f,g,h,i;

    cin>>a>>b>>c>>d;
    if(a == c && b == d){
        f = (24-a)+c;
        g = 0;
        if(g >= 60){
            g = g - 60;
            f = f + 1;
        }
        cout<<"O JOGO DUROU "<< f <<" HORA(S) E "<< g <<" MINUTO(S) "<<endl;
    }

    if(a > c){
        f = (24-a)+c;
        g = (60 - b)+d;
        if(g >= 60){
            g = g - 60;
            //f = f + 1;
        }
        cout<<"O JOGO DUROU "<< f <<" HORA(S) E "<< g <<" MINUTO(S) "<<endl;
    }
    else if(a<c)
    {
        h = (c-a);
        i = (60 - b)+d;

        if(i >= 60){
            //h = h + 1;
            i = i - 60;
        }
        if(h==1){
            cout<<"O JOGO DUROU "<< h-1 <<" HORA(S) E "<< i <<" MINUTO(S)"<<endl;
        }
        else
        cout<<"O JOGO DUROU "<< h <<" HORA(S) E "<< i <<" MINUTO(S)"<<endl;
    }

    return 0;
}
