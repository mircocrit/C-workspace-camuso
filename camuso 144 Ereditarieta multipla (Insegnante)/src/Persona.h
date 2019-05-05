#ifndef PERSONA_H_
#define PERSONA_H_

#include <iostream>

using namespace std;

class Persona{
	public:
	  Persona(string nome, int eta) : nome{nome}, eta{eta} {			cout << "costruttore Persona\n";}
	  Persona() : Persona{"", 0} {}
	  ~Persona() {cout << "distruttore Persona\n";}
	  string get_nome() {return nome;}
	  int get_eta() {return eta;}
	private:
	  string nome=""; int eta=0;
};

#endif /* PERSONA_H_ */
