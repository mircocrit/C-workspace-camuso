#include <iostream>
#include <string>

#include "Contenitore.h"

using namespace std;

int main(){
    Contenitore c1 {"primo contenitore", 1};	//costruttore
    cout << "c1: ";
    c1.stampa();

    Contenitore c2 {c1};			//costruttore di copia
    c2.set_id("secondo contenitore");	//setter

    for(int i=0; i<10; i++)
      c2.set_valore(i,2);

    cout << "c2: ";
    c2.stampa();

    Contenitore c3{"",7};		//costruttore
    c3 = c2;			//copy assignment
    cout << "c3: ";
    c3.stampa();

    c2.set_valore(0,1);
    c2.set_valore(1,1);

    cout << "c3: ";
    c3.stampa();

    c3 = c2 = c1;
    cout << "c2: ";
    c3.stampa();
    //cout << "c3: ";
    //c3.stampa();
    /*cout << "\nIndirizzo memoria primo contenitore: " << &c1 << endl;
	cout << "Indirizzo memoria secondo contenitore: " << &c2 << endl;
	cout << "Indirizzo memoria terzo contenitore: " << &c3 << endl;
     */
    system("pause");
    return 0;
}
