#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Contatto.h"
#include "Rubrica.h"
using namespace std;

class C{
	public:
		C (int x) : x{x} {}
		void f () {			[this] () { cout << x; } ();}	//funzione lambda
	private:
        int x;
};

int main(){
    Rubrica r{};
//  //SENZA CLOSURE
    /* vector<Contatto> trovati =
      r.cerca_per_indirizzo( [] (string indirizzo)
               {return indirizzo.find("Monti") != string::npos; });

    for (Contatto c : trovati)
      cout << c.getCognome() << " - Tel. " << c.getTelefono()<< endl;
    */

    C c{18};
    c.f();

    cout <<  [] () -> string { cout << "lambda!\n"; return "lamda terminata\n";} ();

    string mess = "lambda!\n";
    int n = 100;
    [n] () { cout << n;} ();

    cout << n << endl;

//  vector<int> v {1,2,3,4,5,6};
//
//  for (auto iteratore = v.begin(); iteratore!=v.end(); iteratore++)
//  {
//    cout << *iteratore << endl;
//  }
//
//  for_each( v.begin(), v.end(), [] (int val) { cout << val;} );

  //CON CLOSURE
    string cognome_cercato ="";
    cout << "Cerca: ";
    cin>>cognome_cercato;

    int quante_cifre=0;
    cout << "Telefono a quante cifre: ";
    cin>>quante_cifre;

    vector<Contatto> trovati =
      r.cerca_per_cognome( [&] (const string& cognome, const string& telefono)
               {return
                  cognome.find(cognome_cercato) != string::npos
                    &&
                  telefono.length() == quante_cifre;
               });

    for (Contatto c : trovati)
      cout << c.getCognome() << " - Tel. " << c.getTelefono()<< endl;
    system("pause");
    return 0;
}
