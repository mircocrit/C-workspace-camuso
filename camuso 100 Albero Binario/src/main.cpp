#include <iostream>
#include <time.h>
#include <cstdlib>
#include "Albero_Binario.h"

using namespace std;

int main(){
    //srand( time(0) ); //inizializziamo generatore numeri casuali

    t_nodo *radice=crea_albero_bilanciato(10);

    //stampa 'a mano'
    cout <<"                                ";
    cout << radice->info << endl; //41
    cout << "                    "
         << radice->sx->info //67
         << "                    "
         << radice->dx->info << endl; //78

    t_nodo *sx_l2 = radice->sx; //67
    t_nodo *dx_l2 = radice->dx; //78

    cout <<"               ";
    cout << sx_l2->sx->info << "        "  << sx_l2->dx->info
         << "         "
         << dx_l2->sx->info << "      "  << dx_l2->dx->info << endl;

    cout << "           ";
    cout << sx_l2->sx->sx->info << "         "   //0
         << sx_l2->dx->sx->info << "          "  //24
         << dx_l2->sx->sx->info << endl;         //62

    cout << "\n\n\n";
    stampa_albero_binario_pre_order(radice);
    system("pause");
    return 0;
}
