#ifndef RUBRICA_H_
#define RUBRICA_H_

#include <iostream>
#include <vector>
#include "Contatto.h"

class Rubrica{
	public:
	  Rubrica() {}
	  template <typename T>
	  vector<Contatto> cerca_per_indirizzo(T criterio){
		 vector<Contatto> trovati;
		 for ( Contatto c : contatti)
		   if ( criterio(c.getIndirizzo()) )
			 trovati.push_back(c);
		 return trovati;
	  }
	private:
	  vector<Contatto> contatti {
		{"Rossi", "Via Monti 23", "111111"},{"Verdi", "Via Monti 23", "222222"},{"Rossi", "Via Fiumi 7a", "333333"} };
};

#endif /* RUBRICA_H_ */
