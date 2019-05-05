#ifndef FIGURA_H_
#define FIGURA_H_

#include <string>
#include <iostream>
#include <vector>

class Figura{
	public:
	  Figura(std::string colore_tratto,  std::string colore_fill="bianco",  int spessore_tratto=1,  bool filled=false) :
			 colore_tratto{colore_tratto},  colore_fill{colore_fill},  spessore_tratto{spessore_tratto},  filled{filled} { }
	  Figura() : Figura("nero") {}
	  virtual double perimetro() {
		  std::cout<< "virtual...\n";
		  return 10;	}
	private:
	  std::string colore_tratto="";
	  std::string colore_fill="";
	  bool filled = false;
	  int spessore_tratto=0;
};

#endif /* FIGURA_H_ */
