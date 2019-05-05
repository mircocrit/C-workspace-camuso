#include <iostream>
#include "data.h"

using namespace std;

int main(){
    Data d(9,8, 2018);
    cout << "Oggi e' il "<<d.formato_breve() << endl;
    system("pause");
    return 0;
}
