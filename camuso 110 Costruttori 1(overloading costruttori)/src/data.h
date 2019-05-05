#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include <string>
#include <ctime>

class Data{
  public:							//INTERFACE / INTERFACCIA
    Data();									//costruttore
    Data(int gg, int mm, int aa);			//costruttore
    Data(int gg, int mm); 					//anno == anno corrente
    Data(int gg); 							//anno e mese == quelli correnti
    void initialization(int gg, int mm, int aa); //operazioni comuni ai costruttori
    Data(const std::string d); 				//"07-09-2016"
    std::string formato_breve();			//osservatore
    int get_mese() {return mese;} ;			//osservatore (getter)
    tm* data_corrente();				//altri
    bool valida(int gg, int mm, int aa);	//controllo validita

   private:					//IMPLEMENTATION / IMPLEMENTAZIONE
    int giorno = 1, mese=1, anno=1970;
};

#endif // DATA_H_INCLUDED
