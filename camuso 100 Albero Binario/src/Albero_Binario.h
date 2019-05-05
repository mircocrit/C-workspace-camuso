#ifndef ALBERO_BINARIO_H_
#define ALBERO_BINARIO_H_

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

struct t_nodo{
  int info;
  t_nodo *sx;
  double costo_sx;

  t_nodo *dx;
  double costo_dx;
};

t_nodo *crea_albero_bilanciato(int quanti_nodi){
  if(quanti_nodi==0)  //base della ricorsione ...
    return nullptr;
  else{
    t_nodo *nuovo = new t_nodo;			 //crea il nodo a questo livello
    nuovo->info = rand()%100;

    int quanti_a_sx = quanti_nodi/2;
    int quanti_a_dx = quanti_nodi - quanti_a_sx - 1;

    nuovo->sx = crea_albero_bilanciato(quanti_a_sx);  //passo ricorsivo
    nuovo->dx = crea_albero_bilanciato(quanti_a_dx);  //passo ricorsivo

    return nuovo;
  }
}

void stampa_albero_binario_pre_order(t_nodo *p){
  if (p!=nullptr){
     cout << p->info << endl;
     stampa_albero_binario_pre_order(p->sx);
     stampa_albero_binario_pre_order(p->dx);
  }
}

void stampa_albero_binario_in_order(t_nodo *p){
  if (p!=nullptr){
     stampa_albero_binario_in_order(p->sx);
     cout << p->info << endl;
     stampa_albero_binario_in_order(p->dx);
  }
}


void stampa_albero_binario_post_order(t_nodo *p){
  if (p!=nullptr){
     stampa_albero_binario_post_order(p->sx);
     stampa_albero_binario_post_order(p->dx);
     cout << p->info << endl;
  }
}

// 5! = 5 * 4 * 3 * 2 * 1
// x alla y con x e y interi > 0

#endif /* ALBERO_BINARIO_H_ */
