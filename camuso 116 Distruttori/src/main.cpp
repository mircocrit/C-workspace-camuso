#include <iostream>
#include "Contenitore.h"
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
   f1();
   Contenitore main_c2{"main_c2",20};
   cout <<"Altre elaborazioni ...\n";
   system("pause");
   return 0;
}
