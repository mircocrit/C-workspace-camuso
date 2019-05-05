#ifndef ELENCO_ORDINATO_H_
#define ELENCO_ORDINATO_H_

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>


using namespace std;

template <typename T,int _MAX>
class elenco_ordinato{
	public:
	  elenco_ordinato(){}

	  bool aggiungi(T nuovo){
		if (inseriti==MAX)		return false;
		else{
		  int posizione_inserimento=0;	 //inserisco mantenendo l'ordine
		  while( posizione_inserimento < inseriti &&	nuovo>valori[posizione_inserimento] )
			  posizione_inserimento++;
		  for(int i=inseriti; i>posizione_inserimento; i--)		//shift a destra per far posto al nuovo
			valori[i] = valori[i-1];
		  valori[posizione_inserimento] = nuovo;
		  inseriti++;
		  return true;
		}
	  }
	  void stampa(){
		cout << "Inizio ------\n";
		for (int i=0; i<inseriti; i++)
		   cout << valori[i] << endl;
		cout << "Fine ------\n";
	  }

	private:
	  const static int MAX=_MAX;
	  int inseriti=0;
	  T valori[MAX];
};

#endif /* ELENCO_ORDINATO_H_ */
