#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include <string>
#include <ctime>

class Data{
  public:
    Data();
    Data(int gg, int mm, int aa);
    Data(int gg, int mm);
    Data(int gg);
    Data(const std::string d);
    std::string formato_breve();
    int get_mese() {return mese;} ;
    bool set_mese(int mese);		//modificatore (setter)
    static tm* data_corrente();
    bool valida(int gg, int mm, int aa);
  private:
    int giorno {oggi->tm_mday};
    int mese {oggi->tm_mon};
    int anno {oggi->tm_year+1900};
    static tm* oggi;
};


#endif // DATA_H_INCLUDED
