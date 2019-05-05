#ifndef SCONTRINO_H_
#define SCONTRINO_H_

#include <iostream>

using namespace std;
const int MAX=1000;

struct t_riga_scontrino;

struct t_scontrino{
  string data;
  int codice_punto_vendita;
  string codice_cassa;
  t_riga_scontrino *head; //indirizzo primo nodo lista righe scontrino
};

struct t_riga_scontrino{
  int codice_prodotto;
  double qta;
  double prezzo;
  t_riga_scontrino *next; //indirizzo della riga successiva (o nullptr)
};

void ins_testa(t_riga_scontrino* &head, t_riga_scontrino* nuovo){
  nuovo->next = head;
  head=nuovo;
}

void ins_coda(t_riga_scontrino* &head, t_riga_scontrino* nuovo){
  t_riga_scontrino *cerca_fine_lista = head;
  if (head==nullptr)  //lista vuota-->uso la inserisci in testa
    ins_testa(head, nuovo);
  else {
    while (cerca_fine_lista->next != nullptr){
      cerca_fine_lista = cerca_fine_lista->next;			//ricerco la fine della lista:obiettivo: fermarsi quando cerca_fine_lista e' sull'ultimo nodo, cioe' sul nodo che ha nullptr come next
    }
    cerca_fine_lista->next = nuovo;
    nuovo->next = nullptr;
  }
}

void stampa_righe_scontrino(t_riga_scontrino* head){
  t_riga_scontrino *scorri = head;
  while (scorri != nullptr){
    cout << "--------\n";
    cout <<"Prodotto: " <<  scorri->codice_prodotto <<endl;
    cout <<"Quantita': " <<  scorri->qta << endl;
    cout <<"Prezzo: " <<  scorri->prezzo <<endl;
    scorri = scorri -> next;
  }
}


#endif /* SCONTRINO_H_ */
