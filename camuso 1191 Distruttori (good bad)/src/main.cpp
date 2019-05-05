#include <iostream>
#include <stdexcept>
#include <memory>
#include "good.h"
#include "bad.h"
#include "solleva_eccezione.h"

using namespace std;

int main(){
    try{good obj;}
    catch(exception){
      cout << "Eccezione catturata\n";
      system("pause");}
    system("pause");
    return 0;
}
