#ifndef RETTANGOLO_H_
#define RETTANGOLO_H_

#include "Figura.h"

class Rettangolo : public Figura{
	public:
	  Rettangolo() : Rettangolo(1,1) {}
	  Rettangolo(int lato1, int lato2) :Figura("nero"), lato1{lato1}, lato2{lato2}{ }
	  double perimetro() override{
		std::cout << "Rettangolo\n";
		return (lato1+lato2)*2;
	  }
	protected:
	  int lato1=0, lato2=0;
};

#endif /* RETTANGOLO_H_ */
