#include <iostream>
#include <vector>
#include "liste.h"

using namespace std;

int main(){
  vector<int> v = vector<int>(5);
  v[3] = 100;

  Lista lista_amici;
  lista_amici.ins_testa( "Giorgio");
  lista_amici.ins_testa( "Sandro");
  lista_amici.stampa();
  try{
     cout << endl << "Accesso indicizzato all'elemento [1]: " << lista_amici[10] << endl;
  }
  catch (runtime_error e){
    cout << "Errore: " << e.what() << endl;
  }
  system("pause");
  return 0;
}
