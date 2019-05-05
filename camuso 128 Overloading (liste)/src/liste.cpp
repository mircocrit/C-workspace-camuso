#include "liste.h"

void Lista::ins_testa(Elemento_lista* nuovo){
  nuovo->next=head;
  head=nuovo;
  n_ele++;
}

void Lista::stampa(){
  Elemento_lista *scorri = head;
  while (scorri != nullptr){
    std::cout << scorri->dati << "\n";
    scorri = scorri -> next;
  }
}

std::string& Lista::operator[] (const int index){		//overloading operatore []
  if(index<0 || index>n_ele-1) {		//fuori intervallo!
    throw std::runtime_error("Indice non valido");
  }
  else{
    int pos=0;
    Elemento_lista *scorri=head;
    while(pos<index){
      scorri = scorri->next;
      pos++;
    }
    return scorri->dati;
  }
}
