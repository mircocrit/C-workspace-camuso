#include <iostream>
#include "data.h"
#include <string>

using namespace std;

void riceveData(Data d){ cout << "Data ricevuta: " << d.formato_breve() << endl; }
Data restituisceData(){return Data {10,11,2010};}

int main(){
  Data d1 {30,11,2016};
  Data d2 {d1};
  Data d3 = d2;
  d1.set_mese(1);
  d2.set_mese(2);
  d3.set_mese(3);
  cout << "d1: " << d1.formato_breve() << endl;
  cout << "d2: " << d2.formato_breve() << endl;
  cout << "d3: " << d3.formato_breve() << endl;
  //riceveData(d1);
  //Data feste1[3] = { Data{1,5,2016} , Data{15,8,2016}, Data{25,12,2016} };
  //Data feste2[3] = { {1,5,2016} , {15,8,2016}, {25,12,2016} };
  //cout << "Data restituita: " << restituisceData().formato_breve() << endl;
  system("pause");
  return 0;
}
