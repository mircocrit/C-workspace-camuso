#include <iostream>
#include "Persona.h"
#include "Insegnante.h"

using namespace std;

int main(){
    Insegnante fcamuso("FCamuso", 21, "MegaPresideGalattica", 9000, "");
    cout << "Nome: " << fcamuso.get_nome() << endl;					//persona
    cout << "Eta': " << fcamuso.get_eta() << endl;					//persona
    cout << "Stipendio: " << fcamuso.get_stipendio() << endl;		//impiegato
    cout << "Il boss: " << fcamuso.get_datore_lavoro() << endl;		//impiegato
    system("pause");
    return 0;
}
