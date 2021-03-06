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
  if (head==nullptr)  //lista vuota
    ins_testa(head, nuovo);
  else{
    while (cerca_fine_lista->next != nullptr)
      cerca_fine_lista = cerca_fine_lista->next;
    cerca_fine_lista->next = nuovo;
    nuovo->next = nullptr;
  }
}

t_riga_scontrino *cerca_lista(t_riga_scontrino* head,t_riga_scontrino* &precedente,int codice_prodotto_cercato ){
  precedente = nullptr;
  t_riga_scontrino *corrente = head;
  while(corrente!=nullptr && corrente->codice_prodotto != codice_prodotto_cercato){
	  precedente = corrente;
	  corrente = corrente->next;
  }
  return corrente; //se lista vuota o non trovato sara' nullptr
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
