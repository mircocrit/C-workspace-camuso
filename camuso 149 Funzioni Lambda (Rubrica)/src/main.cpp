#include <iostream>
#include <vector>
#include "Contatto.h"
#include "Rubrica.h"

using namespace std;

int main(){
    Rubrica r{};

    vector<Contatto> trovati =
      r.cerca_per_indirizzo( [] (string indirizzo)
               {return indirizzo.find("Monti") != string::npos; });		//funzione lambda

    for (Contatto c : trovati)
      cout << c.getNome() << " - Tel. " << c.getTelefono()<< endl;
    system("pause");
    return 0;
}
