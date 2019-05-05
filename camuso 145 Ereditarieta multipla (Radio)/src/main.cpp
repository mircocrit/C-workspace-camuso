#include <iostream>
#include <fstream>
#include "Radio.h"

using namespace std;

int main(){
    Radio r{"File Unico di Log.txt"};	//costuisco una radio
    r.write();	//chiama i metodi write di trasmitt e ricevente, che chiamano get file di debug
    system("pause");
    return 0;
}
