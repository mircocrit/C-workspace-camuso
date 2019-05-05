#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
struct Punto{
  T x;
  T y;
};

template <typename T>
struct Poligono{
   int numero_lati;
   Punto<T> vertici[100];
};

template <typename T>
double distanza_tra_punti(T a, T b={0,0} ){
  return sqrt( pow(b.x - a.x, 2) + pow(b.y - a.y, 2) );
}

template <typename T>
T punto_medio(T a, T b={0,0}){
  return T{(a.x+b.x)/2 , (a.y+b.y)/2};
}

template <typename T>
double perimetro(T p){
  double risultato=0;
  for (int i=0; i<p.numero_lati; i++)
      risultato += distanza_tra_punti(p.vertici[i], p.vertici[i+1]);
  return risultato;
}

int main(){
    Poligono<double> poli {4, { {0.2,0.7}, {0.9,1.4}, {1,1}, {1,0}, {0,0} } };
    //Poligono<double> poli2 {4, { {0,0}, {9,4}, {2,1}, {4,0}, {7,0} } };
    cout <<"Perimetro: "<< perimetro(poli) << endl;
    //cout <<"Dist fra pti: "<< distanza_tra_punti(poli,poli2) << endl;
    //cout <<"Pto medio: "<< punto_medio(poli) << endl;
    system("pause");
    return 0;
}
