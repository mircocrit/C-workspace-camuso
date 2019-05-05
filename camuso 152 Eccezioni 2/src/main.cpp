#include <iostream>

using namespace std;

int liv4_1( ){
  //istruzioni...potrebbe restituire un codice !=0 al verificarsi di errori 'intercettati' dalla logica della funzione
  return 0;
}

int liv3_2( ){
  int esito = liv4_1();
  if (esito==0){  //prosegui con le elaborazioni che potrebbero evidenziare altri tipi di errore
  }
  else{
    switch(esito){
    case 1: //gestione
      break;
    case 2: //passa al livello precedente
      return 2;
      break;
    //ecc.
    }
  }
  //a seconda di altri errori potrebbe restituire un codice !=0
  return 0;
}

int liv2_1( ){
  int esito = liv3_2();
  if (esito==0){ //prosegui con le elaborazioni che potrebbero evidenziare altri tipi di errore
  }
  else {
    switch(esito){
    case 1: //gestione
      break;
    case 2: //gestione
      break;
    //ecc.
    }
  }
  //a seconda di altri errori potrebbe restituire un codice !=0
  return 0;
}



int main(){
  int esito = liv2_1();
  if ( esito==0 ){
    cout << "Operazioni eseguite correttamente\n";
  }
  else{
    switch(esito){
    case 1: //gestione
      break;
    case 2: //gestione
      break;
    //ecc.
    }
  }
  system("pause");
  return 0;
}
