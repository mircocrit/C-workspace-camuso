#ifndef CONFRONTO_H_
#define CONFRONTO_H_

#include <iostream>
#include <cmath>

using namespace std;

class Confronto{
  public:
    bool operator()(const Cliente& c1, const Cliente& c2) const{
      return trunc(c1.get_fatturato()) < trunc(c2.get_fatturato());
    }
};

template<typename T>
void sort(T v[], int num_ele){
  for (int i=0; i<num_ele-1; i++)
    for (int j=i+1; j<num_ele; j++)
      if (v[j]<v[i])
        swap(v[i], v[j]);
}

template<typename T>
void sort2( T v[], int num_ele,bool (*)(const Cliente& , const Cliente&)){
  for (int i=0; i<num_ele-1; i++)
    for (int j=i+1; j<num_ele; j++)
      if ( minore_di(v[j], v[i]) )
        swap(v[i], v[j]);
}

template< typename T, typename C>
void sort3(T v[], int num_ele){	//oggetto su cui usare il funtore per confronto
  C confronta;
  for (int i=0; i<num_ele-1; i++)
    for (int j=i+1; j<num_ele; j++)
      if ( confronta(v[j], v[i]) )
        swap(v[i], v[j]);
}

template<typename T>
void stampa(T v[], int num_ele){
  for(int i=0; i<num_ele; i++)
    cout << v[i] << endl;
}

bool minore_di(const Cliente& c1, const Cliente& c2){
  return trunc( c1.get_fatturato() )  < trunc( c2.get_fatturato() );
}

#endif /* CONFRONTO_H_ */
