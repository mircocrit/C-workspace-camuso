#ifndef DATAING_INCLUDED
#define DATAING_INCLUDED

#include <string>
#include <ctime>
#include <iostream>
#include "data.h"

class DataING : Data {
	public:
	  DataING() : Data(){}
	  DataING(int mese, int giorno, int anno) : Data(giorno, mese, anno){ }
	private:
};

#endif // DATAING_INCLUDED
