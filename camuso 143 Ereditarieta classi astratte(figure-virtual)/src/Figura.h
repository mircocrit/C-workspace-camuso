#ifndef FIGURA_H_
#define FIGURA_H_

#include <string>
#include <iostream>
#include <vector>
#include <cmath>

class Figura{
	public:
		Figura() { }
		virtual double perimetro() = 0;		//tutto virtual
		virtual double area() = 0;
		virtual ~Figura() {}
	private:
};

#endif /* FIGURA_H_ */
