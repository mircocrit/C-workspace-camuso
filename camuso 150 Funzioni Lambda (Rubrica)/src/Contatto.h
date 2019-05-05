#ifndef CONTATTO_H_
#define CONTATTO_H_

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Contatto{
	public:
	  Contatto(string cognome, string indirizzo, string telefono) : cognome{cognome}, indirizzo{indirizzo}, telefono{telefono}{}
	  string getCognome() {		return cognome;}
	  string getIndirizzo() {	return indirizzo;}
	  string getTelefono() {	return telefono;}
	private:
	  string cognome="", indirizzo="", telefono="";
};

#endif /* CONTATTO_H_ */
