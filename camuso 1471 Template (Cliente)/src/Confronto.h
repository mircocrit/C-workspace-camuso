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

template< typename T, typename C=std::less<T> >
void sort2(T v[], int num_ele){
  C confronta;		//oggetto su cui usare il funtore per confronto
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

#endif /* CONFRONTO_H_ */
