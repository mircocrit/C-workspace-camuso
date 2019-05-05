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

bool operator==(string s, Data d){  return Data{s} == d;}

int main(){
    Data d1{7,1,2017};
    cout << d1 << endl;
    system("pause");
    return 0;
}
