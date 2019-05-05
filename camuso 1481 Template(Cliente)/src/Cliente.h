#ifndef CLIENTE_H_
#define CLIENTE_H_
#include <iostream>
#include <cmath>

using namespace std;

class Cliente{
	public:
	  friend ostream& operator <<(ostream&, const Cliente&);
	  Cliente(double fatturato) : fatturato{fatturato} {}
	  double get_fatturato() const {return fatturato; }
	  bool operator< (const Cliente& altro) const{		return fatturato < altro.fatturato; }
	private:
	  double fatturato=0;
};

ostream& operator <<(ostream& stream, const Cliente& c){
  stream << c.fatturato;
  return stream;
}

#endif /* CLIENTE_H_ */
