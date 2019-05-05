#include <iostream>
#include "Scontrino.h"

using namespace std;

int main(){
  t_scontrino *scontrino = new t_scontrino{"02-06-2016", 123,"CassaL1", nullptr};
  for (int i=0; i<10; i++){
	t_riga_scontrino *nuovo = new t_riga_scontrino{i,10*i,100.0*i};
    ins_coda(scontrino->head, nuovo);
  }
  stampa_righe_scontrino(scontrino->head);
  system("pause");
  return 0;
}
