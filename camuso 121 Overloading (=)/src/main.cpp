#include <iostream>
#include "data.h"

using namespace std;

int main(){
    Data d1{16,12,2016};
    Data d2{16, 12, 2016};

    if (d1.get_giorno()==d2.get_giorno() && d1.get_mese()==d2.get_mese() &&   d1.get_anno()==d2.get_anno() )
      cout << "Le date sono uguali\n";
    else
      cout << "Le date sono diverse\n";

    if ( d1.operator==(d2) )			 // if ( d1.uguale_a(d2) )		//if(d1==d2)
      cout << "Le date sono uguali\n";
    else
      cout << "Le date sono diverse\n";

    system("pause");
    return 0;
}
