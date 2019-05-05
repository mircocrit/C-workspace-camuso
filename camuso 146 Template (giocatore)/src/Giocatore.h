#ifndef GIOCATORE_H_
#define GIOCATORE_H_

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

class Giocatore{
	public:
	  friend ostream& operator<< (ostream& stream, const Giocatore&);

	  //genera valori casuali per simulare la 'carriera' del giocatore
	  Giocatore() :
		  nick{"nick" + to_string(rand()%100000) },	kd{rand()%3 + (rand()%1000)/1000},  numero_partite{100+ rand()%500},  ELO{500+rand()%2000}	{}
	  double livello() const{	return kd + numero_partite + ELO;}		//formula casuale e senza alcun senso ...
	  bool operator>(Giocatore altro){	return livello()>altro.livello();}

	private:
	  string nick="";
	  double kd = 0; //rapporto kill death
	  int numero_partite = 0;
	  int ELO = 0;
};

ostream& operator<< (ostream& stream, const Giocatore& g){
  stream << setw(20) << ("Giocatore: " + g.nick) <<  " | "<< "Livello: " << g.livello();
  return stream;
}

#endif /* GIOCATORE_H_ */
