#include <iostream>

using namespace std;

 //sono consentite dichiarazioni forward:
 enum class t_sapori;
 void f(t_sapori sapore);


int main()
{
//enum pre C++ 11
   enum giornoSettimana
      {Lun, Mar, Mer, Gio, Ven, Sab, Dom}; //Lun==0, Mar==1 ecc.

   giornoSettimana oggi = Lun;

   //oggi = 8  ERRORE DAL COMPILATORE
   //oggi = 3  IDEM

   //punto debole 1
   //visibilita' degli enumeratori allo stesso livello
   //della enum stessa

   enum colori {giallo, rosso, verde, blu};
   //enum colore_carrozzeria {silver, bianca, verde};

   colori sfondo=giallo;

   //punto debole 2
   //controllo insufficiente da parte del compilagtore
   if ( oggi==giallo )
     cout << "???\n";

   if (oggi == sfondo)
     cout << "???\n";

 enum class t_colori {giallo, rosso, verde, blu};
 enum class t_spettro {rosso, arancione, giallo, verde,
                       azzurro, indaco, violetto};

 t_spettro classe_sole = t_spettro::giallo;
 t_colori limone = t_colori::giallo;

 //questa volta il compilatore ci blocca ... ERRORE
 //if (classe_sole == limone)
   //cout << "???????\n";

  enum class t_stati_semaforo : char {rosso, giallo, verde} ;
   return 0;
}
