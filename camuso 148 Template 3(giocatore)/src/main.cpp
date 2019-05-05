#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include "elenco_ordinato.h"
#include "Giocatore.h"

using namespace std;


int main(){
    elenco_ordinato<int, 1000, long> interi{};
    interi.aggiungi(40);
    interi.aggiungi(5);
    interi.aggiungi(38);
    interi.aggiungi(25);
    interi.stampa(); cout << "\n\n\n";

    elenco_ordinato<string, 200, string> stringhe{};
    stringhe.aggiungi("Ciao");
    stringhe.aggiungi("prova");
    stringhe.aggiungi("di");
    stringhe.aggiungi("ordinamento");
    stringhe.stampa(); cout << "\n\n\n";

    elenco_ordinato<Giocatore, 100, Giocatore> giocatori{};
    for(int i=0; i<10; i++)
      giocatori.aggiungi( Giocatore{} );
    giocatori.stampa();
    system("pause");
    return 0;
}
