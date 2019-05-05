#include <iostream>
#include <cstring>

using namespace std;


/* abilitare per union NON anonima
union t_riferimento
{
  char sigla[3];
  int codice_nazione;

};
*/

//con union anonima
struct t_cliente
{
  bool UE;            //true se appartiene all'Unione Europea

  union
  {
    char sigla[3];      //usato solo se UE==true; es: ITA, SPA, FRA
    int codice_nazione; //usato solo se UE==false
  };
  //ecc.
};


/* struct t_cliente
{
  bool UE;            //true se appartiene all'Unione Europea
  t_riferimento riferimento;

  //ecc.
}; */


/* struct t_cliente
{
  bool UE;            //true se appartiene all'Unione Europea
  char sigla[3];      //usato solo se UE==true; es: ITA, SPA, FRA
  int codice_nazione; //usato solo se UE==false

  //ecc.
};  */

t_cliente elenco_clienti[5000];

int main()
{

  /* per union NON anonima
    //per un cliente UE
    elenco_clienti[0].UE=true;
    strncpy(elenco_clienti[0].riferimento.sigla, "ITA", 3);

    //per un cliente non UE
    elenco_clienti[1].UE=false;
    elenco_clienti[1].riferimento.codice_nazione = 12;

    string s(elenco_clienti[0].riferimento.sigla);

    cout << s << endl;
    cout <<elenco_clienti[1].riferimento.codice_nazione << endl;
  */

  //con  union anonima
    //per un cliente UE
    elenco_clienti[0].UE=true;
    strncpy(elenco_clienti[0].sigla, "ITA", 3);

    //per un cliente non UE
    elenco_clienti[1].UE=false;
    elenco_clienti[1].codice_nazione = 12;

    string s(elenco_clienti[0].sigla);

    cout << s << endl;
    cout <<elenco_clienti[1].codice_nazione << endl;

    return 0;
}
