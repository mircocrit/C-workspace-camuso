#include <iostream>

#include "Figura.h"
#include "Rettangolo.h"
#include "Cerchio.h"
#include "Quadrato.h"
#include "Triangolo.h"

using namespace std;

int main(){
    Triangolo v_T[1000];
    int num_tri=20;
    Rettangolo v_R[1000];
    int num_ret=40;
    Quadrato v_Q[1000];
    int num_qua=10;
    Cerchio v_C[1000];
    int num_cer=200;
    double traccia_totale=0;
    //calcolo il perimetro totale delle figure
    for(int i=0; i<num_tri; i++){
      traccia_totale += v_T[i].perimetro();
    }
    cout<<traccia_totale<<endl;
    for(int i=0; i<num_ret; i++){
      traccia_totale += v_R[i].perimetro();
    }
    cout<<traccia_totale<<endl;
    for(int i=0; i<num_qua; i++){
      traccia_totale += v_Q[i].perimetro();
    }
    cout<<traccia_totale<<endl;
    for(int i=0; i<num_cer; i++){
      traccia_totale += v_C[i].perimetro();
    }
    cout<<traccia_totale<<endl;
    system ("pause");
    return 0;
}
