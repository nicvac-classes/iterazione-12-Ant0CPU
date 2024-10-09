#include <iostream>
using namespace std;

int main() {
    int N;
    float costo, risparmiI, risparmitot, risparmi, mancante, risparmiR;

    //inizializzazione variabili
    N=0;

    cout<<"Inseirire il costo della moto"<<endl;
    cin>>costo;

    cout<<"Inserire il numero di risparmi iniziali"<<endl;
    cin>>risparmiI;

    risparmitot=risparmiI;

    while (risparmitot<costo)
    {
        cout<<"Inserire importo"<<endl;
        cin>>risparmi;

        risparmitot=risparmitot+risparmi;

        if(risparmitot>costo)
        {
            mancante=0;
        }
        else
        {
            mancante=abs(costo-risparmitot);
        }

        cout<<"Mancano " <<mancante<< "€"<<endl;
        N=N+1;
    }

    cout<<"Sono stati risparimiati "<<risparmitot<< "€" << " per "<<N<<" volte"<<endl;

    risparmiR=abs(costo-risparmitot);
    cout<<"Risparmi rimanenti " <<risparmiR<< "€"<<endl;
}