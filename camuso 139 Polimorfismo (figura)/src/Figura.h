#ifndef FIGURA_H_
#define FIGURA_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Figura{
	public:
	  Figura(string colore_tratto,	string colore_fill="bianco",	int spessore_tratto=1,	 bool filled=false) :
			 colore_tratto{colore_tratto}, colore_fill{colore_fill}, spessore_tratto{spessore_tratto}, filled{filled}{ }		//costruttore
	  Figura() : Figura("nero"){}		//richiama costruttore superiore

	private:
	  string colore_tratto="";
	  string colore_fill="";
	  bool filled = false;
	  int spessore_tratto=0;
};

#endif /* FIGURA_H_ */
