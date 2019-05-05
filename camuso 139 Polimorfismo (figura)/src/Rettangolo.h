#ifndef RETTANGOLO_H_
#define RETTANGOLO_H_

#include "Figura.h"

class Rettangolo : public Figura{
	public:
	  Rettangolo(int lato1, int lato2) :	Figura("nero"), lato1{lato1}, lato2{lato2} { }	//assegno a mano i lati e fornisco il colore al costruttore di figura
	  Rettangolo() : Rettangolo(1,1) {}		//richiamo il costruttore rettangolo esplicito
	  double perimetro(){	return (lato1+lato2)*2;}

	protected:			//Per ereditarieta
	  int lato1=0, lato2=0;
};

#endif /* RETTANGOLO_H_ */
