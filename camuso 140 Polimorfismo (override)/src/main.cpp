#include <iostream>
#include "Figura.h"
#include "Rettangolo.h"
#include "Cerchio.h"
#include "Quadrato.h"
#include "Triangolo.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    Figura *v_F[1000];
    int num_figure=5000;
    srand( time(0) );
    for(int i=0; i<5; i++) {
      switch (rand()%4){
        case 0:
          cout << "Cerchio"<<endl;
          v_F[i] = new Cerchio(rand()%10 + 1);
          break;
        case 1:
          cout << "Rettangolo"<<endl;
          v_F[i] = new Rettangolo(rand()%10 + 1, rand()%10 +1);
          break;
        case 2:
          cout << "Quadrato"<<endl;
          v_F[i] = new Quadrato(rand()%10 + 1);
          break;
        case 3:
          cout << "Triangolo"<<endl;
          v_F[i] = new Triangolo(rand()%10 + 1,rand()%10 + 1,rand()%10 + 1 );
          break;
      }
    }
    num_figure=5;
    cout << "-------------------------\n";
    double traccia_totale=0;
    for(int i=0; i<num_figure; i++){
      traccia_totale += v_F[i]->perimetro();
    }
    cout << traccia_totale << endl;
    system("pause");
    return 0;
}
