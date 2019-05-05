#ifndef CERCHIO_H_
#define CERCHIO_H_

#include "Figura.h"

class Cerchio : public Figura{
	public:
	  Cerchio(int raggio) :Figura("nero"), raggio{raggio} { }		//richiamo a costruttore di figura
	  Cerchio() : Cerchio(1) {}
	  double perimetro(){	return 2*3.14*raggio; }

	protected:
	  int raggio=0;
};

#endif /* CERCHIO_H_ */
