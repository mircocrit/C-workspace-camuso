#ifndef QUADRATO_H_
#define QUADRATO_H_

#include "Figura.h"
#include "Rettangolo.h"

class Quadrato : public Rettangolo{
	public:
	  Quadrato() : Rettangolo() {}
	  Quadrato(int lato) : Rettangolo(lato, lato) { }
	  double perimetro() override{
		std::cout << "Quadrato\n";
		return lato1 * 4;
	  }
	private:
};

#endif /* QUADRATO_H_ */
