#ifndef IMPIEGATO_H_
#define IMPIEGATO_H_

#include <iostream>
#include <string>

using namespace std;

class Impiegato{
	public:
	  Impiegato() : Impiegato{"", 0} {}
	  Impiegato(string datore_lavoro, int stipendio) :		  datore_lavoro{datore_lavoro}, stipendio{stipendio}
	  {cout << "costruttore Impiegato\n";}
	  ~Impiegato() {cout << "costruttore Impiegato\n";}
	  string get_datore_lavoro() {return datore_lavoro;}
	  int get_stipendio() {return stipendio;}
	private:
	  string datore_lavoro="";
	  int stipendio=0;
};



#endif /* IMPIEGATO_H_ */
