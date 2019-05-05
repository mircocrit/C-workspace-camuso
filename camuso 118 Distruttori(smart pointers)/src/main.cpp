#include <iostream>
#include <memory>
#include <string>
#include "Contenitore.h"

using namespace std;

int main(){
   unique_ptr<int> sp{new int};		//samrt pointer
   delete sp.get();

   Contenitore c1{"c1",1};
   Contenitore c2{c1}; //copy constructor
   c2.set_id("c2");
   c2.set_valore(0,2);
   c1.stampa();
   c2.stampa();
   Contenitore c3{"c3",3};
   c3=c2;
   c3.set_id("c3");
   c3.set_valore(1,3);
   c2.stampa();
   c3.stampa();

   Contenitore *c4 = new Contenitore("c4", 4); //niente chiamata al distruttore CATTIVA PRATICA!

   unique_ptr<Contenitore> c5 {new Contenitore("c5", 5) }; //MOLTO MEGLIO :)
   return 0;
}
