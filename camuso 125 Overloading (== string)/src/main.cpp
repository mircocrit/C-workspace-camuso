#include <iostream>
#include <memory>
#include "data.h"

using namespace std;

void test(){
  int a = 3;
  int b = 0;
  int &r = ++b;
  int c = a + ++b;
  cout << "c:" << c << "  b: " << b << endl;
  int d = a++ + b;
  cout << "d:" << d << "  a: " << a << endl;
}

int global_int = 56;


int &test2(){  return global_int;}

int test3(){  return global_int;}


Data test4(){
  Data d{};
  return d;
}

//l'overload di un operatore puo' avvenire anche come funzione esterna svincolata dalla classe
bool operator==(string s, Data d){  return Data{s} == d;}

//overload di pre incremento svincolato dalla classe
//Data& operator++(Data& data){  data.giorno ++;}

int main(){
    Data d1{2,1,2017};
    if ("02-01-2017" == d1)
      cout << "Le date sono uguali\n";
    if (d1 == "02-01-2017")
      cout << "Le date sono uguali\n";
    ++d1;
    cout << d1.formato_breve() << endl;
    ++++d1;
    cout << d1.formato_breve() << endl;

    //cout << d1.get_giorno() + (d1++).get_giorno() << endl;

    int i=1;
    int j = ++++i; //OK ++i genera un l-value
    //int k = (i++)++; //NO! (i++) non e' un l-value ma un r-value

    //l-value  r-value
    int n;
    n = 6*3; //n e' l-value, 6*3 no

    int *p = nullptr;
    p = new int;
    *p =100;

    int m = 20;
    m = n;

    //(m<5 ? m : n) = 18;
    cout << n << endl;

    test2() = 21;
    cout << global_int << endl;

    //test3() = 21; //NO i valori restituiti by value sono r-value

    test4() = d1;
    test4().operator=(d1);

    test4();
    rand();


    d1++;
      //equivale a
    d1.operator++(23424);
    unique_ptr<Data> d2( new Data() );
    cout << d2->formato_breve() << endl;
    if (d1<*d2) {cout << "prima data minore della seconda\n";}
    system("pause");
	return 0;}

