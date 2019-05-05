#ifndef TRIANGOLO_H_
#define TRIANGOLO_H_

#include "Figura.h"

class Triangolo : public Figura{
	public:
	  Triangolo() : Figura(), l1{1}, l2{1}, l3{1}{ }
	  Triangolo(int _l1, int _l2, int _l3): Figura("rosso", "", 1, false),  l1{_l1}, l2{_l2}, l3{_l3}{
		v = new double[1000000];
	  }
	  ~Triangolo() {	std::cout << "Distruttore classe figlia DELETE\n"; delete[]v;}
	  double perimetro() override{
		std::cout << "Triangolo\n";
		Figura::perimetro();
		return l1+l2+l3;
	  }
	private:
	  int l1=0, l2=0, l3=0;
	  double *v;
};

#endif /* TRIANGOLO_H_ */
