#ifndef GOOD_H_
#define GOOD_H_
#include <iostream>
#include <stdexcept>
#include <memory>
#include "solleva_eccezione.h"

using namespace std;

class good {
	public:
	   good(){
		cout << "costruttore good\n";
		system("pause");
		a.reset(new int[100000000]);
		system("pause");
		b = new solleva_eccezione();
	   }

	   ~good(){
		 cout << "distruttore good\n";
		 system("pause");
		 delete b;
	   }
	private:
	   unique_ptr<int> a;		//con smart pointers
	   solleva_eccezione *b;
};

#endif /* GOOD_H_ */
