#ifndef SOLLEVA_ECCEZIONE_H_
#define SOLLEVA_ECCEZIONE_H_

#include <iostream>
#include <stdexcept>
#include <memory>

using namespace std;

class solleva_eccezione {
 public:
   solleva_eccezione() { throw std::exception(); }
   ~solleva_eccezione() {cout << "distruttore di solleva_eccezione\n";}
};

#endif /* SOLLEVA_ECCEZIONE_H_ */
