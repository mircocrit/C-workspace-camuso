#include <iostream>
#include "Figura.h"
#include <cstdlib>
#include <ctime>
#include "Figura.h"
#include "Cerchio.h"

using namespace std;

int main(){
    Figura *f = new Cerchio(8);
    cout << f->area() << endl;
    system("pause");
    return 0;
}
