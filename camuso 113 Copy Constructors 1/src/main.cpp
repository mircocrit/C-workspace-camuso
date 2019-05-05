#include <iostream>
#include "data.h"
#include <string>

using namespace std;

void riceveData(Data d){	cout << "Data ricevuta: " << d.formato_breve() << endl;}
Data restituisceData(){		return Data {10,11,2010};}

int main(){
  Data d1 {30,11,2016};
  Data d2 {d1};		//casi in cui viene invocato il COSTRUTTORE COPIA (COPY CONSTRUCTOR),in questo caso quello di default mancandone uno esplicito scritto da noi)
  Data d3 = d2;
  riceveData(d1);
  Data feste1[3] = { Data{1,5,2016} , Data{15,8,2016}, Data{25,12,2016} };
  Data feste2[3] = { {1,5,2016} , {15,8,2016}, {25,12,2016} };
  cout << "Data restituita: " << restituisceData().formato_breve() << endl;
  system("pause");
  return 0;}







