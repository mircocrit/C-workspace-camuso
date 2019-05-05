#ifndef FIGURA_H_
#define FIGURA_H_

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Figura{
	public:
	  Figura(string colore_tratto,string colore_fill="bianco",int spessore_tratto=1,bool filled=false) :
			 colore_tratto{colore_tratto},  colore_fill{colore_fill},  spessore_tratto{spessore_tratto},  filled{filled}  { }
	  Figura() : Figura("nero") {}
	  virtual double perimetro() {return 10;}		//aggiungiamo un placeholder virtual perimetro

	private:
	  string colore_tratto="";
	  string colore_fill="";
	  bool filled = false;
	  int spessore_tratto=0;
};
#endif /* FIGURA_H_ */
