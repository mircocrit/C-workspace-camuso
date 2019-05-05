#ifndef DATAING_INCLUDED
#define DATAING_INCLUDED
#include "Data.h"
#include <string>
#include <ctime>
#include <iostream>
#include <memory>

class DataING : protected Data{ //derivata, sotto classe, discendente, figlia
	public:
	  DataING() : Data(){}
	  DataING(int mese, int giorno, int anno) : Data(giorno, mese, anno){ 	Data d{};}
	  std::string formato_breve() const;
	private:
};


class test : public DataING{
  test(){}
  std::string f(){
    Data d{};
    std::string s = d.formato_breve();
    return "";
  }
};

std::string DataING::formato_breve() const{
  return std::to_string( mese ) + "/" + std::to_string( giorno ) + "/" +  std::to_string( anno );}

#endif // DATAING_INCLUDED
