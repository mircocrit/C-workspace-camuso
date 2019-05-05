#include <iostream>
#include "Figura.h"
#include "Rettangolo.h"
#include "Cerchio.h"
#include "Quadrato.h"
#include "Triangolo.h"
#include <cstdlib>
#include <ctime>

using namespace std;

void fa_qualche_cosa_con_le_figure(Figura& f){  	f.perimetro();}

int main(){
    Triangolo *t1 = new Triangolo(3,4,5);
    Figura& ref_triangolo = *t1;		//LATE BINDING: si attiva non solo con i puntatori ma anche con i reference
    ref_triangolo.perimetro();		 //ed e' più' corretto affermare che il late binding si attiva in generale quando i metodi sono invocati su un puntatore o un reference ad un oggetto di classe base; cioe' il fatto di usare oggetti creati con new non è in realta' un requisito irrinunciabile
    fa_qualche_cosa_con_le_figure(*t1);
    Cerchio c1 = Cerchio(5);
    Figura* puntatore_figura = &c1;		//CASO REFERENCE
    puntatore_figura->perimetro();
    Figura& ref_figura = c1;
    ref_figura.perimetro();
    system("pause");
    return 0;
}
