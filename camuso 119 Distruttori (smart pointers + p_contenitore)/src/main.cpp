#include <iostream>
#include <memory>
#include "Contenitore.h"
#include "P_Contenitore.h"

using namespace std;


void f1(){
   Contenitore f1_c1{"f1_c1",5};
  //... altre istruzioni :
  if(true){
     Contenitore f1_c2{"f1_c2",10};
  }
  //f_c2 vedra' richiamato il suo distruttore
  //altre istruzioni ...
}


int main(){
   //Contenitore main_c1{"main_c1",10};
   unique_ptr<Contenitore> p( new Contenitore("main_con_new",50) );

   p_Contenitore smart_p("smart_p",50);
   smart_p.get_p()->stampa();

//   delete smart_p.get_p();
   p_Contenitore smart_p2{smart_p};
   smart_p2.get_p()->set_id("smart_p2");
   smart_p2.get_p()->set_valore(1,100);

   smart_p2.get_p()->stampa();
   smart_p.get_p()->stampa();
   system("pause");
   //delete smart_p.get_p();
  return 0;
}
