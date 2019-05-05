#include <iostream>

const int LETTURE=240;
using namespace std;

int main(){
	int num_centraline=0; double media=0.0;
	cout<<"Quante sono le centaline?";
	cin>>num_centraline;

	int* pAreaInt = new int[num_centraline*LETTURE];

	for(int c=0;c<num_centraline;c++)
		for(int lettura=0;lettura<LETTURE;lettura++){

			pAreaInt[c*LETTURE+lettura]=rand()%200+1;		//val tra 1 e 200
			media+=pAreaInt[c*LETTURE+lettura];
		}

	int letture_totali=num_centraline*LETTURE;
	cout<<"Valore medio del pm10:"<<media/letture_totali;

	int superataMedia=0;
	for(int c=0;c<letture_totali;c++)
		if(pAreaInt[c]>media)
			superataMedia++;

	cout<< "La media e' stata superata" <<superataMedia<< " volte\n";

	delete pAreaInt;		//senza parentesi quadre
	pAreaInt=nullptr;		//azzerare puntatore
	system("pause");
	//if( pAreaInt!=nullptr)
	return 0;
}

