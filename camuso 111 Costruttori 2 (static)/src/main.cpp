#include <iostream>
#include "data.h"

using namespace std;

Data crea_data(){
  Data d{19,11,2015};
  return d;
}

bool date_uguali(Data d1, Data d2){
  return true;
}

int main(){
    Data d1 = Data(2,1, 2016);
    Data d2(2,1);
    Data d3{2};
    Data d4;
    Data d5("30082018");
    cout << "d1 - Oggi e' il "<<d1.formato_breve() << endl;
    cout << "d2 - Oggi e' il "<<d2.formato_breve() << endl;
    cout << "d3 - Oggi e' il "<<d3.formato_breve() << endl;
    cout << "d4 - Oggi e' il "<<d4.formato_breve() << endl;
    cout << "d5 - Oggi e' il "<<d5.formato_breve() << endl;
    cout<<d5.get_mese()<<endl;
    cout<<d5.data_corrente()<<endl;
    system("pause");
    return 0;
}

