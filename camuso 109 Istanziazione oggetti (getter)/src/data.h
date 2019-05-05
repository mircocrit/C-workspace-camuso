#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include <string>

class Data{
  public:							//INTERFACE / INTERFACCIA
    Data(int gg, int mm, int aa);
    Data();
    std::string formato_breve();	//getter

    int get_mese() {return mese;} ;	//getter
    bool date_uguali(Data d);
   private:							//IMPLEMENTATION / IMPLEMENTAZIONE
    int giorno = 1, mese=1, anno=1970;
};


#endif // DATA_H_INCLUDED

//ERRORE SE tutte le seguenti sono vere: non c'e' il costruttore vuoto e c'e almeno un altro costruttore con almeno un parametro con valore di default
