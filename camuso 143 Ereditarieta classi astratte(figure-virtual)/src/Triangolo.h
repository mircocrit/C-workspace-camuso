#ifndef TRIANGOLO_H_
#define TRIANGOLO_H_

#include "Figura.h"

class Triangolo : public Figura{
	public:
	  Triangolo() : Figura(), l1{1}, l2{1}, l3{1}{ }
	  Triangolo(int _l1, int _l2, int _l3): Figura() ,  l1{_l1}, l2{_l2}, l3{_l3}{  }

	  double perimetro() override{		return l1+l2+l3;}
	  double area() override{
		double sp = (l1+l2+l3) / 2; 	//formula di erone	//semiperimetro
		return sqrt(sp * (sp-l1) * (sp-l2) * (sp-l3) );
	  }
	  ~Triangolo() {}
	private:
	  double l1=0, l2=0, l3=0;
};

#endif /* TRIANGOLO_H_ */
