#ifndef INSEGNANTE_H_
#define INSEGNANTE_H_

#include <iostream>
#include <string>
#include "Persona.h"
#include "Impiegato.h"

class Insegnante : public Persona, public Impiegato{			//ereditarieta multipla
	public:
	  Insegnante() : Insegnante("",0,"",0,"") {}
	  Insegnante(string nome, int eta,	 string datore_lavoro, int stipendio,	 string ordine_scuola) :
		  Persona(nome, eta), Impiegato(datore_lavoro, stipendio), ordine_scuola{ordine_scuola}
	  	  {cout << "costruttore Insegnante\n";}
	  ~Insegnante(){cout << "distruttore Insegnante\n";}
	  //AVRA' 4 GETTER
	private:
	  string ordine_scuola="superiori";
};

#endif /* INSEGNANTE_H_ */
