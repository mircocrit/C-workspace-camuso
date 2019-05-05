#ifndef BAD_H_
#define BAD_H_
#include <iostream>
#include <stdexcept>
#include <memory>
#include "solleva_eccezione.h"


using namespace std;

class bad {
	public:
	   bad(){
		cout << "costruttore bad\n";
		system("pause");
		a = new int[100000000];
		system("pause");
		b = new solleva_eccezione();
	   }

	   ~bad() {
		 cout << "distruttore bad\n";
		 system("pause");
		 delete a;
	   }
	private:
	   int * a;
	   solleva_eccezione *b;
};

#endif /* BAD_H_ */
