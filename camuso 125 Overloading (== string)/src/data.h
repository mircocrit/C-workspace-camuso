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
    int get_giorno() const {return giorno;}
    int get_mese() const {return mese;}
    int get_anno() const {return anno;}

    bool operator==(const Data&);
    bool operator==(std::string);		//data una stringa
    bool operator<(const Data&);
    bool operator>(const Data&);
    Data operator++(int);
    Data& operator++();

    static tm* data_corrente();
    bool valida(int gg, int mm, int aa);
    bool uguale_a(Data altra);
    static bool bisestile(int);
    static int giorni_mese(int, int);

   private:
    int giorno {oggi->tm_mday};
    int mese {oggi->tm_mon+1};
    int anno {oggi->tm_year+1900};
    static tm* oggi;
};

#endif // DATA_H_INCLUDED
