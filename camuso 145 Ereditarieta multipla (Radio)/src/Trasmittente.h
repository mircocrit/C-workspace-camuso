#ifndef TRASMITTENTE_H_
#define TRASMITTENTE_H_

#include "Debug.h"

using namespace std;

class Trasmittente : public virtual Debug {		//uguale a ricevente
	public:
	  Trasmittente(string nome_file) : Debug(nome_file){}
	  ~Trasmittente() override {}
	  void read() override {}
	  void write() override{
	   cout << "-- Registrato da Trasmittente\n";
	   cout << "-- Usando il file " << Debug::get_file() <<endl;
	  }
	  string get_file() override {return Debug::get_file();}
};

#endif /* TRASMITTENTE_H_ */
