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
    int get_giorno() {return giorno;}
    int get_mese() {return mese;}
    int get_anno() {return anno;}

    bool operator==(const Data&);	//overloading operatori standard
    bool operator<(const Data&);
    bool operator>(const Data&);
    Data operator++(int);

    static tm* data_corrente();
    bool valida(int gg, int mm, int aa);
    static bool bisestile(int);
    static int giorni_mese(int, int);

   private:
    int giorno {oggi->tm_mday};
    int mese {oggi->tm_mon};
    int anno {oggi->tm_year+1900};
    static tm* oggi;
};

#endif // DATA_H_INCLUDED
