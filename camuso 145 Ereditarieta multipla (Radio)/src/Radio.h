#ifndef RADIO_H_
#define RADIO_H_

#include <iostream>
#include <string>
#include "Trasmittente.h"
#include "Ricevente.h"
#include "Debug.h"

using namespace std;

class Radio : public Trasmittente, public Ricevente {
	public:
	  Radio(string nome_file) : Debug(nome_file),Trasmittente("File_del_trasmittente.txt"), Ricevente("File del ricevente.txt"){ }	//il costuttore di una radio chiama trasmittente ricevente e debug
	  void read() override {}		//overrides debug
	  void write() override{
		Trasmittente::write();	Ricevente::write();		//chiama i metodi write di trasmitt e ricevente
		cout << "Registrato da Radio\n";
	  }
	  string get_file() override {return Ricevente::get_file();}
};


#endif /* RADIO_H_ */
