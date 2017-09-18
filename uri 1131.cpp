#include<iostream>
using namespace std;

int main()
{
    int ch, in, gr, drw=0, wi=0, wg=0, total=0;

    while(1){
        cin>>in>>gr;
        if(in>gr)
            wi++;
        if(in<gr)
            wg++;
        if(in==gr)
            drw++;

        total++;

        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>ch;
        if(ch==1)
            continue;
        if(ch==2)
            break;
    }
    cout<<total<<" grenais"<<endl;
    cout<<"Inter:"<<wi<<endl;
    cout<<"Gremio:"<<wg<<endl;
    cout<<"Empates:"<<drw<<endl;

    if(wi>wg)
        cout<<"Inter venceu mais"<<endl;
    if(wi<wg)
        cout<<"Gremio venceu mais"<<endl;
    if(wi==wg)
        cout<<"Nao houve vencedor"<<endl;

    return 0;
}
