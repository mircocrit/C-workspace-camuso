#ifndef ELENCO_ORDINATO_H_
#define ELENCO_ORDINATO_H_

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

template <typename T,int _MAX, typename TIPO_SUPPORTO>

class elenco_ordinato{
	public:
	  elenco_ordinato(){if (_MAX>10000);{}}

	  bool aggiungi(T nuovo){
		if (inseriti==MAX)		return false;
		else{
		  int posizione_inserimento=0;
		  while( posizione_inserimento < inseriti && nuovo>valori[posizione_inserimento] )
			  posizione_inserimento++;
		  for(int i=inseriti; i>posizione_inserimento; i--)
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

	  template<typename T2>
	  class supporto {
	  	  public:
	  	  private:
		  T2 elenco[MAX];
	  };
	  supporto<TIPO_SUPPORTO> sup;
};

#endif /* ELENCO_ORDINATO_H_ */
