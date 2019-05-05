#include <iostream>
#include <cmath>

using namespace std;

struct Punto{
  int x;
  int y;
};

struct Poligono{		//(0,1)   (1,1)
   int numero_lati;
   int x[100];			//(0,0)   (0,1)
   int y[100];
};

double distanza_tra_punti(Punto a, Punto b={0,0} ){
  return sqrt( pow(b.x - a.x, 2) + pow(b.y - a.y, 2) );
}

Punto punto_medio(Punto a, Punto b){
  return Punto{(a.x+b.x)/2 , (a.y+b.y)/2};
}

double perimetro(Poligono p){
  double risultato=0;
  for (int i=0; i<p.numero_lati; i++){
     Punto a {p.x[i], p.y[i]}, 		b { p.x[i+1], p.y[i+1]};
     risultato+=distanza_tra_punti(a,b);
  }
  return risultato;
}

int main(){
    Punto p1{3,4}, p2{7,8};
    cout << distanza_tra_punti(p1) << endl;
    Punto medio = punto_medio(p1, p2);
    cout << "Punto medio: (" << medio.x <<" , "<<medio.y<<")\n";

    Poligono quadrato;  //{4, {0,0,1,1,0}, {0,1,1,0,0} };

    cin >> quadrato.numero_lati;
    for(int i=0; i<quadrato.numero_lati; i++){
      cin >> quadrato.x[i] >> quadrato.y[i];
    }

    quadrato.x[ quadrato.numero_lati ] = quadrato.x[0];
    quadrato.y[ quadrato.numero_lati ] = quadrato.y[0];

    cout << perimetro(quadrato) << endl;
    system("pause");
    return 0;
}
