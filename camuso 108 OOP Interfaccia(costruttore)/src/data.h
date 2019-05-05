#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include <iostream>
#include <string>

class Data{
  //INTERFACE / INTERFACCIA
  public:
    Data(int gg, int mm, int aa);
    std::string formato_breve();

   //IMPLEMENTATION / IMPLEMENTAZIONE
   private:
    int giorno = 1, mese=1, anno=1970;
};


#endif // DATA_H_INCLUDED
