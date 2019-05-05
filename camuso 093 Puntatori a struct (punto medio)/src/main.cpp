#include <iostream>

using namespace std;

struct t_punto3D{
    long double x, y, z;
};

t_punto3D *punto_medio_3D(const t_punto3D *a, const t_punto3D *b){
   //a->x = 1000; VIETATO! oggetto const ... invece dell'orribile ( (*a).x + (*b).x ) /2
   long double x = ( a->x + b->x ) / 2;
   long double y = ( b->y + b->y ) / 2;
   long double z = ( a->z + b->z ) / 2;
   return new t_punto3D {x,y,z};
}

int main(){
    cout << sizeof(t_punto3D) << endl;		//stampa 1
    cout << sizeof(t_punto3D *) << endl;	////stampa 2
    t_punto3D *a = new t_punto3D {-4,2,8},		 *b = new t_punto3D {6,12,56};
    t_punto3D *medio = punto_medio_3D(a,b);

    cout << "x: " << medio->x  << " y:" << medio->y << " z:" << medio->z << endl;
    delete a; delete b; delete medio;
    system("pause");
    return 0;
}
