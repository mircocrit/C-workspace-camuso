#include <iostream>

using namespace std;

void stampa_vettore(int *p, int n_ele){
  for(int i=0; i<n_ele; i++)
    cout << *p++ << endl;
}

void espandi_vettore(int **v, int &num_ele){
  int *p = new int[num_ele+10];
  cout <<"Indirizzo del nuovo blocco di int: "<<p << endl;
  for(int i=0; i<num_ele; i++)
     p[i] = (*v)[i];
  for(int i=num_ele; i<num_ele+10; i++)
     p[i] = 10*i;
  num_ele+=10;
  delete[] (*v);
  *v=p; //v passato per valore! non modificabile
}


int main(){
//    char *nomi[] = {"prima", "seconda", "terza"};
//    cout << nomi[0] << " " << nomi[2] <<endl;

//caso 1: argomenti in ingresso al programmas stesso
//    cout << "Sono il programma "
//         << argv[0] << endl;
//
//    cout <<"e sono stato invocato con questi parametri: "<<endl;
//    for(int i=1; i<argc; i++)
//      cout << argv[i] << endl;

//caso 2: puntatore modificabile da una funzione
    int *p = new int[3] {10,20,30};
    int num_ele=3;
    cout <<"Indirizzo memorizzato in p prima della funzione: "<<p << endl;
    espandi_vettore(&p,num_ele);
    cout <<"Indirizzo memorizzato in p dopo la chiamata di funzione: "<<p << endl;
    stampa_vettore(p, num_ele);
    system("pause");
    return 0;
}
