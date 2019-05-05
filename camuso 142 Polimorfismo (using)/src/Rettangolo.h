#ifndef RETTANGOLO_H_
#define RETTANGOLO_H_

#include "Figura.h"

class Rettangolo : public Figura{
	public:
	  Rettangolo() : Rettangolo(1,1) {}
	  Rettangolo(int lato1, int lato2) :Figura("nero"), lato1{lato1}, lato2{lato2} { }
	  double perimetro() override{		//final -> quadrato non potrebbe a sua volta fare override
		std::cout << "Rettangolo\n";
		return (lato1+lato2)*2;
	  }
	protected:
	  int lato1=0, lato2=0;
};

class Rettangolo_aureo : public Rettangolo{		  using Rettangolo::Rettangolo;};

#endif /* RETTANGOLO_H_ */
