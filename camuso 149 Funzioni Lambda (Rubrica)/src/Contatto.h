#ifndef CONTATTO_H_
#define CONTATTO_H_

#include <iostream>

using namespace std;

class Contatto{
	public:
	  Contatto(string nome, string indirizzo, string telefono)  : nome{nome}, indirizzo{indirizzo}, telefono{telefono} {}
	  string getNome() {	return nome;}
	  string getIndirizzo() {	return indirizzo;}
	  string getTelefono() {	return telefono;}
	private:
	  string nome="", indirizzo="", telefono="";
};

#endif /* CONTATTO_H_ */
