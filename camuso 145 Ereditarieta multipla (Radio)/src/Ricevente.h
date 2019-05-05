#ifndef RICEVENTE_H_
#define RICEVENTE_H_

#include "Debug.h"

using namespace std;

class Ricevente : public virtual Debug{
	public:
	  Ricevente(string nome_file) : Debug(nome_file){}		//chiama debug
	  ~Ricevente() override {}
	  void read() override {}
	  void write() override
	  {cout << "-- Registrato da Ricevente\n";
	   cout << "-- Usando il file " << Debug::get_file() <<endl;
	  }
	  string get_file() override {return Debug::get_file();}
};




#endif /* RICEVENTE_H_ */
