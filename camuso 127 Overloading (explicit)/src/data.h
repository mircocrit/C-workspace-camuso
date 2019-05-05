#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include <string>
#include <ctime>
#include <iostream>

class Data{
  public:
    Data();
    Data(int gg, int mm, int aa);
    Data(int gg, int mm);
    Data(int gg);

    Data(const std::string d);
    Data(const char v[]) : Data( std::string(v) ) {}	//chiamo il costruttore con string

    std::string formato_breve() const;
    int get_giorno() const {return giorno;}
    int get_mese() const {return mese;}
    int get_anno() const {return anno;}

    bool operator==(const Data&);
    bool operator==(std::string);
    bool operator<(const Data&);
    bool operator>(const Data&);
    Data operator++(int);
    Data& operator++();

    static tm* data_corrente();
    bool valida(int gg, int mm, int aa);
    static bool bisestile(int);
    static int giorni_mese(int, int);

    friend std::ostream& operator<<(std::ostream&, const Data&);
    explicit operator std::string() const;					//EXPLICIT

   private:
    int giorno {oggi->tm_mday};
    int mese {oggi->tm_mon+1};
    int anno {oggi->tm_year+1900};
    static tm* oggi;
};

std::ostream& operator<<(std::ostream& , const Data& );

#endif // DATA_H_INCLUDED
