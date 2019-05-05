#include <iostream>
#include <cmath>
#include "Cliente.h"
#include "Confronto.h"

using namespace std;

int main(){
  double vd[] {1.5, 4.5, 0.6, 2.78};
  sort<double>(vd, 4);
  stampa(vd, 4);
  cout << "----------------------------\n\n";

  string vs[] {"canguro", "zuzzerellone", "abaco", "amaca", "bullone"};
  sort<string>(vs, 5);
  stampa(vs, 5);

  Cliente vc[] {Cliente{54000}, Cliente{26000}, Cliente{34000} };
  //sort<Cliente>(vc, 3);
  stampa(vc, 3);
  cout << "----------------------------\n\n";

  //sort2<Cliente, Confronto>(vc, 3);
  system("pause");
  return 0;
}
