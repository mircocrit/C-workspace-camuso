#include <iostream>
#include "Scontrino.h"

using namespace std;

int main(){
  t_scontrino *scontrino =new t_scontrino{"02-06-2016", 123,"CassaL1", nullptr};

  //test ricerca con lista vuota
  t_riga_scontrino *precedente=nullptr;
  t_riga_scontrino *trovato = cerca_lista(scontrino->head, precedente, 18 );

  if (trovato==nullptr)
    cout << "Non trovato in lista vuota\n";

  //test ricerca con un solo nodo in lista
  t_riga_scontrino *nuovo = new t_riga_scontrino{18,10,100};
  ins_coda(scontrino->head, nuovo);

  precedente=nullptr;
  trovato = cerca_lista(scontrino->head, precedente, 18 );
  if (trovato==nullptr)
	  cout << "Non trovato\n";
  else{
    cout <<"codice 18 trovato ";
    if (precedente!=nullptr)
      cout <<"e ha altri nodi prima di lui\n";
    else
      cout << "ed e' il primo nodo della lista\n";
  }

  precedente=nullptr;
  trovato = cerca_lista(scontrino->head, precedente, 88 );
  if (trovato==nullptr)
    cout << "88 non trovato\n";
  else{
    cout <<"codice 88 trovato ";
    if (precedente!=nullptr)
      cout <<"e ha altri nodi prima di lui\n";
    else
      cout << "ed e' il primo nodo della lista\n";
  }

  for (int i=0; i<10; i++){
    t_riga_scontrino *nuovo = new t_riga_scontrino{i,10*i,100.0*i};
    ins_coda(scontrino->head, nuovo);
  }

  //stampa_righe_scontrino(scontrino->head);

  precedente=nullptr;
  trovato = cerca_lista(scontrino->head, precedente, 9 );
  if (trovato==nullptr)
    cout << "Non trovato\n";
  else{
    cout <<"codice 9 trovato (ultimo nodo della lista) ";
    if (precedente!=nullptr)
      cout <<"e ha altri nodi prima di lui\n";
    else
      cout << "ed e' il primo nodo della lista\n";
  }

  precedente=nullptr;
  trovato = cerca_lista(scontrino->head, precedente, 99 );
  if (trovato==nullptr)
    cout << "99 non trovato\n";
  else{
    cout <<"codice 99 trovato ";
    if (precedente!=nullptr)
      cout <<"e ha altri nodi prima di lui\n";
    else
      cout << "ed e' il primo nodo della lista\n";
  }

  cout << "TEST ELIMINAZIONE\n";
  stampa_righe_scontrino(scontrino->head);

  //elimino codice 18 (primo della lista)
  if ( elimina_da_lista(scontrino->head, 18) )
    cout <<"Nodo con codice 18 eliminato\n";
  stampa_righe_scontrino(scontrino->head);

  //elimino codice 9 (ultimo della lista)
  if ( elimina_da_lista(scontrino->head, 9) )
    cout <<"Nodo con codice 9 eliminato\n";
  stampa_righe_scontrino(scontrino->head);

  //elimino codice 4 (nodo intermedio)
  if ( elimina_da_lista(scontrino->head, 4) )
    cout <<"Nodo con codice 4 eliminato\n";
  stampa_righe_scontrino(scontrino->head);

  cout << "Distruzione lista\n";
  //distruggo tutta la lista
  distruggi_lista(scontrino->head);
  stampa_righe_scontrino(scontrino->head);
  system("pause");
  return 0;
}
