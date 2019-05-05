#include <iostream>
#include "data.h"
#include "DataING.h"

using namespace std;

class x{
	public:
	  x(){
		DataING d{};
		//cout << d.formato_breve() << endl;
	  }
	private:
};

int main(){
    DataING d1{10, 27, 2017};
    Data d{};
    cout << d1.formato_breve() << endl;
    system("pause");
    return 0;
}

