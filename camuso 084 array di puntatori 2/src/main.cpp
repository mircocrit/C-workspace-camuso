#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int MAX_ELE=1200;

struct t_elemento{
   int n;		//parte dati
   double v[100000];		//parte dati 'pesante'
};

//dichiarare qui il vettore per allocarlo nello heap (il cosiddetto free store)
//dentro il main verrebbe allocato sullo stack esaurendolo....
t_elemento v[MAX_ELE];

int main(){
    time_t start = time(0), stop;

    srand(10);
    for(int i=0; i<MAX_ELE; i++){
      v[i].n = rand();
    }

    //bubble sort
    for(int i=0; i<MAX_ELE - 1; i++)
    { //cout << i << endl;
      for(int j=i+1; j<MAX_ELE; j++)
      {
        if(v[j].n <= v[i].n)
       {
          t_elemento temp = v[i];
          v[i] = v[j];
          v[j] = temp;
       }
      }
    }

    stop=time(0);

    for(int i=0; i<10; i++){
    	cout << v[i].n << " ";
    }
    cout << endl;

    cout << "tempo impiegato con array: "<< difftime(stop, start) << endl;
    system("pause");


    srand(10);
    for(int i=0; i<MAX_ELE; i++){
      v[i].n = rand();
    }


    t_elemento *vP[MAX_ELE]; //array di tot puntatori a t_nodo
    for (int i=0; i<MAX_ELE; i++)
      vP[i] = &v[i];  //indirizzi degli elementi dell'array statico

//il trucco sta nell'ordinare NON gli elementi pesanti dell'array ma i puntatori
    start=time(0);
    cout << "Con array di puntatori ...\n";
    for(int i=0; i<MAX_ELE - 1; i++)
      for(int j=i+1; j<MAX_ELE; j++)
        if(vP[j]->n <= vP[i]->n)
         {
          t_elemento *temp = vP[i];
          vP[i] = vP[j];
          vP[j] = temp;
         }

    //la stampa ordinata la otteniamo scorrendo l'array di puntatori
    stop=time(0);

    for(int i=0; i<10; i++){
    	cout << vP[i]->n << " ";
    }
    cout << endl;

    cout << "tempo impiegato con array di puntatori: " << difftime(stop, start) << endl;

    return 0;
}
