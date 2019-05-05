#ifndef RUBRICA_H_
#define RUBRICA_H_

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Contatto.h"

using namespace std;

class Rubrica{
	public:
	  Rubrica() {}
	  template <typename T>
	  vector<Contatto> cerca_per_indirizzo(T criterio) {
		 vector<Contatto> trovati;
		 for (Contatto c : contatti)
		   if ( criterio(c.getIndirizzo()) )
			 trovati.push_back(c);
		 return trovati;
	  }

	  template <typename T>
	  vector<Contatto> cerca_per_cognome(T funzione_lambda){
		 vector<Contatto> trovati;
		 for (Contatto c : contatti)
		   if ( funzione_lambda( c.getCognome(), c.getTelefono()) )
			 trovati.push_back(c);
		 return trovati;
	  }

	private:
	  vector<Contatto> contatti {
		{"Rossi", "Via Monti 23", "111111"},{"Verdi", "Via Monti 23", "22222"},{"Rossi", "Via Fiumi 7a", "33333"} };
};

#endif /* RUBRICA_H_ */
