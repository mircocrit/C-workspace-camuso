#include "lista.h"

Lista::Lista(std::initializer_list<Elemento_lista *> gruppo_nodi){
  for(int i=0; i<gruppo_nodi.size(); i++){
     ins_testa( gruppo_nodi.begin()[i] );
  }
}

Lista::Lista(std::initializer_list<std::string> elenco){
  for(int i=0; i<elenco.size(); i++){
     ins_testa( elenco.begin()[i] );
  }
}

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

std::string& Lista::operator[] (const int index){
  if(index<0 || index>n_ele-1) {
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
