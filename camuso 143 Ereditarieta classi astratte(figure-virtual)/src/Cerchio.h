#ifndef CERCHIO_H_
#define CERCHIO_H_

#include "Figura.h"

class Cerchio : public Figura{
	public:
	  Cerchio() : Cerchio(1) {}
	  Cerchio(int raggio) :Figura(), raggio{raggio} { }

	  double perimetro() override{	return 2*3.14*raggio; }
	  double area() override {	return 3.14*raggio*raggio;	}
	private:
	  double raggio=0;
};

#endif /* CERCHIO_H_ */
