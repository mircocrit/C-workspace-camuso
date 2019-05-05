#ifndef PUNTO3D_H_
#define PUNTO3D_H_

#include <iostream>
#include <string>
using namespace std;

class punto3D{
  public:
    punto3D(double x, double y, double z){this->x = x;	this->y = y;	this->z = z; }
    punto3D &getX(){		cout << x <<endl;	return *this; }
    punto3D *getXp(){cout << x <<endl;	return this; }
  private:
    double x=0, y=0, z=0;
};

#endif /* PUNTO3D_H_ */
