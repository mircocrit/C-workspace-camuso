#ifndef QUADRATO_H_
#define QUADRATO_H_

#include "Figura.h"
#include "Rettangolo.h"

class Quadrato : public Rettangolo{
	public:
	  Quadrato() : Rettangolo() {}
	  Quadrato(int lato) : Rettangolo(lato, lato){ }	//nella classe figlia si puo' ridefinire un metodo gia' presente nella classe madre
	  double perimetro(){
		return lato1 * 4; //migliori prestazioni! (lato1+lato2)*2;
	  }
	private:
};

#endif /* QUADRATO_H_ */
