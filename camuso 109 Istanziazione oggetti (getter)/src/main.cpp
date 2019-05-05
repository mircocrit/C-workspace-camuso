#include <iostream>
#include "data.h"

using namespace std;

Data crea_data(){
  Data d{19,11,2015};
  return d;
}

int main(){
    Data d1 = Data(31,8, 2016);	//istanziazione
    Data d2(31,7, 2016);
    Data d3{31,8, 2016}; //liste di inizializzazione sempre da preferire
    Data d4;
    Data d5 = d3; //costruttore di copia di default
    Data d6{d3};  //costruttore di copia di default
    Data d6bis = crea_data();
    Data *d7 = new Data{d3};		//dinamica

    cout << "d1 - Oggi e' il "<<d1.formato_breve() << endl;
    cout << "d2 - Oggi e' il "<<d2.formato_breve() << endl;
    cout << "d3 - Oggi e' il "<<d3.formato_breve() << endl;
    cout << "d5 - Oggi e' il "<<d5.formato_breve() << endl;
    cout << "d6 - Oggi e' il "<<d6.formato_breve() << endl;
    cout << "d7 - Oggi e' il "<<d7->formato_breve() << endl;
    cout<<d1.date_uguali(d2)<<endl;
    delete d7;
    system("pause");
    return 0;
}
