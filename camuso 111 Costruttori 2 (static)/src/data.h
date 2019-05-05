#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include <string>
#include <ctime>

class Data{
  public:							//INTERFACE / INTERFACCIA
    Data();			//costruttori
    Data(int gg, int mm, int aa);
    Data(int gg, int mm);
    Data(int gg);
    Data(const std::string d);
    std::string formato_breve();			//osservatore
    int get_mese() {return mese;} ;			//getter
    static tm* data_corrente();
    bool valida(int gg, int mm, int aa);

   private:						//IMPLEMENTATION / IMPLEMENTAZIONE
    int giorno = 1, mese=1, anno=1970;
    static tm* oggi;
};

#endif // DATA_H_INCLUDED
