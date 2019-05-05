#include <iostream>
#include <vector>

#include "lista.h"

using namespace std;

int main(){
  vector<int> v {23, 56, rand(), 45, -123};
  v[3] = 100;
  for (int x : v )
	  cout << x << endl;
  Lista lista_amici {new Elemento_lista{"Giorgio"},new Elemento_lista{"Sandro"},new Elemento_lista{"Mauro"}};
  Lista lista_amici2 {"Caruberto", "Ermenegildo", "Altobrando"};

  lista_amici.stampa();
  lista_amici2.stampa();
  try{
     cout << endl << "Accesso indicizzato all'elemento [1]: " << lista_amici[1] << endl;
  }
  catch (runtime_error e){
    cout << "Errore: " << e.what() << endl;
  }
  system("pause");
  return 0;
}
