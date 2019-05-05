#ifndef CERCHIO_H_
#define CERCHIO_H_

#include "Figura.h"

class Cerchio : public Figura{
	public:
	  Cerchio() : Cerchio(1) {}
	  Cerchio(int raggio) :Figura("nero"), raggio{raggio}{ }
	  double perimetro() override{
		std::cout << "Cerchio\n";
		return 2*3.14*raggio;
	  }
	protected:
	  int raggio=0;
};

#endif /* CERCHIO_H_ */
