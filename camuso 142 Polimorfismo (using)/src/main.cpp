#include <iostream>
#include "Figura.h"
#include "Rettangolo.h"
#include "Cerchio.h"
#include "Quadrato.h"
#include "Triangolo.h"
#include <cstdlib>
#include <ctime>

using namespace std;

void fa_qualche_cosa_con_le_figure(Figura& f){  f.perimetro();}

int main(){
    Rettangolo_aureo r{5,4};	//distruttore chiamato da figure
    Figura *f = new Triangolo{}; //3,4,5};
    delete f;
    system("pause");
    return 0;
}
