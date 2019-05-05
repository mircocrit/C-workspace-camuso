#include <iostream>
#include "Contenitore.h"
#include "p_Contenitore.h"
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
   Contenitore main_c1{"main_c1",10};
   Contenitore *p = new Contenitore{"main_con_new",50};
   p_Contenitore smart_p("main_con_new_SMART",50);
   smart_p.get_p()->stampa();
   system("pause");
   return 0;
}
